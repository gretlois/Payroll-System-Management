
#include "ReportForms.h"
#include "AdminDashboard.h" // include only in .cpp

using namespace System;
using namespace System::Windows::Forms;

System::Void Payroll::ReportForms::back_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
    // If opened with Owner set, show that dashboard again
    AdminDashboard^ dashboard = dynamic_cast<AdminDashboard^>(this->Owner);
    if (dashboard != nullptr)
    {
        dashboard->Show();
        this->Close(); // or Hide() if you prefer to keep it alive
        return;
    }

    // Fallback: just close this form
    this->Close();
}