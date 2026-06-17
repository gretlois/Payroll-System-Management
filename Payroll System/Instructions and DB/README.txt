# Payroll Management System

## Overview
A Windows Forms C++ GUI desktop for managing employee payroll, built with C++/CLR and MySQL.

## Features
- Employee Management (Add, Update, Delete)
- Payroll Computation (Automatic salary calculation)
- Payroll Records & Reporting
- Auto-generated Employee Codes (no duplicates)
- Duplicate Payroll Period Prevention
- ID Reuse (prevents gaps in database)

## System Requirements
- Windows 7 or later
- Visual Studio 2026 with C++/CLR support
- MySQL Server
- .NET Framework 4.7+

## Installation

### 1. Setup Database
```sql
-- Import the database schema
-- File: Payroll_Database_schema.sql
```

### 2. Configure Connection String
Edit `database.h`:
```cpp
bool Connect(const char* host = "127.0.0.1",
    const char* user = "root",
    const char* pass = "payrollsystem23!",  // Change this
    const char* db = "payroll",
    unsigned int port = 3306)
```

### 3. Compile & Run
- Open `PayrollSystem.sln` in Visual Studio 2026
- Build Solution (Ctrl+Shift+B)
- Run (F5)
- Default Login: `admin` / `admin123`

## Usage

### Employee Management
1. Click "Employee Management" from Admin Dashboard
2. Enter employee details (Name, Position, Department, Daily Rate)
3. Employee Code auto-generates (EMP001, EMP002, etc.)
4. Click "Add" to save

### Payroll Computation
1. Click "Payroll Computation"
2. Select Employee
3. Enter Days Worked, OT Hours, Deductions
4. Click "Calculate" to see salary breakdown
5. Click "Generate Payroll" to save

### Payroll Records
1. Click "Payroll Records"
2. Search/Filter by employee name
3. View Payslips (double click the row of the Employee)

## Database Schema
- `employees` - Employee master data
- `payroll_history` - Payroll records
- `users` - Login credentials

## Key Features Explained

### Auto-Generated Employee Code
- Codes auto-generate from ID (EMP001, EMP002)
- When employee deleted, code is reusable for new hires
- Prevents gaps in numbering

### ID Reuse
- Both `emp_id` and `payroll_id` reuse deleted IDs
- Maintains data integrity
- No gaps in sequence

### Duplicate Prevention
- System blocks duplicate payroll for same period
- Allows different periods (monthly history)
- Prevents accidental data overwriting

## Default Credentials
**Username:** admin  
**Password:** admin123


## Version
v1.0 - June 2026