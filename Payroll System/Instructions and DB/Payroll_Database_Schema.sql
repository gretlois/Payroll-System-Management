-- ============================================
-- PAYROLL MANAGEMENT SYSTEM - DATABASE SCHEMA
-- MySQL Database Setup (MVP Version)
-- ============================================

CREATE DATABASE IF NOT EXISTS payroll;
USE payroll;

-- ============================================
-- TABLE 1: Users (Login)
-- ============================================
CREATE TABLE users (
    user_id INT PRIMARY KEY AUTO_INCREMENT,
    username VARCHAR(50) NOT NULL UNIQUE,
    password_hash VARCHAR(255) NOT NULL,
    role ENUM('admin') NOT NULL,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    is_active BOOLEAN DEFAULT TRUE,
    
    INDEX idx_username (username)
);

-- ============================================
-- TABLE 2: Employees
-- ============================================
CREATE TABLE employees (
    emp_id INT PRIMARY KEY AUTO_INCREMENT,
    emp_code VARCHAR(20) NOT NULL UNIQUE,
    full_name VARCHAR(100) NOT NULL,
    position VARCHAR(100),
    department VARCHAR(100),
    daily_rate DECIMAL(10, 2) NOT NULL,
    hire_date DATE,
    is_active BOOLEAN DEFAULT TRUE,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
    
    INDEX idx_emp_code (emp_code),
    INDEX idx_full_name (full_name),
    INDEX idx_is_active (is_active)
);

-- ============================================
-- TABLE 3: Payroll History
-- ============================================
CREATE TABLE payroll_history (
    payroll_id INT PRIMARY KEY AUTO_INCREMENT,
    emp_id INT NOT NULL,
    payroll_period_start DATE,
    payroll_period_end DATE,
    days_worked INT,
    overtime_hours DECIMAL(10, 2),
    basic_salary DECIMAL(15, 2),
    overtime_pay DECIMAL(15, 2),
    gross_salary DECIMAL(15, 2),
    deductions DECIMAL(15, 2) DEFAULT 0,
    net_salary DECIMAL(15, 2),
    status ENUM('pending', 'approved', 'paid') DEFAULT 'pending',
    created_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    paid_date TIMESTAMP NULL,
    
    FOREIGN KEY (emp_id) REFERENCES employees(emp_id) ON DELETE CASCADE,
    INDEX idx_emp_id (emp_id),
    INDEX idx_payroll_period (payroll_period_start, payroll_period_end),
    INDEX idx_status (status)
);

-- ============================================
-- INDEXES FOR PERFORMANCE
-- ============================================

-- Already added above, but summary:
-- users: username lookup
-- employees: code, name, active status lookup
-- payroll_history: employee lookup, period lookup

-- ============================================
-- SAMPLE DATA (for testing)

-- ============================================

-- Admin user (for login testing)
INSERT INTO users (username, password_hash, role)
VALUES ('admin', SHA2('admin123', 256), 'admin');

-- Sample employees
INSERT INTO employees (emp_code, full_name, position, department, daily_rate)
VALUES 
('EMP001', 'Juan Dela Cruz', 'Developer', 'IT', 2000);

-- ============================================
-- NOTES
-- ============================================
/*
PAYROLL CALCULATION FORMULA:
================================
Basic Salary = Daily Rate × Days Worked
Overtime Pay = (Overtime Hours × Daily Rate / 8) × 1.25
Gross Salary = Basic Salary + Overtime Pay
Net Salary = Gross Salary - Deductions

Example:
- Daily Rate: ₱2,000
- Days Worked: 20
- OT Hours: 5users
- Deductions: ₱500

Basic = 2,000 × 20 = ₱40,000
OT = (5 × 2,000 / 8) × 1.25 = ₱1,562.50
Gross = 40,000 + 1,562.50 = ₱41,562.50
Net = 41,562.50 - 500 = ₱41,062.50

LOGIN CREDENTIALS (for testing):
================================
Username: admin
Password: admin123

DATABASE FIELDS EXPLANATION:
================================
emp_code: Unique employee identifier (EMP001, EMP002, etc.)
daily_rate: Amount paid per day worked
days_worked: Number of days employee worked in pay period
overtime_hours: Extra hours worked (paid at 1.25x rate)
deductions: Any money deducted (loans, taxes, etc.)
status: pending = not yet paid, approved = ready, paid = done

PAYROLL PERIOD:
================================
Typically: Monthly (1st - last day of month)
Or: Bi-weekly (1st-15th, 16th-last day)
Choose based on client needs


TABLE RELATIONSHIPS:
================================
users → (no FK, standalone)
employees → (no FK, standalone)
payroll_history → employees (emp_id)



This means:
- Users are admins who manage the system
- Employees are staff whose payroll is calculated
- Payroll_history tracks all payroll records over time
*/
