#pragma once
#include "Database.h"

namespace Payroll {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Summary for ReportForms
	/// </summary>
	public ref class ReportForms : public System::Windows::Forms::Form
	{
	public:
		ReportForms(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ReportForms()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Reports_lbl;
	private: System::Windows::Forms::Button^ employeereports_btn;
	private: System::Windows::Forms::Button^ payrollreport_btn;
	private: System::Windows::Forms::TextBox^ reportOutput_txtbox;
	private: System::Windows::Forms::Button^ back_btn;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Reports_lbl = (gcnew System::Windows::Forms::Label());
			this->employeereports_btn = (gcnew System::Windows::Forms::Button());
			this->payrollreport_btn = (gcnew System::Windows::Forms::Button());
			this->reportOutput_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Reports_lbl
			// 
			this->Reports_lbl->AutoSize = true;
			this->Reports_lbl->BackColor = System::Drawing::Color::Transparent;
			this->Reports_lbl->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reports_lbl->Location = System::Drawing::Point(45, 34);
			this->Reports_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Reports_lbl->Name = L"Reports_lbl";
			this->Reports_lbl->Size = System::Drawing::Size(125, 38);
			this->Reports_lbl->TabIndex = 2;
			this->Reports_lbl->Text = L"Reports";
			this->Reports_lbl->Click += gcnew System::EventHandler(this, &ReportForms::Reports_lbl_Click);
			// 
			// employeereports_btn
			// 
			this->employeereports_btn->BackColor = System::Drawing::Color::LightSkyBlue;
			this->employeereports_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->employeereports_btn->Font = (gcnew System::Drawing::Font(L"Poppins", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeereports_btn->ForeColor = System::Drawing::SystemColors::Highlight;
			this->employeereports_btn->Location = System::Drawing::Point(52, 99);
			this->employeereports_btn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->employeereports_btn->Name = L"employeereports_btn";
			this->employeereports_btn->Size = System::Drawing::Size(388, 47);
			this->employeereports_btn->TabIndex = 6;
			this->employeereports_btn->Text = L"Employee List Report";
			this->employeereports_btn->UseVisualStyleBackColor = false;
			this->employeereports_btn->Click += gcnew System::EventHandler(this, &ReportForms::employeereports_btn_Click);
			// 
			// payrollreport_btn
			// 
			this->payrollreport_btn->BackColor = System::Drawing::Color::LightGreen;
			this->payrollreport_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->payrollreport_btn->Font = (gcnew System::Drawing::Font(L"Poppins", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->payrollreport_btn->ForeColor = System::Drawing::Color::DarkGreen;
			this->payrollreport_btn->Location = System::Drawing::Point(440, 99);
			this->payrollreport_btn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->payrollreport_btn->Name = L"payrollreport_btn";
			this->payrollreport_btn->Size = System::Drawing::Size(365, 47);
			this->payrollreport_btn->TabIndex = 7;
			this->payrollreport_btn->Text = L" Payroll Report";
			this->payrollreport_btn->UseVisualStyleBackColor = false;
			this->payrollreport_btn->Click += gcnew System::EventHandler(this, &ReportForms::payrollreport_btn_Click);
			// 
			// reportOutput_txtbox
			// 
			this->reportOutput_txtbox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->reportOutput_txtbox->Font = (gcnew System::Drawing::Font(L"Courier New", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reportOutput_txtbox->Location = System::Drawing::Point(52, 163);
			this->reportOutput_txtbox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->reportOutput_txtbox->Multiline = true;
			this->reportOutput_txtbox->Name = L"reportOutput_txtbox";
			this->reportOutput_txtbox->ReadOnly = true;
			this->reportOutput_txtbox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->reportOutput_txtbox->Size = System::Drawing::Size(753, 374);
			this->reportOutput_txtbox->TabIndex = 8;
			// 
			// back_btn
			// 
			this->back_btn->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->back_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back_btn->Font = (gcnew System::Drawing::Font(L"Poppins", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_btn->Location = System::Drawing::Point(52, 561);
			this->back_btn->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(753, 47);
			this->back_btn->TabIndex = 11;
			this->back_btn->Text = L"Back";
			this->back_btn->UseVisualStyleBackColor = false;
			this->back_btn->Click += gcnew System::EventHandler(this, &ReportForms::back_btn_Click);
			// 
			// ReportForms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(860, 688);
			this->Controls->Add(this->back_btn);
			this->Controls->Add(this->reportOutput_txtbox);
			this->Controls->Add(this->payrollreport_btn);
			this->Controls->Add(this->employeereports_btn);
			this->Controls->Add(this->Reports_lbl);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"ReportForms";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ReportForms";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Reports_lbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void employeereports_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			Database db;
			if (db.Connect()) {
				MYSQL_RES* result = db.GetAllEmployeesForReport();
				if (result) {
					reportOutput_txtbox->Text = "================================== EMPLOYEE LIST REPORT =================================\n";
					reportOutput_txtbox->AppendText("Generated: " + System::DateTime::Now.ToString() + "\n");
					reportOutput_txtbox->AppendText("==========================================================================================\n\n");
					reportOutput_txtbox->AppendText("Emp ID    Code       Name                   Position       Department    Daily Rate\n");
					reportOutput_txtbox->AppendText("------------------------------------------------------------------------------------------\n\n");

					int row_count = 0;

					MYSQL_ROW row;
					while ((row = mysql_fetch_row(result))) {
						row_count++;
						reportOutput_txtbox->AppendText(System::String::Format(
							"{0,-10}{1,-11}{2,-23}{3,-15}{4,-15}{5,-17}\n",
							gcnew System::String(row[0]),
							gcnew System::String(row[1]),
							gcnew System::String(row[2]),
							gcnew System::String(row[3]),
							gcnew System::String(row[4]),
							gcnew System::String(row[5])
						));
					}

					mysql_free_result(result);
					reportOutput_txtbox->AppendText("\n==========================================================================================\n");
					reportOutput_txtbox->AppendText("\nTotal Employees: " + row_count.ToString() + " \n\n\n");
					reportOutput_txtbox->AppendText("\n==========================================================================================\n");
					reportOutput_txtbox->AppendText("\n\nEnd of Report");
				}
			}
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
	private: System::Void payrollreport_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			Database db;
			if (db.Connect()) {
				MYSQL_RES* result = db.GetPayrollSummaryForReport();
				if (result) {
					reportOutput_txtbox->Text ="================================= PAYROLL SUMMARY REPORT ================================\n";
					reportOutput_txtbox->AppendText("Generated: " + System::DateTime::Now.ToString() + "\n");
					reportOutput_txtbox->AppendText("==========================================================================================\n\n");
					reportOutput_txtbox->AppendText("Emp ID    Employee Name    Total Payrolls   Total Gross    Total Net\n");
					reportOutput_txtbox->AppendText("------------------------------------------------------------------------------------------\n\n");

					int row_count = 0;

					MYSQL_ROW row;
					while ((row = mysql_fetch_row(result))) {
						row_count++;
						reportOutput_txtbox->AppendText(System::String::Format(
							"{0,-10}{1,-17}{2,-17}{3,-15}{4,-32}\n",
							gcnew System::String(row[0]),  // emp_id
							gcnew System::String(row[1]),  // full_name
							gcnew System::String(row[2]),  // total_payrolls
							gcnew System::String(row[3]),  // total_gross
							gcnew System::String(row[4])   // total_net
						));
					}

					mysql_free_result(result);
					reportOutput_txtbox->AppendText("\n==========================================================================================\n");
					reportOutput_txtbox->AppendText("\nTotal Records: " + row_count.ToString() + " \n\n\n");
					reportOutput_txtbox->AppendText("\n==========================================================================================\n");
					reportOutput_txtbox->AppendText("\n\nEnd of Report");
				}
			}
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}

	protected: virtual void OnPaint(PaintEventArgs^ e) override {
		Form::OnPaint(e);
		System::Drawing::Rectangle rect = this->ClientRectangle;
		System::Drawing::Drawing2D::LinearGradientBrush^ brush =
			gcnew System::Drawing::Drawing2D::LinearGradientBrush(
				rect,
				System::Drawing::Color::FromArgb(232, 243, 255),  // top color
				System::Drawing::Color::LightSkyBlue,                    // bottom color
				System::Drawing::Drawing2D::LinearGradientMode::Vertical
			);
		e->Graphics->FillRectangle(brush, rect);
	}
};
}
