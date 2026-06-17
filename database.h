#pragma once
#include <mysql.h>
#include <string>

class Database {
private:
    MYSQL* connection;
    MYSQL_RES* result;
    MYSQL_ROW row;
    std::string lastError;

public:
    Database() {
        connection = mysql_init(NULL);
        result = NULL;
        lastError.clear();
    }

    ~Database() {
        if (result) {
            mysql_free_result(result);
            result = NULL;
        }
        if (connection) {
            mysql_close(connection);
            connection = NULL;
        }
    }

    // Return last error as std::string
    const std::string& GetLastError() const { return lastError; }

    bool Connect(const char* host = "127.0.0.1",
        const char* user = "root",
        const char* pass = "payrollsystem23!",
        const char* db = "payroll",
        unsigned int port = 3306)
    {
        // Re-init connection if needed
        if (!connection) {
            connection = mysql_init(NULL);
            if (!connection) {
                lastError = "mysql_init returned NULL";
                return false;
            }
        }

        MYSQL* conn = mysql_real_connect(
            connection,
            host,
            user,
            pass,
            db,
            port, NULL, 0
        );

        if (!conn) {
            lastError = mysql_error(connection) ? mysql_error(connection) : "unknown error";
            return false;
        }

        lastError.clear();
        return true;
    }

    bool CheckUserLogin(const char* username, const char* password) {
        std::string query = "SELECT * FROM users WHERE username='";
        query += username;
        query += "' AND password_hash='";
        query += password;
        query += "'";

        if (mysql_query(connection, query.c_str())) {
            lastError = mysql_error(connection) ? mysql_error(connection) : "mysql_query failed";
            return false;
        }

        result = mysql_store_result(connection);

        if (result && mysql_num_rows(result) > 0) {
            mysql_free_result(result);
            result = NULL;
            return true;
        }

        if (result) {
            mysql_free_result(result);
            result = NULL;
        }
        return false;
    }

    bool ExecuteQuery(const char* query) {
        if (mysql_query(connection, query)) {
            lastError = mysql_error(connection) ? mysql_error(connection) : "mysql_query failed";
            return false;
        }
        lastError.clear();
        return true;
    }

    MYSQL_RES* GetResults() {
        return mysql_store_result(connection);
    }

    // FIND NEXT AVAILABLE ID (reuse deleted IDs)
    int GetNextAvailableEmployeeId() {
        std::string query = "SELECT COALESCE(MIN(t1.emp_id)+1, 1) AS next_id FROM employees t1 LEFT JOIN employees t2 ON t1.emp_id + 1 = t2.emp_id WHERE t2.emp_id IS NULL";

        if (ExecuteQuery(query.c_str())) {
            MYSQL_RES* res = mysql_store_result(connection);
            if (res) {
                MYSQL_ROW row = mysql_fetch_row(res);
                if (row) {
                    int next_id = atoi(row[0]);
                    mysql_free_result(res);
                    return next_id;
                }
                mysql_free_result(res);
            }
        }
        return 1;  // Default to 1 if error
    }

    // ADD EMPLOYEE (WITH AUTO-GENERATED emp_code from ID)
    bool AddEmployee(const char* full_name, const char* position,
        const char* department, double daily_rate) {

        // Get next available ID (reuses deleted IDs)
        int next_id = GetNextAvailableEmployeeId();

        // Auto-generate emp_code from ID: EMP001, EMP002, etc.
        std::string emp_code = "EMP";
        if (next_id < 10) {
            emp_code += "00";  // EMP001, EMP002, ..., EMP009
        }
        else if (next_id < 100) {
            emp_code += "0";   // EMP010, EMP011, ..., EMP099
        }
        emp_code += std::to_string(next_id);  // EMP100+

        std::string query = "INSERT INTO employees (emp_id, emp_code, full_name, position, department, daily_rate) VALUES (";
        query += std::to_string(next_id);
        query += ", '";
        query += emp_code;
        query += "', '";
        query += full_name;
        query += "', '";
        query += position;
        query += "', '";
        query += department;
        query += "', ";
        query += std::to_string(daily_rate);
        query += ")";

        return ExecuteQuery(query.c_str());
    }

    // GET ALL EMPLOYEES
    MYSQL_RES* GetAllEmployees() {
        if (ExecuteQuery("SELECT emp_id, emp_code, full_name, position, department, daily_rate FROM employees")) {
            return mysql_store_result(connection);
        }
        return NULL;
    }

    // DELETE EMPLOYEE
    bool DeleteEmployee(int emp_id) {
        std::string query = "DELETE FROM employees WHERE emp_id=";
        query += std::to_string(emp_id);
        return ExecuteQuery(query.c_str());
    }

    // UPDATE EMPLOYEE
    bool UpdateEmployee(int emp_id, const char* full_name, const char* position,
        const char* department, double daily_rate) {
        std::string query = "UPDATE employees SET full_name='";
        query += full_name;
        query += "', position='";
        query += position;
        query += "', department='";
        query += department;
        query += "', daily_rate=";
        query += std::to_string(daily_rate);
        query += " WHERE emp_id=";
        query += std::to_string(emp_id);

        return ExecuteQuery(query.c_str());
    }

    // SAVE PAYROLL HISTORY (WITH PAYROLL_ID REUSE)
    bool SavePayroll(int emp_id, int days_worked, double overtime_hours, double basic,
        double overtime_pay, double gross, double deductions, double net) {

        // Get next available payroll_id (reuses deleted IDs)
        int next_id = GetNextAvailablePayrollId();

        std::string query = "INSERT INTO payroll_history (payroll_id, emp_id, payroll_period_start, payroll_period_end, days_worked, overtime_hours, basic_salary, overtime_pay, gross_salary, deductions, net_salary, status) VALUES (";
        query += std::to_string(next_id);
        query += ", ";
        query += std::to_string(emp_id);
        query += ", CURDATE(), CURDATE(), ";
        query += std::to_string(days_worked);
        query += ", ";
        query += std::to_string(overtime_hours);
        query += ", ";
        query += std::to_string(basic);
        query += ", ";
        query += std::to_string(overtime_pay);
        query += ", ";
        query += std::to_string(gross);
        query += ", ";
        query += std::to_string(deductions);
        query += ", ";
        query += std::to_string(net);
        query += ", 'pending')";

        if (mysql_query(connection, query.c_str())) {
            lastError = mysql_error(connection) ? mysql_error(connection) : "unknown error";
            return false;
        }
        return true;
    }

    // FIND NEXT AVAILABLE PAYROLL ID (reuse deleted payroll_ids)
    int GetNextAvailablePayrollId() {
        std::string query = "SELECT COALESCE(MIN(t1.payroll_id)+1, 1) AS next_id FROM payroll_history t1 LEFT JOIN payroll_history t2 ON t1.payroll_id + 1 = t2.payroll_id WHERE t2.payroll_id IS NULL";

        if (ExecuteQuery(query.c_str())) {
            MYSQL_RES* res = mysql_store_result(connection);
            if (res) {
                MYSQL_ROW row = mysql_fetch_row(res);
                if (row) {
                    int next_id = atoi(row[0]);
                    mysql_free_result(res);
                    return next_id;
                }
                mysql_free_result(res);
            }
        }
        return 1;  // Default to 1 if error
    }

    // GET EMPLOYEE DETAILS BY ID
    MYSQL_RES* GetEmployeeById(int emp_id) {
        std::string query = "SELECT emp_id, emp_code, full_name, position, daily_rate FROM employees WHERE emp_id=";
        query += std::to_string(emp_id);

        if (ExecuteQuery(query.c_str())) {
            return mysql_store_result(connection);
        }
        return NULL;
    }

    int GetEmployeeIdByCode(const char* emp_code) {
        std::string query = "SELECT emp_id FROM employees WHERE emp_code='";
        query += emp_code;
        query += "'";

        if (ExecuteQuery(query.c_str())) {
            MYSQL_RES* result = mysql_store_result(connection);
            if (result) {
                MYSQL_ROW row = mysql_fetch_row(result);
                if (row) {
                    int emp_id = atoi(row[0]);
                    mysql_free_result(result);
                    return emp_id;
                }
                mysql_free_result(result);
            }
        }
        return -1;  // Not found
    }

    // GET ALL PAYROLL RECORDS
    MYSQL_RES* GetAllPayrollRecords() {
        if (ExecuteQuery("SELECT p.payroll_id, p.emp_id, e.full_name, p.days_worked, p.overtime_hours, p.basic_salary, p.overtime_pay, p.gross_salary, p.deductions, p.net_salary, p.status, p.created_date FROM payroll_history p JOIN employees e ON p.emp_id = e.emp_id ORDER BY p.created_date DESC")) {
            return mysql_store_result(connection);
        }
        return NULL;
    }

    // CHECK IF PAYROLL EXISTS FOR THIS EMPLOYEE IN THIS PERIOD
    int CheckPayrollExistsForPeriod(int emp_id) {
        std::string query = "SELECT payroll_id FROM payroll_history WHERE emp_id=";
        query += std::to_string(emp_id);
        query += " AND payroll_period_start = CURDATE() AND payroll_period_end = CURDATE()";

        if (ExecuteQuery(query.c_str())) {
            MYSQL_RES* res = mysql_store_result(connection);
            if (res) {
                MYSQL_ROW row = mysql_fetch_row(res);
                if (row) {
                    int payroll_id = atoi(row[0]);
                    mysql_free_result(res);
                    return payroll_id;  // Payroll exists
                }
                mysql_free_result(res);
            }
        }
        return -1;  // No payroll exists
    }

    MYSQL_RES* SearchPayrollByEmployeeName(const char* employee_name) {
        std::string query = "SELECT p.payroll_id, p.emp_id, e.full_name, p.days_worked, p.overtime_hours, p.basic_salary, p.overtime_pay, p.gross_salary, p.deductions, p.net_salary, p.status, p.created_date FROM payroll_history p JOIN employees e ON p.emp_id = e.emp_id WHERE e.full_name LIKE '%";
        query += employee_name;
        query += "%' ORDER BY p.created_date DESC";

        if (ExecuteQuery(query.c_str())) {
            return mysql_store_result(connection);
        }
        return NULL;
    }

    bool UpdatePayrollStatus(int payroll_id, const char* new_status) {
        std::string query = "UPDATE payroll_history SET status='";
        query += new_status;
        query += "' WHERE payroll_id=";
        query += std::to_string(payroll_id);

        return ExecuteQuery(query.c_str());
    }

    // GET ALL EMPLOYEES FOR REPORT
    MYSQL_RES* GetAllEmployeesForReport() {
        if (ExecuteQuery("SELECT emp_id, emp_code, full_name, position, department, daily_rate FROM employees ORDER BY emp_id")) {
            return mysql_store_result(connection);
        }
        return NULL;
    }

    // GET PAYROLL SUMMARY FOR REPORT
    MYSQL_RES* GetPayrollSummaryForReport() {
        if (ExecuteQuery("SELECT p.emp_id, e.full_name, COUNT(p.payroll_id) as total_payrolls, SUM(p.gross_salary) as total_gross, SUM(p.net_salary) as total_net FROM payroll_history p JOIN employees e ON p.emp_id = e.emp_id GROUP BY p.emp_id, e.full_name ORDER BY e.full_name")) {
            return mysql_store_result(connection);
        }
        return NULL;
    }

    // GET PAYSLIP DETAILS BY PAYROLL ID
    MYSQL_RES* GetPayslipByPayrollId(int payroll_id) {
        std::string query = "SELECT p.payroll_id, e.full_name, e.position, e.daily_rate, p.days_worked, p.overtime_hours, p.basic_salary, p.overtime_pay, p.gross_salary, p.deductions, p.net_salary, p.created_date FROM payroll_history p JOIN employees e ON p.emp_id = e.emp_id WHERE p.payroll_id = ";
        query += std::to_string(payroll_id);

        if (ExecuteQuery(query.c_str())) {
            return mysql_store_result(connection);
        }
        return NULL;
    }
};