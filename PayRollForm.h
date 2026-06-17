#pragma once

namespace Payroll {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Summary for PayRollForm
	/// </summary>
	public ref class PayRollForm : public System::Windows::Forms::Form
	{
	public:
		PayRollForm(void)
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
		~PayRollForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ PayrollComp_lbl;
	protected:

	private: System::Windows::Forms::Panel^ EmployeeDetails_pnl;
	private: System::Windows::Forms::TextBox^ dailyrateemp_txtbox;


	private: System::Windows::Forms::Label^ dailyrateemp_lbl;
	private: System::Windows::Forms::Label^ deparmentemp_lbl;
	private: System::Windows::Forms::Label^ positionemp_lbl;
	private: System::Windows::Forms::Label^ fullnameemp_lbl;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ calculatesalary_btn;


	private: System::Windows::Forms::Panel^ employeepayrol_panel;
	private: System::Windows::Forms::Label^ deduc_lbl;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ grossalary_lbl;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ otpay_lbl;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ basicsalary_lbl;

	private: System::Windows::Forms::Label^ bsalary_lbl;

	private: System::Windows::Forms::Label^ salarybrkdwn_lbl;



	private: System::Windows::Forms::Label^ netsalary_lbl;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Button^ generatepayroll_btn;

		   // back button
	private: System::Windows::Forms::Button^ back_btn;
	private: System::Windows::Forms::Panel^ payroll_pnl;
	private: System::Windows::Forms::TextBox^ daysworked_txtbox;
	private: System::Windows::Forms::TextBox^ othours_txtbox;
	private: System::Windows::Forms::ComboBox^ selectemp_cmbox;
	private: System::Windows::Forms::TextBox^ deductions_txtbox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ dayswork_lbl;
	private: System::Windows::Forms::Label^ selectemp_lbl;
	private: System::Windows::Forms::Button^ generatePayrollBtn;

	private: System::Windows::Forms::Label^ basicsalary_label;

	private: System::Windows::Forms::Label^ lblsalarybreakdown;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ breakdown_lbl;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ basicSalaryLbl;
	private: System::Windows::Forms::Label^ otPayLbl;
	private: System::Windows::Forms::Label^ grossSalaryLbl;
	private: System::Windows::Forms::Label^ deductionsLbl;
	private: System::Windows::Forms::Label^ netSalaryLbl;


	private:
	int storedEmpId = 0;
	int storedDaysWorked = 0;      // ← ADD THIS!
	double storedOTHours = 0;       // ← ADD THIS!
	double storedBasic = 0;
	double storedOTPay = 0;
	double storedGross = 0;
	double storedDeductions = 0;
	double storedNet = 0;




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
			this->PayrollComp_lbl = (gcnew System::Windows::Forms::Label());
			this->EmployeeDetails_pnl = (gcnew System::Windows::Forms::Panel());
			this->payroll_pnl = (gcnew System::Windows::Forms::Panel());
			this->daysworked_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->othours_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->selectemp_cmbox = (gcnew System::Windows::Forms::ComboBox());
			this->deductions_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dayswork_lbl = (gcnew System::Windows::Forms::Label());
			this->selectemp_lbl = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dailyrateemp_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->dailyrateemp_lbl = (gcnew System::Windows::Forms::Label());
			this->deparmentemp_lbl = (gcnew System::Windows::Forms::Label());
			this->positionemp_lbl = (gcnew System::Windows::Forms::Label());
			this->fullnameemp_lbl = (gcnew System::Windows::Forms::Label());
			this->calculatesalary_btn = (gcnew System::Windows::Forms::Button());
			this->employeepayrol_panel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->basicSalaryLbl = (gcnew System::Windows::Forms::Label());
			this->otPayLbl = (gcnew System::Windows::Forms::Label());
			this->grossSalaryLbl = (gcnew System::Windows::Forms::Label());
			this->deductionsLbl = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->netSalaryLbl = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->breakdown_lbl = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->basicsalary_label = (gcnew System::Windows::Forms::Label());
			this->lblsalarybreakdown = (gcnew System::Windows::Forms::Label());
			this->deduc_lbl = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->grossalary_lbl = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->otpay_lbl = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->basicsalary_lbl = (gcnew System::Windows::Forms::Label());
			this->bsalary_lbl = (gcnew System::Windows::Forms::Label());
			this->salarybrkdwn_lbl = (gcnew System::Windows::Forms::Label());
			this->netsalary_lbl = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->generatepayroll_btn = (gcnew System::Windows::Forms::Button());
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->generatePayrollBtn = (gcnew System::Windows::Forms::Button());
			this->EmployeeDetails_pnl->SuspendLayout();
			this->payroll_pnl->SuspendLayout();
			this->employeepayrol_panel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// PayrollComp_lbl
			// 
			this->PayrollComp_lbl->AutoSize = true;
			this->PayrollComp_lbl->BackColor = System::Drawing::Color::Transparent;
			this->PayrollComp_lbl->Font = (gcnew System::Drawing::Font(L"Poppins", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PayrollComp_lbl->Location = System::Drawing::Point(34, 63);
			this->PayrollComp_lbl->Name = L"PayrollComp_lbl";
			this->PayrollComp_lbl->Size = System::Drawing::Size(343, 53);
			this->PayrollComp_lbl->TabIndex = 1;
			this->PayrollComp_lbl->Text = L"Payroll Computation";
			// 
			// EmployeeDetails_pnl
			// 
			this->EmployeeDetails_pnl->BackColor = System::Drawing::SystemColors::GrayText;
			this->EmployeeDetails_pnl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->EmployeeDetails_pnl->Controls->Add(this->payroll_pnl);
			this->EmployeeDetails_pnl->Controls->Add(this->textBox2);
			this->EmployeeDetails_pnl->Controls->Add(this->textBox1);
			this->EmployeeDetails_pnl->Controls->Add(this->comboBox1);
			this->EmployeeDetails_pnl->Controls->Add(this->dailyrateemp_txtbox);
			this->EmployeeDetails_pnl->Controls->Add(this->dailyrateemp_lbl);
			this->EmployeeDetails_pnl->Controls->Add(this->deparmentemp_lbl);
			this->EmployeeDetails_pnl->Controls->Add(this->positionemp_lbl);
			this->EmployeeDetails_pnl->Controls->Add(this->fullnameemp_lbl);
			this->EmployeeDetails_pnl->Location = System::Drawing::Point(74, 127);
			this->EmployeeDetails_pnl->Name = L"EmployeeDetails_pnl";
			this->EmployeeDetails_pnl->Size = System::Drawing::Size(773, 258);
			this->EmployeeDetails_pnl->TabIndex = 2;
			// 
			// payroll_pnl
			// 
			this->payroll_pnl->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->payroll_pnl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->payroll_pnl->Controls->Add(this->daysworked_txtbox);
			this->payroll_pnl->Controls->Add(this->othours_txtbox);
			this->payroll_pnl->Controls->Add(this->selectemp_cmbox);
			this->payroll_pnl->Controls->Add(this->deductions_txtbox);
			this->payroll_pnl->Controls->Add(this->label1);
			this->payroll_pnl->Controls->Add(this->label2);
			this->payroll_pnl->Controls->Add(this->dayswork_lbl);
			this->payroll_pnl->Controls->Add(this->selectemp_lbl);
			this->payroll_pnl->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->payroll_pnl->Location = System::Drawing::Point(-2, -2);
			this->payroll_pnl->Name = L"payroll_pnl";
			this->payroll_pnl->Size = System::Drawing::Size(773, 258);
			this->payroll_pnl->TabIndex = 11;
			// 
			// daysworked_txtbox
			// 
			this->daysworked_txtbox->Location = System::Drawing::Point(441, 58);
			this->daysworked_txtbox->Multiline = true;
			this->daysworked_txtbox->Name = L"daysworked_txtbox";
			this->daysworked_txtbox->Size = System::Drawing::Size(259, 24);
			this->daysworked_txtbox->TabIndex = 2;
			// 
			// othours_txtbox
			// 
			this->othours_txtbox->Location = System::Drawing::Point(48, 179);
			this->othours_txtbox->Multiline = true;
			this->othours_txtbox->Name = L"othours_txtbox";
			this->othours_txtbox->Size = System::Drawing::Size(259, 28);
			this->othours_txtbox->TabIndex = 3;
			// 
			// selectemp_cmbox
			// 
			this->selectemp_cmbox->FormattingEnabled = true;
			this->selectemp_cmbox->Location = System::Drawing::Point(48, 58);
			this->selectemp_cmbox->Name = L"selectemp_cmbox";
			this->selectemp_cmbox->Size = System::Drawing::Size(259, 31);
			this->selectemp_cmbox->TabIndex = 1;
			// 
			// deductions_txtbox
			// 
			this->deductions_txtbox->Location = System::Drawing::Point(441, 179);
			this->deductions_txtbox->Multiline = true;
			this->deductions_txtbox->Name = L"deductions_txtbox";
			this->deductions_txtbox->Size = System::Drawing::Size(259, 28);
			this->deductions_txtbox->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(438, 148);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 23);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Deduction";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"OT Hours";
			// 
			// dayswork_lbl
			// 
			this->dayswork_lbl->AutoSize = true;
			this->dayswork_lbl->Location = System::Drawing::Point(436, 28);
			this->dayswork_lbl->Name = L"dayswork_lbl";
			this->dayswork_lbl->Size = System::Drawing::Size(95, 23);
			this->dayswork_lbl->TabIndex = 1;
			this->dayswork_lbl->Text = L"Days Worked";
			// 
			// selectemp_lbl
			// 
			this->selectemp_lbl->AutoSize = true;
			this->selectemp_lbl->Location = System::Drawing::Point(45, 28);
			this->selectemp_lbl->Name = L"selectemp_lbl";
			this->selectemp_lbl->Size = System::Drawing::Size(116, 23);
			this->selectemp_lbl->TabIndex = 0;
			this->selectemp_lbl->Text = L"Select Employee";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(330, 58);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(259, 38);
			this->textBox2->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 179);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(259, 38);
			this->textBox1->TabIndex = 9;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(27, 58);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(259, 24);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &PayRollForm::comboBox1_SelectedIndexChanged);
			// 
			// dailyrateemp_txtbox
			// 
			this->dailyrateemp_txtbox->Location = System::Drawing::Point(330, 179);
			this->dailyrateemp_txtbox->Multiline = true;
			this->dailyrateemp_txtbox->Name = L"dailyrateemp_txtbox";
			this->dailyrateemp_txtbox->Size = System::Drawing::Size(259, 38);
			this->dailyrateemp_txtbox->TabIndex = 7;
			// 
			// dailyrateemp_lbl
			// 
			this->dailyrateemp_lbl->AutoSize = true;
			this->dailyrateemp_lbl->Location = System::Drawing::Point(327, 148);
			this->dailyrateemp_lbl->Name = L"dailyrateemp_lbl";
			this->dailyrateemp_lbl->Size = System::Drawing::Size(88, 16);
			this->dailyrateemp_lbl->TabIndex = 3;
			this->dailyrateemp_lbl->Text = L"Deduction (₱)";
			// 
			// deparmentemp_lbl
			// 
			this->deparmentemp_lbl->AutoSize = true;
			this->deparmentemp_lbl->Location = System::Drawing::Point(24, 148);
			this->deparmentemp_lbl->Name = L"deparmentemp_lbl";
			this->deparmentemp_lbl->Size = System::Drawing::Size(65, 16);
			this->deparmentemp_lbl->TabIndex = 2;
			this->deparmentemp_lbl->Text = L"OT Hours";
			// 
			// positionemp_lbl
			// 
			this->positionemp_lbl->AutoSize = true;
			this->positionemp_lbl->Location = System::Drawing::Point(327, 28);
			this->positionemp_lbl->Name = L"positionemp_lbl";
			this->positionemp_lbl->Size = System::Drawing::Size(90, 16);
			this->positionemp_lbl->TabIndex = 1;
			this->positionemp_lbl->Text = L"Days Worked";
			// 
			// fullnameemp_lbl
			// 
			this->fullnameemp_lbl->AutoSize = true;
			this->fullnameemp_lbl->Location = System::Drawing::Point(24, 28);
			this->fullnameemp_lbl->Name = L"fullnameemp_lbl";
			this->fullnameemp_lbl->Size = System::Drawing::Size(110, 16);
			this->fullnameemp_lbl->TabIndex = 0;
			this->fullnameemp_lbl->Text = L"Select Employee";
			// 
			// calculatesalary_btn
			// 
			this->calculatesalary_btn->BackColor = System::Drawing::Color::Green;
			this->calculatesalary_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->calculatesalary_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->calculatesalary_btn->FlatAppearance->BorderColor = System::Drawing::Color::ForestGreen;
			this->calculatesalary_btn->FlatAppearance->BorderSize = 0;
			this->calculatesalary_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->calculatesalary_btn->Font = (gcnew System::Drawing::Font(L"Nunito", 9));
			this->calculatesalary_btn->ForeColor = System::Drawing::Color::SpringGreen;
			this->calculatesalary_btn->Location = System::Drawing::Point(74, 410);
			this->calculatesalary_btn->Name = L"calculatesalary_btn";
			this->calculatesalary_btn->Size = System::Drawing::Size(773, 46);
			this->calculatesalary_btn->TabIndex = 5;
			this->calculatesalary_btn->Text = L"Calculate Salary";
			this->calculatesalary_btn->UseVisualStyleBackColor = false;
			this->calculatesalary_btn->Click += gcnew System::EventHandler(this, &PayRollForm::add_btn_Click);
			// 
			// employeepayrol_panel
			// 
			this->employeepayrol_panel->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->employeepayrol_panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->employeepayrol_panel->Controls->Add(this->panel1);
			this->employeepayrol_panel->Controls->Add(this->label5);
			this->employeepayrol_panel->Controls->Add(this->label4);
			this->employeepayrol_panel->Controls->Add(this->label3);
			this->employeepayrol_panel->Controls->Add(this->basicsalary_label);
			this->employeepayrol_panel->Controls->Add(this->lblsalarybreakdown);
			this->employeepayrol_panel->Controls->Add(this->deduc_lbl);
			this->employeepayrol_panel->Controls->Add(this->label15);
			this->employeepayrol_panel->Controls->Add(this->grossalary_lbl);
			this->employeepayrol_panel->Controls->Add(this->label17);
			this->employeepayrol_panel->Controls->Add(this->otpay_lbl);
			this->employeepayrol_panel->Controls->Add(this->label19);
			this->employeepayrol_panel->Controls->Add(this->basicsalary_lbl);
			this->employeepayrol_panel->Controls->Add(this->bsalary_lbl);
			this->employeepayrol_panel->Controls->Add(this->salarybrkdwn_lbl);
			this->employeepayrol_panel->Location = System::Drawing::Point(74, 489);
			this->employeepayrol_panel->Name = L"employeepayrol_panel";
			this->employeepayrol_panel->Size = System::Drawing::Size(773, 294);
			this->employeepayrol_panel->TabIndex = 19;
			this->employeepayrol_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PayRollForm::panel3_Paint);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->basicSalaryLbl);
			this->panel1->Controls->Add(this->otPayLbl);
			this->panel1->Controls->Add(this->grossSalaryLbl);
			this->panel1->Controls->Add(this->deductionsLbl);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->breakdown_lbl);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Location = System::Drawing::Point(-2, -2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(773, 294);
			this->panel1->TabIndex = 22;
			// 
			// basicSalaryLbl
			// 
			this->basicSalaryLbl->AutoSize = true;
			this->basicSalaryLbl->Font = (gcnew System::Drawing::Font(L"Nunito", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->basicSalaryLbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->basicSalaryLbl->Location = System::Drawing::Point(645, 58);
			this->basicSalaryLbl->Name = L"basicSalaryLbl";
			this->basicSalaryLbl->Size = System::Drawing::Size(74, 24);
			this->basicSalaryLbl->TabIndex = 28;
			this->basicSalaryLbl->Text = L" 000.00";
			// 
			// otPayLbl
			// 
			this->otPayLbl->AutoSize = true;
			this->otPayLbl->Font = (gcnew System::Drawing::Font(L"Nunito", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->otPayLbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->otPayLbl->Location = System::Drawing::Point(645, 104);
			this->otPayLbl->Name = L"otPayLbl";
			this->otPayLbl->Size = System::Drawing::Size(74, 24);
			this->otPayLbl->TabIndex = 27;
			this->otPayLbl->Text = L" 000.00";
			this->otPayLbl->Click += gcnew System::EventHandler(this, &PayRollForm::label27_Click);
			// 
			// grossSalaryLbl
			// 
			this->grossSalaryLbl->AutoSize = true;
			this->grossSalaryLbl->Font = (gcnew System::Drawing::Font(L"Nunito", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->grossSalaryLbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->grossSalaryLbl->Location = System::Drawing::Point(645, 152);
			this->grossSalaryLbl->Name = L"grossSalaryLbl";
			this->grossSalaryLbl->Size = System::Drawing::Size(74, 24);
			this->grossSalaryLbl->TabIndex = 26;
			this->grossSalaryLbl->Text = L" 000.00";
			// 
			// deductionsLbl
			// 
			this->deductionsLbl->AutoSize = true;
			this->deductionsLbl->Font = (gcnew System::Drawing::Font(L"Nunito", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deductionsLbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->deductionsLbl->Location = System::Drawing::Point(645, 197);
			this->deductionsLbl->Name = L"deductionsLbl";
			this->deductionsLbl->Size = System::Drawing::Size(74, 24);
			this->deductionsLbl->TabIndex = 25;
			this->deductionsLbl->Text = L" 000.00";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Highlight;
			this->panel2->Controls->Add(this->netSalaryLbl);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Location = System::Drawing::Point(48, 236);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(708, 40);
			this->panel2->TabIndex = 22;
			// 
			// netSalaryLbl
			// 
			this->netSalaryLbl->AutoSize = true;
			this->netSalaryLbl->Font = (gcnew System::Drawing::Font(L"Nunito", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->netSalaryLbl->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->netSalaryLbl->Location = System::Drawing::Point(597, 6);
			this->netSalaryLbl->Name = L"netSalaryLbl";
			this->netSalaryLbl->Size = System::Drawing::Size(74, 24);
			this->netSalaryLbl->TabIndex = 24;
			this->netSalaryLbl->Text = L" 000.00";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Poppins", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label10->Location = System::Drawing::Point(10, 6);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(114, 31);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Net Salary:";
			this->label10->Click += gcnew System::EventHandler(this, &PayRollForm::label10_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Poppins", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(44, 152);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 30);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Gross Salary:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Poppins", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(44, 197);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 30);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Deductions:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Poppins", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(44, 104);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 30);
			this->label8->TabIndex = 19;
			this->label8->Text = L"OT Pay:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Poppins", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(44, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(126, 30);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Basic Salary:";
			// 
			// breakdown_lbl
			// 
			this->breakdown_lbl->AutoSize = true;
			this->breakdown_lbl->Font = (gcnew System::Drawing::Font(L"Poppins", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->breakdown_lbl->Location = System::Drawing::Point(16, 13);
			this->breakdown_lbl->Name = L"breakdown_lbl";
			this->breakdown_lbl->Size = System::Drawing::Size(174, 30);
			this->breakdown_lbl->TabIndex = 18;
			this->breakdown_lbl->Text = L"Salary Breakdown";
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(0, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(100, 23);
			this->label11->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->Location = System::Drawing::Point(0, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(100, 23);
			this->label12->TabIndex = 2;
			// 
			// label13
			// 
			this->label13->Location = System::Drawing::Point(0, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(100, 23);
			this->label13->TabIndex = 3;
			// 
			// label14
			// 
			this->label14->Location = System::Drawing::Point(0, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(100, 23);
			this->label14->TabIndex = 4;
			// 
			// label16
			// 
			this->label16->Location = System::Drawing::Point(0, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(100, 23);
			this->label16->TabIndex = 5;
			// 
			// label18
			// 
			this->label18->Location = System::Drawing::Point(0, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(100, 23);
			this->label18->TabIndex = 6;
			// 
			// label20
			// 
			this->label20->Location = System::Drawing::Point(0, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(100, 23);
			this->label20->TabIndex = 7;
			// 
			// label21
			// 
			this->label21->Location = System::Drawing::Point(0, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(100, 23);
			this->label21->TabIndex = 8;
			// 
			// label22
			// 
			this->label22->Location = System::Drawing::Point(0, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(100, 23);
			this->label22->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(44, 152);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 23);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Gross Salary:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(44, 197);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 23);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Deductions:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(44, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 23);
			this->label3->TabIndex = 19;
			this->label3->Text = L"OT Pay:";
			// 
			// basicsalary_label
			// 
			this->basicsalary_label->AutoSize = true;
			this->basicsalary_label->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->basicsalary_label->Location = System::Drawing::Point(46, 58);
			this->basicsalary_label->Name = L"basicsalary_label";
			this->basicsalary_label->Size = System::Drawing::Size(117, 23);
			this->basicsalary_label->TabIndex = 11;
			this->basicsalary_label->Text = L"Basic Salary:";
			this->basicsalary_label->Click += gcnew System::EventHandler(this, &PayRollForm::label3_Click);
			// 
			// lblsalarybreakdown
			// 
			this->lblsalarybreakdown->AutoSize = true;
			this->lblsalarybreakdown->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblsalarybreakdown->Location = System::Drawing::Point(16, 13);
			this->lblsalarybreakdown->Name = L"lblsalarybreakdown";
			this->lblsalarybreakdown->Size = System::Drawing::Size(118, 21);
			this->lblsalarybreakdown->TabIndex = 18;
			this->lblsalarybreakdown->Text = L"Employee Lists";
			// 
			// deduc_lbl
			// 
			this->deduc_lbl->Location = System::Drawing::Point(0, 0);
			this->deduc_lbl->Name = L"deduc_lbl";
			this->deduc_lbl->Size = System::Drawing::Size(100, 23);
			this->deduc_lbl->TabIndex = 1;
			// 
			// label15
			// 
			this->label15->Location = System::Drawing::Point(0, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(100, 23);
			this->label15->TabIndex = 2;
			// 
			// grossalary_lbl
			// 
			this->grossalary_lbl->Location = System::Drawing::Point(0, 0);
			this->grossalary_lbl->Name = L"grossalary_lbl";
			this->grossalary_lbl->Size = System::Drawing::Size(100, 23);
			this->grossalary_lbl->TabIndex = 3;
			// 
			// label17
			// 
			this->label17->Location = System::Drawing::Point(0, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(100, 23);
			this->label17->TabIndex = 4;
			// 
			// otpay_lbl
			// 
			this->otpay_lbl->Location = System::Drawing::Point(0, 0);
			this->otpay_lbl->Name = L"otpay_lbl";
			this->otpay_lbl->Size = System::Drawing::Size(100, 23);
			this->otpay_lbl->TabIndex = 5;
			// 
			// label19
			// 
			this->label19->Location = System::Drawing::Point(0, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(100, 23);
			this->label19->TabIndex = 6;
			// 
			// basicsalary_lbl
			// 
			this->basicsalary_lbl->Location = System::Drawing::Point(0, 0);
			this->basicsalary_lbl->Name = L"basicsalary_lbl";
			this->basicsalary_lbl->Size = System::Drawing::Size(100, 23);
			this->basicsalary_lbl->TabIndex = 7;
			// 
			// bsalary_lbl
			// 
			this->bsalary_lbl->Location = System::Drawing::Point(0, 0);
			this->bsalary_lbl->Name = L"bsalary_lbl";
			this->bsalary_lbl->Size = System::Drawing::Size(100, 23);
			this->bsalary_lbl->TabIndex = 8;
			// 
			// salarybrkdwn_lbl
			// 
			this->salarybrkdwn_lbl->Location = System::Drawing::Point(0, 0);
			this->salarybrkdwn_lbl->Name = L"salarybrkdwn_lbl";
			this->salarybrkdwn_lbl->Size = System::Drawing::Size(100, 23);
			this->salarybrkdwn_lbl->TabIndex = 9;
			// 
			// netsalary_lbl
			// 
			this->netsalary_lbl->Location = System::Drawing::Point(0, 0);
			this->netsalary_lbl->Name = L"netsalary_lbl";
			this->netsalary_lbl->Size = System::Drawing::Size(100, 23);
			this->netsalary_lbl->TabIndex = 0;
			// 
			// label24
			// 
			this->label24->Location = System::Drawing::Point(0, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(100, 23);
			this->label24->TabIndex = 0;
			// 
			// generatepayroll_btn
			// 
			this->generatepayroll_btn->Location = System::Drawing::Point(0, 0);
			this->generatepayroll_btn->Name = L"generatepayroll_btn";
			this->generatepayroll_btn->Size = System::Drawing::Size(75, 23);
			this->generatepayroll_btn->TabIndex = 0;
			// 
			// back_btn
			// 
			this->back_btn->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->back_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back_btn->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_btn->Location = System::Drawing::Point(12, 12);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(67, 29);
			this->back_btn->TabIndex = 7;
			this->back_btn->Text = L"Back";
			this->back_btn->UseVisualStyleBackColor = false;
			this->back_btn->Click += gcnew System::EventHandler(this, &PayRollForm::back_btn_Click);
			// 
			// generatePayrollBtn
			// 
			this->generatePayrollBtn->BackColor = System::Drawing::SystemColors::ControlDark;
			this->generatePayrollBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->generatePayrollBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->generatePayrollBtn->FlatAppearance->BorderColor = System::Drawing::Color::ForestGreen;
			this->generatePayrollBtn->FlatAppearance->BorderSize = 0;
			this->generatePayrollBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->generatePayrollBtn->Font = (gcnew System::Drawing::Font(L"Nunito", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->generatePayrollBtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->generatePayrollBtn->Location = System::Drawing::Point(74, 816);
			this->generatePayrollBtn->Name = L"generatePayrollBtn";
			this->generatePayrollBtn->Size = System::Drawing::Size(773, 46);
			this->generatePayrollBtn->TabIndex = 6;
			this->generatePayrollBtn->Text = L"Generate Salary";
			this->generatePayrollBtn->UseVisualStyleBackColor = false;
			this->generatePayrollBtn->Click += gcnew System::EventHandler(this, &PayRollForm::generatePayrollBtn_Click);
			// 
			// PayRollForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(921, 1029);
			this->Controls->Add(this->generatePayrollBtn);
			this->Controls->Add(this->back_btn);
			this->Controls->Add(this->employeepayrol_panel);
			this->Controls->Add(this->calculatesalary_btn);
			this->Controls->Add(this->EmployeeDetails_pnl);
			this->Controls->Add(this->PayrollComp_lbl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"PayRollForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PayRollForm";
			this->Load += gcnew System::EventHandler(this, &PayRollForm::PayRollForm_Load);
			this->EmployeeDetails_pnl->ResumeLayout(false);
			this->EmployeeDetails_pnl->PerformLayout();
			this->payroll_pnl->ResumeLayout(false);
			this->payroll_pnl->PerformLayout();
			this->employeepayrol_panel->ResumeLayout(false);
			this->employeepayrol_panel->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (selectemp_cmbox->SelectedIndex < 0) {
				MessageBox::Show("Select an employee!", "Validation Error");
				return;
			}

			String^ emp_code_str = selectemp_cmbox->SelectedItem->ToString();
			String^ days_worked_str = daysworked_txtbox->Text;
			String^ ot_hours_str = othours_txtbox->Text;
			String^ deductions_str = deductions_txtbox->Text;

			if (days_worked_str->Length == 0 || ot_hours_str->Length == 0 || deductions_str->Length == 0) {
				MessageBox::Show("Fill all fields!", "Validation Error");
				return;
			}

			// GET emp_id FROM emp_code
			Database db;
			if (!db.Connect()) {
				MessageBox::Show("Cannot connect to database!");
				return;
			}

			marshal_context context;
			std::string code_str = context.marshal_as<std::string>(emp_code_str);
			int emp_id = db.GetEmployeeIdByCode(code_str.c_str());

			if (emp_id <= 0) {
				MessageBox::Show("Employee not found!");
				return;
			}

			double days_worked = System::Convert::ToDouble(days_worked_str);
			double ot_hours = System::Convert::ToDouble(ot_hours_str);
			double deductions = System::Convert::ToDouble(deductions_str);

			// GET DAILY RATE
			MYSQL_RES* result = db.GetEmployeeById(emp_id);
			if (!result) {
				MessageBox::Show("Employee not found!");
				return;
			}

			MYSQL_ROW row = mysql_fetch_row(result);
			double daily_rate = System::Convert::ToDouble(gcnew System::String(row[4]));
			mysql_free_result(result);

			// CALCULATE
			double basic = daily_rate * days_worked;
			double ot_pay = (ot_hours * daily_rate / 8) * 1.25;
			double gross = basic + ot_pay;
			double net = gross - deductions;

			// DISPLAY
			basicSalaryLbl->Text = basic.ToString("F2");
			otPayLbl->Text = ot_pay.ToString("F2");
			grossSalaryLbl->Text = gross.ToString("F2");
			deductionsLbl->Text = deductions.ToString("F2");
			netSalaryLbl->Text = net.ToString("F2");

			// STORE FOR LATER
			storedEmpId = emp_id;
			storedDaysWorked = (int)days_worked;
			storedOTHours = ot_hours;
			storedBasic = basic;
			storedOTPay = ot_pay;
			storedGross = gross;
			storedDeductions = deductions;
			storedNet = net;
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}


	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->Owner != nullptr) {
			this->Owner->Show();
		}
		this->Close();
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void PayRollForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadEmployeesToComboBox();
	}
	private: System::Void LoadEmployeesToComboBox() {
		try {
			Database db;
			if (db.Connect()) {	
				MYSQL_RES* result = db.GetAllEmployees();
				if (result) {
					selectemp_cmbox->Items->Clear();
					MYSQL_ROW row;
					while ((row = mysql_fetch_row(result))) {
						// Add emp_code to display
						selectemp_cmbox->Items->Add(gcnew System::String(row[1]));
					}
					mysql_free_result(result);
				}
			}
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Error loading employees: " + ex->Message);
		}
	}

	private: System::Void ClearPayrollFields() {
		selectemp_cmbox->SelectedIndex = -1;  // Clear combobox
		daysworked_txtbox->Text = "";
		othours_txtbox->Text = "";
		deductions_txtbox->Text = "";

		// CLEAR SALARY LABELS (ADD THIS)
		basicSalaryLbl->Text = "";
		otPayLbl->Text = "";
		grossSalaryLbl->Text = "";
		deductionsLbl->Text = "";
		netSalaryLbl->Text = "";

		// RESET STORED VALUES
		storedEmpId = 0;
		storedDaysWorked = 0;
		storedOTHours = 0;
		storedBasic = 0;
		storedOTPay = 0;
		storedGross = 0;
		storedDeductions = 0;
		storedNet = 0;
	}
	private: System::Void generatePayrollBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (storedEmpId <= 0) {
				MessageBox::Show("Calculate salary first!", "Validation Error");
				return;
			}

			Database db;
			if (db.Connect()) {
				int existingPayrollId = db.CheckPayrollExistsForPeriod(storedEmpId);

				if (existingPayrollId > 0) {
					MessageBox::Show(
						"Payroll already computed for this period!\n\nTo compute again, delete the existing record first.",
						"Duplicate Blocked",
						MessageBoxButtons::OK,
						MessageBoxIcon::Warning

					);
					ClearPayrollFields();
					return;
				}

				if (db.SavePayroll(storedEmpId, storedDaysWorked, storedOTHours,
					storedBasic, storedOTPay, storedGross, storedDeductions, storedNet)) {
					MessageBox::Show("Payroll generated and saved!", "Success");
					ClearPayrollFields();
				}
				else {
					System::String^ err = gcnew System::String(db.GetLastError().c_str());
					MessageBox::Show("Error saving payroll: " + err);
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