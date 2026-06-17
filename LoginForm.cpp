
#include "LoginForm.h"
#include "AdminDashboard.h"
#include "Database.h"
#include <msclr/marshal_cppstd.h>

using namespace System::Drawing::Drawing2D;
using namespace msclr::interop;
using namespace System;
using namespace System::Windows::Forms;

System::Void Payroll::LoginForm::login_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ username = Username_txtbox->Text;
    String^ password = Password_txtbox->Text;

    marshal_context context;
    std::string user_str = username ? context.marshal_as<std::string>(username) : std::string();
    std::string pass_str = password ? context.marshal_as<std::string>(password) : std::string();

    Database db;

    if (db.Connect()) {
        std::string query = "SELECT * FROM users WHERE username='";
        query += user_str;
        query += "' AND password_hash=SHA2('";
        query += pass_str;
        query += "', 256)";

        if (db.ExecuteQuery(query.c_str())) {
            MYSQL_RES* result = db.GetResults();
            if (result && mysql_num_rows(result) > 0) {
                MessageBox::Show("Login Successful!");
                AdminDashboard^ dashboard = gcnew AdminDashboard();
                dashboard->Owner = this;
                dashboard->Show();
                this->Hide();

                Username_txtbox->Text = "";
                Password_txtbox->Text = "";
                mysql_free_result(result);
            }
            else {
                MessageBox::Show("Invalid username or password!");
                Password_txtbox->Text = "";
                if (result) mysql_free_result(result);
            }
        }
        else {
            System::String^ err = gcnew System::String(db.GetLastError().c_str());
            MessageBox::Show("Query failed: " + err);
        }
    }
    else {
        System::String^ err = gcnew System::String(db.GetLastError().c_str());
        System::String^ msg = System::String::Concat("Cannot connect to database: ", err);
        MessageBox::Show(msg);
    }
};