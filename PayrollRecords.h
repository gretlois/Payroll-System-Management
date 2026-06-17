#pragma once
#include "Database.h" 
#include "PayslipFormh.h"
#include <msclr/marshal_cppstd.h>

namespace Payroll {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Summary for PayrollRecords
	/// </summary>
	public ref class PayrollRecords : public System::Windows::Forms::Form
	{
	public:
		PayrollRecords(void)
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
		~PayrollRecords()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ payrollrec_lbl;
	private: System::Windows::Forms::DataGridView^ PayrollRecordDataGrid;
		   // back button
	private: System::Windows::Forms::Button^ back_btn;
	protected:








	private: System::Windows::Forms::Label^ searchemployees_lbl;
	private: System::Windows::Forms::TextBox^ searchemp_txt;



	private: System::Windows::Forms::Button^ confirm_btn;




	private: System::Windows::Forms::Button^ approveBtn;
	private: System::Windows::Forms::Button^ markPaidBtn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EmployeeID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EmployeeName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ daysworked;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ overtimehours;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ basicsalary;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ overtimepay;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ GrossSalary;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ deductions;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NetSalary;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Status1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ createdate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ payroll_ID;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->payrollrec_lbl = (gcnew System::Windows::Forms::Label());
			this->PayrollRecordDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->EmployeeID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EmployeeName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->daysworked = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->overtimehours = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->basicsalary = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->overtimepay = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GrossSalary = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->deductions = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NetSalary = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Status1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->createdate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->payroll_ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->searchemployees_lbl = (gcnew System::Windows::Forms::Label());
			this->searchemp_txt = (gcnew System::Windows::Forms::TextBox());
			this->confirm_btn = (gcnew System::Windows::Forms::Button());
			this->approveBtn = (gcnew System::Windows::Forms::Button());
			this->markPaidBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PayrollRecordDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// payrollrec_lbl
			// 
			this->payrollrec_lbl->AutoSize = true;
			this->payrollrec_lbl->BackColor = System::Drawing::Color::Transparent;
			this->payrollrec_lbl->Font = (gcnew System::Drawing::Font(L"Poppins", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->payrollrec_lbl->Location = System::Drawing::Point(37, 71);
			this->payrollrec_lbl->Name = L"payrollrec_lbl";
			this->payrollrec_lbl->Size = System::Drawing::Size(262, 53);
			this->payrollrec_lbl->TabIndex = 2;
			this->payrollrec_lbl->Text = L"Payroll Records";
			// 
			// PayrollRecordDataGrid
			// 
			this->PayrollRecordDataGrid->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->PayrollRecordDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->PayrollRecordDataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
				this->EmployeeID,
					this->EmployeeName, this->daysworked, this->overtimehours, this->basicsalary, this->overtimepay, this->GrossSalary, this->deductions,
					this->NetSalary, this->Status1, this->createdate, this->payroll_ID
			});
			this->PayrollRecordDataGrid->Location = System::Drawing::Point(44, 127);
			this->PayrollRecordDataGrid->Name = L"PayrollRecordDataGrid";
			this->PayrollRecordDataGrid->ReadOnly = true;
			this->PayrollRecordDataGrid->RowHeadersWidth = 51;
			this->PayrollRecordDataGrid->RowTemplate->Height = 24;
			this->PayrollRecordDataGrid->Size = System::Drawing::Size(1291, 594);
			this->PayrollRecordDataGrid->TabIndex = 1;
			this->PayrollRecordDataGrid->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PayrollRecords::PayrollRecordDataGrid_CellDoubleClick);
			// 
			// EmployeeID
			// 
			this->EmployeeID->HeaderText = L"Employee ID";
			this->EmployeeID->MinimumWidth = 6;
			this->EmployeeID->Name = L"EmployeeID";
			this->EmployeeID->ReadOnly = true;
			this->EmployeeID->Width = 125;
			// 
			// EmployeeName
			// 
			this->EmployeeName->HeaderText = L"Employee Name";
			this->EmployeeName->MinimumWidth = 6;
			this->EmployeeName->Name = L"EmployeeName";
			this->EmployeeName->ReadOnly = true;
			this->EmployeeName->Width = 125;
			// 
			// daysworked
			// 
			this->daysworked->HeaderText = L"Days Worked";
			this->daysworked->MinimumWidth = 6;
			this->daysworked->Name = L"daysworked";
			this->daysworked->ReadOnly = true;
			this->daysworked->Width = 125;
			// 
			// overtimehours
			// 
			this->overtimehours->HeaderText = L"Overtime Hours";
			this->overtimehours->MinimumWidth = 6;
			this->overtimehours->Name = L"overtimehours";
			this->overtimehours->ReadOnly = true;
			this->overtimehours->Width = 125;
			// 
			// basicsalary
			// 
			this->basicsalary->HeaderText = L"Basic Salary";
			this->basicsalary->MinimumWidth = 6;
			this->basicsalary->Name = L"basicsalary";
			this->basicsalary->ReadOnly = true;
			this->basicsalary->Width = 125;
			// 
			// overtimepay
			// 
			this->overtimepay->HeaderText = L"Overtime Pay";
			this->overtimepay->MinimumWidth = 6;
			this->overtimepay->Name = L"overtimepay";
			this->overtimepay->ReadOnly = true;
			this->overtimepay->Width = 125;
			// 
			// GrossSalary
			// 
			this->GrossSalary->HeaderText = L"Gross Salary";
			this->GrossSalary->MinimumWidth = 6;
			this->GrossSalary->Name = L"GrossSalary";
			this->GrossSalary->ReadOnly = true;
			this->GrossSalary->Width = 125;
			// 
			// deductions
			// 
			this->deductions->HeaderText = L"Deductions ";
			this->deductions->MinimumWidth = 6;
			this->deductions->Name = L"deductions";
			this->deductions->ReadOnly = true;
			this->deductions->Width = 125;
			// 
			// NetSalary
			// 
			this->NetSalary->HeaderText = L"Net Salary";
			this->NetSalary->MinimumWidth = 6;
			this->NetSalary->Name = L"NetSalary";
			this->NetSalary->ReadOnly = true;
			this->NetSalary->Width = 125;
			// 
			// Status1
			// 
			this->Status1->HeaderText = L"Status";
			this->Status1->MinimumWidth = 6;
			this->Status1->Name = L"Status1";
			this->Status1->ReadOnly = true;
			this->Status1->Width = 125;
			// 
			// createdate
			// 
			this->createdate->HeaderText = L"Created Date";
			this->createdate->MinimumWidth = 6;
			this->createdate->Name = L"createdate";
			this->createdate->ReadOnly = true;
			this->createdate->Width = 125;
			// 
			// payroll_ID
			// 
			this->payroll_ID->HeaderText = L"Payroll_ID";
			this->payroll_ID->MinimumWidth = 6;
			this->payroll_ID->Name = L"payroll_ID";
			this->payroll_ID->ReadOnly = true;
			this->payroll_ID->Visible = false;
			this->payroll_ID->Width = 125;
			// 
			// back_btn
			// 
			this->back_btn->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->back_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back_btn->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_btn->Location = System::Drawing::Point(30, 25);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(67, 29);
			this->back_btn->TabIndex = 4;
			this->back_btn->Text = L"Back";
			this->back_btn->UseVisualStyleBackColor = false;
			this->back_btn->Click += gcnew System::EventHandler(this, &PayrollRecords::back_btn_Click);
			// 
			// searchemployees_lbl
			// 
			this->searchemployees_lbl->AutoSize = true;
			this->searchemployees_lbl->BackColor = System::Drawing::Color::Transparent;
			this->searchemployees_lbl->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchemployees_lbl->Location = System::Drawing::Point(1164, 18);
			this->searchemployees_lbl->Name = L"searchemployees_lbl";
			this->searchemployees_lbl->Size = System::Drawing::Size(132, 23);
			this->searchemployees_lbl->TabIndex = 5;
			this->searchemployees_lbl->Text = L"Search Employees:";
			// 
			// searchemp_txt
			// 
			this->searchemp_txt->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchemp_txt->Location = System::Drawing::Point(1168, 44);
			this->searchemp_txt->Multiline = true;
			this->searchemp_txt->Name = L"searchemp_txt";
			this->searchemp_txt->Size = System::Drawing::Size(167, 29);
			this->searchemp_txt->TabIndex = 6;
			this->searchemp_txt->TextChanged += gcnew System::EventHandler(this, &PayrollRecords::searchemp_txt_TextChanged);
			// 
			// confirm_btn
			// 
			this->confirm_btn->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirm_btn->Location = System::Drawing::Point(1244, 79);
			this->confirm_btn->Name = L"confirm_btn";
			this->confirm_btn->Size = System::Drawing::Size(91, 33);
			this->confirm_btn->TabIndex = 7;
			this->confirm_btn->Text = L"Confirm";
			this->confirm_btn->UseVisualStyleBackColor = true;
			this->confirm_btn->Click += gcnew System::EventHandler(this, &PayrollRecords::confirm_btn_Click);
			// 
			// approveBtn
			// 
			this->approveBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->approveBtn->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->approveBtn->Location = System::Drawing::Point(1071, 751);
			this->approveBtn->Name = L"approveBtn";
			this->approveBtn->Size = System::Drawing::Size(129, 42);
			this->approveBtn->TabIndex = 8;
			this->approveBtn->Text = L"Approved";
			this->approveBtn->UseVisualStyleBackColor = true;
			this->approveBtn->Click += gcnew System::EventHandler(this, &PayrollRecords::approveBtn_Click);
			// 
			// markPaidBtn
			// 
			this->markPaidBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->markPaidBtn->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->markPaidBtn->Location = System::Drawing::Point(1206, 751);
			this->markPaidBtn->Name = L"markPaidBtn";
			this->markPaidBtn->Size = System::Drawing::Size(129, 42);
			this->markPaidBtn->TabIndex = 9;
			this->markPaidBtn->Text = L"Mark as Paid";
			this->markPaidBtn->UseVisualStyleBackColor = true;
			this->markPaidBtn->Click += gcnew System::EventHandler(this, &PayrollRecords::markPaidBtn_Click);
			// 
			// PayrollRecords
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1378, 868);
			this->Controls->Add(this->markPaidBtn);
			this->Controls->Add(this->approveBtn);
			this->Controls->Add(this->confirm_btn);
			this->Controls->Add(this->searchemp_txt);
			this->Controls->Add(this->searchemployees_lbl);
			this->Controls->Add(this->back_btn);
			this->Controls->Add(this->PayrollRecordDataGrid);
			this->Controls->Add(this->payrollrec_lbl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"PayrollRecords";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PayrollRecords";
			this->Load += gcnew System::EventHandler(this, &PayrollRecords::PayrollRecordsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PayrollRecordDataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
		private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->Owner != nullptr) {
				this->Owner->Show();
			}
			this->Close();
		}

		private: System::Void LoadPayrollRecords() {
			try {
				Database db;
				if (db.Connect()) {
					MYSQL_RES* result = db.GetAllPayrollRecords();
					if (result) {
						PayrollRecordDataGrid->Rows->Clear();
						MYSQL_ROW row;
						while ((row = mysql_fetch_row(result))) {
							PayrollRecordDataGrid->Rows->Add(
								gcnew System::String(row[1]),   // emp_id
								gcnew System::String(row[2]),   // full_name
								gcnew System::String(row[3]),   // days_worked
								gcnew System::String(System::Convert::ToInt32(System::Convert::ToDouble(gcnew System::String(row[4]))).ToString()),
								gcnew System::String(row[5]),   // basic_salary
								gcnew System::String(row[6]),   // overtime_pay
								gcnew System::String(row[7]),   // gross_salary
								gcnew System::String(row[8]),   // deductions
								gcnew System::String(row[9]),   // net_salary
								gcnew System::String(row[10]),  // status
								gcnew System::String(row[11]), // created_date
								gcnew System::String(row[0])
							);
						}
						mysql_free_result(result);
						ColorCodeStatusColumn();
					}
				}
			}
			catch (System::Exception^ ex) {
				MessageBox::Show("Error loading payroll records: " + ex->Message);
			}
		}

		private: System::Void PayrollRecordsForm_Load(System::Object^ sender, System::EventArgs^ e) {
			LoadPayrollRecords();
		}

		private: System::Void SearchEmployees() {
			try {
				String^ searchTerm = searchemp_txt->Text->Trim();

				if (searchTerm->Length == 0) {
					LoadPayrollRecords();
					return;
				}

				Database db;
				if (db.Connect()) {
					// Either use marshal_context:
					msclr::interop::marshal_context context;
					std::string search_str = context.marshal_as<std::string>(searchTerm);

					MYSQL_RES* result = db.SearchPayrollByEmployeeName(search_str.c_str());
					if (result) {
						PayrollRecordDataGrid->Rows->Clear();
						MYSQL_ROW row;
						int count = 0;

						while ((row = mysql_fetch_row(result))) {
							PayrollRecordDataGrid->Rows->Add(
								gcnew System::String(row[1]),   // emp_id
								gcnew System::String(row[2]),   // full_name
								gcnew System::String(row[3]),   // days_worked
								gcnew System::String(System::Convert::ToInt32(System::Convert::ToDouble(gcnew System::String(row[4]))).ToString()),
								gcnew System::String(row[5]),   // basic_salary
								gcnew System::String(row[6]),   // overtime_pay
								gcnew System::String(row[7]),   // gross_salary
								gcnew System::String(row[8]),   // deductions
								gcnew System::String(row[9]),   // net_salary
								gcnew System::String(row[10]),  // status
								gcnew System::String(row[11]),  // created_date
								gcnew System::String(row[0])    // payroll_id (HIDDEN AT END!) ← ADD THIS!
							);
							count++;
						}

						if (count == 0) {
							MessageBox::Show("No records found!");
						}
						mysql_free_result(result);
						ColorCodeStatusColumn();
					}
				}
			}
			catch (System::Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}

			ColorCodeStatusColumn();  // ← ADD THIS TOO!	
		}

		private: System::Void confirm_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			SearchEmployees();
		}
		private: System::Void searchemp_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			SearchEmployees();
		}
		private: System::Void approveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				if (PayrollRecordDataGrid->SelectedRows->Count == 0) {
					MessageBox::Show("Select a payroll record!", "Validation Error");
					return;
				}

				// GET payroll_id FROM LAST COLUMN (HIDDEN)
				int payroll_id = System::Convert::ToInt32(
					PayrollRecordDataGrid->SelectedRows[0]->Cells[11]->Value  // Index 11 (last)
				);

				Database db;
				if (db.Connect()) {
					if (db.UpdatePayrollStatus(payroll_id, "approved")) {
						MessageBox::Show("Status updated to Approved!", "Success");
						LoadPayrollRecords();
					}
					else {
						MessageBox::Show("Error updating status!");
					}
				}
			}
			catch (System::Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
		}
		private: System::Void ColorCodeStatusColumn() {
			try {	
				for (int i = 0; i < PayrollRecordDataGrid->Rows->Count; i++) {
					// CHECK IF VALUE IS NULL FIRST!
					if (PayrollRecordDataGrid->Rows[i]->Cells[9]->Value == nullptr) {
						continue;  // Skip if null
					}

					String^ status = PayrollRecordDataGrid->Rows[i]->Cells[9]->Value->ToString();

					if (status == "pending") {
						PayrollRecordDataGrid->Rows[i]->Cells[9]->Style->BackColor = System::Drawing::Color::Yellow;
					}
					else if (status == "approved") {
						PayrollRecordDataGrid->Rows[i]->Cells[9]->Style->BackColor = System::Drawing::Color::LightBlue;
					}
					else if (status == "paid") {
						PayrollRecordDataGrid->Rows[i]->Cells[9]->Style->BackColor = System::Drawing::Color::LightGreen;
					}
				}
			}
			catch (System::Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
		}
		private: System::Void markPaidBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				if (PayrollRecordDataGrid->SelectedRows->Count == 0) {
					MessageBox::Show("Select a payroll record!", "Validation Error");
					return;
				}

				// GET payroll_id FROM LAST COLUMN (HIDDEN at index 11)
				int payroll_id = System::Convert::ToInt32(
					PayrollRecordDataGrid->SelectedRows[0]->Cells[11]->Value
				);

				Database db;
				if (db.Connect()) {
					if (db.UpdatePayrollStatus(payroll_id, "paid")) {
						MessageBox::Show("Status updated to Paid!", "Success");
						LoadPayrollRecords();
					}
					else {
						MessageBox::Show("Error updating status!");
					}
				}
			}
			catch (System::Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
		}
	private: System::Void PayrollRecordDataGrid_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try {
			if (e->RowIndex >= 0) {
				int payroll_id = System::Convert::ToInt32(
					PayrollRecordDataGrid->Rows[e->RowIndex]->Cells[11]->Value
				);

				PayslipFormh^ payslip = gcnew PayslipFormh();
				payslip->DisplayPayslip(payroll_id);
				payslip->Show();
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