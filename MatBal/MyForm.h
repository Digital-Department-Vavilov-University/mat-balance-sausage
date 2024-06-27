#pragma once

namespace MatBal {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::TextBox^ beefHighTextBox;
        System::Windows::Forms::TextBox^ porkLeanTextBox;
        System::Windows::Forms::TextBox^ porkHalfFatTextBox;
        System::Windows::Forms::TextBox^ porkFatTextBox;
        System::Windows::Forms::TextBox^ beefFirstTextBox;
        System::Windows::Forms::TextBox^ beefSecondTextBox;

        System::Windows::Forms::Button^ calculateButton;
        System::Windows::Forms::Label^ resultLabel;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::PictureBox^ pictureBox1;



    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->beefHighTextBox = (gcnew System::Windows::Forms::TextBox());
            this->porkLeanTextBox = (gcnew System::Windows::Forms::TextBox());
            this->porkHalfFatTextBox = (gcnew System::Windows::Forms::TextBox());
            this->porkFatTextBox = (gcnew System::Windows::Forms::TextBox());
            this->beefFirstTextBox = (gcnew System::Windows::Forms::TextBox());
            this->beefSecondTextBox = (gcnew System::Windows::Forms::TextBox());
            this->calculateButton = (gcnew System::Windows::Forms::Button());
            this->resultLabel = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // beefHighTextBox
            // 
            this->beefHighTextBox->BackColor = System::Drawing::Color::AliceBlue;
            this->beefHighTextBox->Location = System::Drawing::Point(12, 25);
            this->beefHighTextBox->Name = L"beefHighTextBox";
            this->beefHighTextBox->Size = System::Drawing::Size(172, 20);
            this->beefHighTextBox->TabIndex = 0;
            this->beefHighTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::beefHighTextBox_KeyPress);
            // 
            // porkLeanTextBox
            // 
            this->porkLeanTextBox->BackColor = System::Drawing::Color::AliceBlue;
            this->porkLeanTextBox->Location = System::Drawing::Point(327, 25);
            this->porkLeanTextBox->Name = L"porkLeanTextBox";
            this->porkLeanTextBox->Size = System::Drawing::Size(175, 20);
            this->porkLeanTextBox->TabIndex = 1;
            this->porkLeanTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::porkLeanTextBox_KeyPress);
            // 
            // porkHalfFatTextBox
            // 
            this->porkHalfFatTextBox->BackColor = System::Drawing::Color::AliceBlue;
            this->porkHalfFatTextBox->Location = System::Drawing::Point(327, 67);
            this->porkHalfFatTextBox->Name = L"porkHalfFatTextBox";
            this->porkHalfFatTextBox->Size = System::Drawing::Size(175, 20);
            this->porkHalfFatTextBox->TabIndex = 2;
            this->porkHalfFatTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::porkHalfFatTextBox_KeyPress);
            // 
            // porkFatTextBox
            // 
            this->porkFatTextBox->BackColor = System::Drawing::Color::AliceBlue;
            this->porkFatTextBox->Location = System::Drawing::Point(327, 106);
            this->porkFatTextBox->Name = L"porkFatTextBox";
            this->porkFatTextBox->Size = System::Drawing::Size(175, 20);
            this->porkFatTextBox->TabIndex = 3;
            this->porkFatTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::porkFatTextBox_KeyPress);
            // 
            // beefFirstTextBox
            // 
            this->beefFirstTextBox->BackColor = System::Drawing::Color::AliceBlue;
            this->beefFirstTextBox->Location = System::Drawing::Point(12, 67);
            this->beefFirstTextBox->Name = L"beefFirstTextBox";
            this->beefFirstTextBox->Size = System::Drawing::Size(172, 20);
            this->beefFirstTextBox->TabIndex = 4;
            this->beefFirstTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::beefFirstTextBox_KeyPress);
            // 
            // beefSecondTextBox
            // 
            this->beefSecondTextBox->BackColor = System::Drawing::Color::AliceBlue;
            this->beefSecondTextBox->Location = System::Drawing::Point(12, 106);
            this->beefSecondTextBox->Name = L"beefSecondTextBox";
            this->beefSecondTextBox->Size = System::Drawing::Size(172, 20);
            this->beefSecondTextBox->TabIndex = 5;
            this->beefSecondTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::beefSecondTextBox_KeyPress);
            // 
            // calculateButton
            // 
            this->calculateButton->BackColor = System::Drawing::Color::AliceBlue;
            this->calculateButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->calculateButton->Location = System::Drawing::Point(202, 147);
            this->calculateButton->Name = L"calculateButton";
            this->calculateButton->Size = System::Drawing::Size(100, 28);
            this->calculateButton->TabIndex = 6;
            this->calculateButton->Text = L"Расчитать";
            this->calculateButton->UseVisualStyleBackColor = false;
            this->calculateButton->Click += gcnew System::EventHandler(this, &MyForm::calculateButton_Click);
            // 
            // resultLabel
            // 
            this->resultLabel->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->resultLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->resultLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->resultLabel->Location = System::Drawing::Point(12, 178);
            this->resultLabel->Name = L"resultLabel";
            this->resultLabel->Size = System::Drawing::Size(490, 142);
            this->resultLabel->TabIndex = 7;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(54, 9);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(91, 13);
            this->label2->TabIndex = 9;
            this->label2->Text = L"Говядина В/С кг";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(380, 9);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(91, 13);
            this->label3->TabIndex = 10;
            this->label3->Text = L"Свинина Н/Ж кг";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(54, 51);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(88, 13);
            this->label4->TabIndex = 11;
            this->label4->Text = L"Говядина 1 С кг";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(380, 51);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(91, 13);
            this->label5->TabIndex = 12;
            this->label5->Text = L"Свинина П/Ж кг";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(54, 90);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(88, 13);
            this->label6->TabIndex = 13;
            this->label6->Text = L"Говядина 2 С кг";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(380, 90);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(78, 13);
            this->label7->TabIndex = 14;
            this->label7->Text = L"Свинина Ж кг";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(190, 12);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(131, 129);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 15;
            this->pictureBox1->TabStop = false;
            // 
            // MyForm
            // 
            this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
            this->ClientSize = System::Drawing::Size(514, 327);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->resultLabel);
            this->Controls->Add(this->calculateButton);
            this->Controls->Add(this->beefSecondTextBox);
            this->Controls->Add(this->beefFirstTextBox);
            this->Controls->Add(this->porkFatTextBox);
            this->Controls->Add(this->porkHalfFatTextBox);
            this->Controls->Add(this->porkLeanTextBox);
            this->Controls->Add(this->beefHighTextBox);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
            this->Name = L"MyForm";
            this->Text = L"Выход колбасных изделий";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void calculateButton_Click(System::Object^ sender, System::EventArgs^ e)
        {
            double beefHigh = Convert::ToDouble(beefHighTextBox->Text);
            double porkLean = Convert::ToDouble(porkLeanTextBox->Text);
            double porkHalfFat = Convert::ToDouble(porkHalfFatTextBox->Text);
            double porkFat = Convert::ToDouble(porkFatTextBox->Text);
            double beefFirst = Convert::ToDouble(beefFirstTextBox->Text);
            double beefSecond = Convert::ToDouble(beefSecondTextBox->Text);

            // Calculate sausage production
            double sausageAmateur = Math::Min(beefHigh / 0.35, porkLean / 0.4);
            double sausageDiabetic = Math::Min(beefHigh / 0.2, porkHalfFat / 0.55);
            double sausageCapital = Math::Min(beefHigh / 0.15, Math::Min(porkLean / 0.45, porkHalfFat / 0.15));
            double sausageVeal = Math::Min(beefHigh / 0.25, Math::Min(porkLean / 0.3, porkFat / 0.15));
            double sausageTea = Math::Min(beefSecond / 0.7, porkHalfFat / 0.2);

            String^ result = "Любительская: " + sausageAmateur.ToString("F2") + " кг\n" +
                "Диабетическая: " + sausageDiabetic.ToString("F2") + " кг\n" +
                "Столичная: " + sausageCapital.ToString("F2") + " кг\n" +
                "Телячья: " + sausageVeal.ToString("F2") + " кг\n" +
                "Чайная: " + sausageTea.ToString("F2") + " кг\n";

            resultLabel->Text = result;
        }

private: System::Void beefHighTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
    {
        e->Handled = true; // Запрет ввода символов, кроме цифр
    }

}
private: System::Void beefFirstTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
    {
        e->Handled = true; // Запрет ввода символов, кроме цифр
    }

}
private: System::Void beefSecondTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
    {
        e->Handled = true; // Запрет ввода символов, кроме цифр
    }

}
private: System::Void porkLeanTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
    {
        e->Handled = true; // Запрет ввода символов, кроме цифр
    }

}
private: System::Void porkFatTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
    {
        e->Handled = true; // Запрет ввода символов, кроме цифр
    }

}
private: System::Void porkHalfFatTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
    {
        e->Handled = true; // Запрет ввода символов, кроме цифр
    }

}
};
}
