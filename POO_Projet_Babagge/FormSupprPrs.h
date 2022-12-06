#pragma once
#include "ServicePersonnel.h"

namespace POO_Projet_Babagge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormSupprPrs
	/// </summary>
	public ref class FormSupprPrs : public System::Windows::Forms::Form
	{
	public:
		FormSupprPrs(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FormSupprPrs()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel6;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::DataGridView^ dataGridViewSupprPrs;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox_supp;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Data::DataSet^ oDsPrs;
	private: NS_Comp_Svc::ServicePersonnel^ oSvcPrs = gcnew NS_Comp_Svc::ServicePersonnel;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->dataGridViewSupprPrs = (gcnew System::Windows::Forms::DataGridView());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox_supp = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSupprPrs))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button2);
			this->panel6->Controls->Add(this->textBox2);
			this->panel6->Controls->Add(this->label3);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(100, 308);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(522, 60);
			this->panel6->TabIndex = 12;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(185, 18);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(27, 20);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(133, 15);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(36, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ID du profil a supprimer :";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->dataGridViewSupprPrs);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(100, 122);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(522, 186);
			this->panel5->TabIndex = 11;
			// 
			// dataGridViewSupprPrs
			// 
			this->dataGridViewSupprPrs->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSupprPrs->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewSupprPrs->Location = System::Drawing::Point(0, 0);
			this->dataGridViewSupprPrs->Name = L"dataGridViewSupprPrs";
			this->dataGridViewSupprPrs->Size = System::Drawing::Size(522, 186);
			this->dataGridViewSupprPrs->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->textBox_supp);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(100, 70);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(522, 52);
			this->panel4->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(386, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(117, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FormSupprPrs::RchrchSuppPrnmPrs);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(267, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Prenom du personnel :";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(234, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(27, 20);
			this->button1->TabIndex = 4;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			// 
			// textBox_supp
			// 
			this->textBox_supp->Location = System::Drawing::Point(111, 15);
			this->textBox_supp->Name = L"textBox_supp";
			this->textBox_supp->Size = System::Drawing::Size(117, 20);
			this->textBox_supp->TabIndex = 3;
			this->textBox_supp->TextChanged += gcnew System::EventHandler(this, &FormSupprPrs::RchrcSuppNmPrs);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nom du personnel :";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(100, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(522, 70);
			this->panel2->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(522, 70);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Supprimer un profil personnel";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(100, 466);
			this->panel1->TabIndex = 8;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(100, 70);
			this->panel3->TabIndex = 2;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(535, 433);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 21);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormSupprPrs::button3_Click);
			// 
			// FormSupprPrs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(622, 466);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"FormSupprPrs";
			this->Text = L"FormSupprPrs";
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSupprPrs))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void RchrcSuppNmPrs(System::Object^ sender, System::EventArgs^ e) 
	{
		this->oDsPrs = this->oSvcPrs->Rechercher(textBox_supp->Text, textBox1->Text, "PrsN");
		this->dataGridViewSupprPrs->DataSource = this->oDsPrs;
		this->dataGridViewSupprPrs->DataMember = "PrsN";
	}
private: System::Void RchrchSuppPrnmPrs(System::Object^ sender, System::EventArgs^ e) 
{
	this->oDsPrs = this->oSvcPrs->Rechercher(textBox_supp->Text, textBox1->Text, "PrsPr");
	this->dataGridViewSupprPrs->DataSource = this->oDsPrs;
	this->dataGridViewSupprPrs->DataMember = "PrsPr";
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	oSvcPrs = gcnew NS_Comp_Svc::ServicePersonnel;

	this->oSvcPrs->SupprimerUnPersonnel(textBox2->Text);
	this->Close();
}

};
}
