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
	/// Summary for PayslipFormh
	/// </summary>
	public ref class PayslipFormh : public System::Windows::Forms::Form
	{
	public:
		PayslipFormh(void)
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
		~PayslipFormh()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ payslip_lbl;
	private: System::Windows::Forms::Label^ payperiod_lbl;
	private: System::Windows::Forms::Label^ payperiodDate_lbl;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ employeename_lbl;
	private: System::Windows::Forms::Label^ positionemp_lbl;
	private: System::Windows::Forms::Label^ dailyrate_lbl;






	private: System::Windows::Forms::Button^ Close_btn;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ deductions_lbl;

	private: System::Windows::Forms::Label^ grosssalarypy_lbl;

	private: System::Windows::Forms::Label^ overtimepaypy_lbl;

	private: System::Windows::Forms::Label^ basicsalary_lbl;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ netsalary_lbl;

	private: System::Windows::Forms::Label^ label14;


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
			this->payslip_lbl = (gcnew System::Windows::Forms::Label());
			this->payperiod_lbl = (gcnew System::Windows::Forms::Label());
			this->payperiodDate_lbl = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->employeename_lbl = (gcnew System::Windows::Forms::Label());
			this->positionemp_lbl = (gcnew System::Windows::Forms::Label());
			this->dailyrate_lbl = (gcnew System::Windows::Forms::Label());
			this->Close_btn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->deductions_lbl = (gcnew System::Windows::Forms::Label());
			this->grosssalarypy_lbl = (gcnew System::Windows::Forms::Label());
			this->overtimepaypy_lbl = (gcnew System::Windows::Forms::Label());
			this->basicsalary_lbl = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->netsalary_lbl = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// payslip_lbl
			// 
			this->payslip_lbl->AutoSize = true;
			this->payslip_lbl->BackColor = System::Drawing::Color::Transparent;
			this->payslip_lbl->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->payslip_lbl->Location = System::Drawing::Point(207, 66);
			this->payslip_lbl->Name = L"payslip_lbl";
			this->payslip_lbl->Size = System::Drawing::Size(125, 36);
			this->payslip_lbl->TabIndex = 2;
			this->payslip_lbl->Text = L"PAYSLIP";
			this->payslip_lbl->Click += gcnew System::EventHandler(this, &PayslipFormh::payslip_lbl_Click);
			// 
			// payperiod_lbl
			// 
			this->payperiod_lbl->AutoSize = true;
			this->payperiod_lbl->BackColor = System::Drawing::Color::Transparent;
			this->payperiod_lbl->Location = System::Drawing::Point(183, 111);
			this->payperiod_lbl->Name = L"payperiod_lbl";
			this->payperiod_lbl->Size = System::Drawing::Size(77, 16);
			this->payperiod_lbl->TabIndex = 3;
			this->payperiod_lbl->Text = L"Pay Period:";
			// 
			// payperiodDate_lbl
			// 
			this->payperiodDate_lbl->AutoSize = true;
			this->payperiodDate_lbl->BackColor = System::Drawing::Color::Transparent;
			this->payperiodDate_lbl->Location = System::Drawing::Point(266, 111);
			this->payperiodDate_lbl->Name = L"payperiodDate_lbl";
			this->payperiodDate_lbl->Size = System::Drawing::Size(98, 16);
			this->payperiodDate_lbl->TabIndex = 4;
			this->payperiodDate_lbl->Text = L"June 1-30, 2026";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Poppins", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DimGray;
			this->label9->Location = System::Drawing::Point(54, 180);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(109, 31);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Employee:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DimGray;
			this->label1->Location = System::Drawing::Point(54, 215);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 31);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Position:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Poppins", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DimGray;
			this->label2->Location = System::Drawing::Point(54, 249);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 31);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Daily Rate:";
			// 
			// employeename_lbl
			// 
			this->employeename_lbl->AutoSize = true;
			this->employeename_lbl->BackColor = System::Drawing::Color::Transparent;
			this->employeename_lbl->Font = (gcnew System::Drawing::Font(L"Nunito", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeename_lbl->ForeColor = System::Drawing::SystemColors::Desktop;
			this->employeename_lbl->Location = System::Drawing::Point(175, 182);
			this->employeename_lbl->Name = L"employeename_lbl";
			this->employeename_lbl->Size = System::Drawing::Size(81, 20);
			this->employeename_lbl->TabIndex = 15;
			this->employeename_lbl->Text = L"Test Name";
			// 
			// positionemp_lbl
			// 
			this->positionemp_lbl->AutoSize = true;
			this->positionemp_lbl->BackColor = System::Drawing::Color::Transparent;
			this->positionemp_lbl->Font = (gcnew System::Drawing::Font(L"Nunito", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->positionemp_lbl->Location = System::Drawing::Point(160, 219);
			this->positionemp_lbl->Name = L"positionemp_lbl";
			this->positionemp_lbl->Size = System::Drawing::Size(78, 20);
			this->positionemp_lbl->TabIndex = 16;
			this->positionemp_lbl->Text = L"Developer";
			// 
			// dailyrate_lbl
			// 
			this->dailyrate_lbl->AutoSize = true;
			this->dailyrate_lbl->BackColor = System::Drawing::Color::Transparent;
			this->dailyrate_lbl->Font = (gcnew System::Drawing::Font(L"Nunito", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dailyrate_lbl->Location = System::Drawing::Point(175, 251);
			this->dailyrate_lbl->Name = L"dailyrate_lbl";
			this->dailyrate_lbl->Size = System::Drawing::Size(69, 20);
			this->dailyrate_lbl->TabIndex = 17;
			this->dailyrate_lbl->Text = L"2,000.00";
			// 
			// Close_btn
			// 
			this->Close_btn->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Close_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Close_btn->Location = System::Drawing::Point(56, 631);
			this->Close_btn->Name = L"Close_btn";
			this->Close_btn->Size = System::Drawing::Size(442, 44);
			this->Close_btn->TabIndex = 20;
			this->Close_btn->Text = L"Close";
			this->Close_btn->UseVisualStyleBackColor = false;
			this->Close_btn->Click += gcnew System::EventHandler(this, &PayslipFormh::Close_btn_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->panel1->Controls->Add(this->deductions_lbl);
			this->panel1->Controls->Add(this->grosssalarypy_lbl);
			this->panel1->Controls->Add(this->overtimepaypy_lbl);
			this->panel1->Controls->Add(this->basicsalary_lbl);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Location = System::Drawing::Point(58, 305);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(442, 190);
			this->panel1->TabIndex = 22;
			// 
			// deductions_lbl
			// 
			this->deductions_lbl->AutoSize = true;
			this->deductions_lbl->Font = (gcnew System::Drawing::Font(L"Nunito", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deductions_lbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->deductions_lbl->Location = System::Drawing::Point(344, 153);
			this->deductions_lbl->Name = L"deductions_lbl";
			this->deductions_lbl->Size = System::Drawing::Size(58, 20);
			this->deductions_lbl->TabIndex = 32;
			this->deductions_lbl->Text = L"500.00";
			// 
			// grosssalarypy_lbl
			// 
			this->grosssalarypy_lbl->AutoSize = true;
			this->grosssalarypy_lbl->Font = (gcnew System::Drawing::Font(L"Nunito", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->grosssalarypy_lbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->grosssalarypy_lbl->Location = System::Drawing::Point(335, 105);
			this->grosssalarypy_lbl->Name = L"grosssalarypy_lbl";
			this->grosssalarypy_lbl->Size = System::Drawing::Size(80, 20);
			this->grosssalarypy_lbl->TabIndex = 31;
			this->grosssalarypy_lbl->Text = L"41,562.50";
			// 
			// overtimepaypy_lbl
			// 
			this->overtimepaypy_lbl->AutoSize = true;
			this->overtimepaypy_lbl->Font = (gcnew System::Drawing::Font(L"Nunito", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->overtimepaypy_lbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->overtimepaypy_lbl->Location = System::Drawing::Point(344, 65);
			this->overtimepaypy_lbl->Name = L"overtimepaypy_lbl";
			this->overtimepaypy_lbl->Size = System::Drawing::Size(71, 20);
			this->overtimepaypy_lbl->TabIndex = 30;
			this->overtimepaypy_lbl->Text = L"1,562.50";
			// 
			// basicsalary_lbl
			// 
			this->basicsalary_lbl->AutoSize = true;
			this->basicsalary_lbl->Font = (gcnew System::Drawing::Font(L"Nunito", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->basicsalary_lbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->basicsalary_lbl->Location = System::Drawing::Point(335, 25);
			this->basicsalary_lbl->Name = L"basicsalary_lbl";
			this->basicsalary_lbl->Size = System::Drawing::Size(80, 20);
			this->basicsalary_lbl->TabIndex = 29;
			this->basicsalary_lbl->Text = L"40,000.00";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Poppins", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DimGray;
			this->label10->Location = System::Drawing::Point(23, 146);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(123, 31);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Deductions:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Poppins", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DimGray;
			this->label8->Location = System::Drawing::Point(23, 101);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(135, 31);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Gross Salary:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Poppins", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DimGray;
			this->label7->Location = System::Drawing::Point(23, 61);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(143, 31);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Overtime Pay:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Poppins", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DimGray;
			this->label6->Location = System::Drawing::Point(23, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 31);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Basic Salary:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->panel2->Controls->Add(this->netsalary_lbl);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Location = System::Drawing::Point(57, 524);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(441, 91);
			this->panel2->TabIndex = 23;
			// 
			// netsalary_lbl
			// 
			this->netsalary_lbl->AutoSize = true;
			this->netsalary_lbl->Font = (gcnew System::Drawing::Font(L"Poppins", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->netsalary_lbl->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->netsalary_lbl->Location = System::Drawing::Point(149, 37);
			this->netsalary_lbl->Name = L"netsalary_lbl";
			this->netsalary_lbl->Size = System::Drawing::Size(133, 40);
			this->netsalary_lbl->TabIndex = 34;
			this->netsalary_lbl->Text = L" 41,062.50";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::LightGray;
			this->label14->Location = System::Drawing::Point(160, 12);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(106, 25);
			this->label14->TabIndex = 33;
			this->label14->Text = L"Net Salary:";
			// 
			// PayslipFormh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(557, 741);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Close_btn);
			this->Controls->Add(this->dailyrate_lbl);
			this->Controls->Add(this->positionemp_lbl);
			this->Controls->Add(this->employeename_lbl);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->payperiodDate_lbl);
			this->Controls->Add(this->payperiod_lbl);
			this->Controls->Add(this->payslip_lbl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"PayslipFormh";
			this->Text = L"PayslipForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void payslip_lbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	// Display Payslip Form

	public: System::Void DisplayPayslip(int payroll_id) {
		try {
			Database db;
			if (db.Connect()) {
				MYSQL_RES* result = db.GetPayslipByPayrollId(payroll_id);  // ← USE THE METHOD!

				if (result) {
					MYSQL_ROW row = mysql_fetch_row(result);
					if (row) {
						employeename_lbl->Text = gcnew System::String(row[1]);
						positionemp_lbl->Text = gcnew System::String(row[2]);
						dailyrate_lbl->Text = gcnew System::String(row[3]);

						basicsalary_lbl->Text = gcnew System::String(row[6]);
						overtimepaypy_lbl->Text = gcnew System::String(row[7]);
						grosssalarypy_lbl->Text = gcnew System::String(row[8]);
						deductions_lbl->Text = gcnew System::String(row[9]);
						netsalary_lbl->Text = gcnew System::String(row[10]);
					}
					mysql_free_result(result);
				}
			}
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
	private: System::Void Close_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
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
