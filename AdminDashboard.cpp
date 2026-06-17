#include "LoginForm.h"
#include "AdminDashboard.h"

using namespace System;
using namespace System::Windows::Forms;
    
System::Void Payroll::AdminDashboard::exit_pnl_Click(System::Object^ sender, System::EventArgs^ e)
{
    // If this dashboard was opened with Owner set to the LoginForm, show it again.
    LoginForm^ login = dynamic_cast<LoginForm^>(this->Owner);
    if (login != nullptr)
    {
        login->ResetInputs(); // reset the textboxess
        login->Show();
        this->Close(); 
        return;
    }
    // Fallback: no owner found, exit application
    Application::Exit();
}

System::Void Payroll::LoginForm::ResetInputs()
{
    // clear both fields and set focus to username
    this->Username_txtbox->Text = "";
    this->Password_txtbox->Text = "";
    this->Username_txtbox->Focus();
}