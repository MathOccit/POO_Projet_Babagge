#pragma once
#include "ServiceClient.h"

namespace POO_Projet_Babagge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm4
	/// </summary>
	public ref class FormSupprCl : public System::Windows::Forms::Form
	{
	public:
		FormSupprCl(void)
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
		~FormSupprCl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::DataGridView^ dataGridViewSupprCl;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox_supp;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Data::DataSet^ oDsCl;
	private: NS_Comp_Svc::ServiceClient^ oSvcCl = gcnew NS_Comp_Svc::ServiceClient;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->dataGridViewSupprCl = (gcnew System::Windows::Forms::DataGridView());
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
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSupprCl))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(535, 433);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 21);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormSupprCl::button3_Click_1);
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
			this->panel6->TabIndex = 18;
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
			this->panel5->Controls->Add(this->dataGridViewSupprCl);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(100, 122);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(522, 186);
			this->panel5->TabIndex = 17;
			// 
			// dataGridViewSupprCl
			// 
			this->dataGridViewSupprCl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSupprCl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewSupprCl->Location = System::Drawing::Point(0, 0);
			this->dataGridViewSupprCl->Name = L"dataGridViewSupprCl";
			this->dataGridViewSupprCl->Size = System::Drawing::Size(522, 186);
			this->dataGridViewSupprCl->TabIndex = 0;
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
			this->panel4->TabIndex = 16;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(365, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(117, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FormSupprCl::RchrchSuppPrnmCl);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(267, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Prenom du client :";
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
			this->textBox_supp->Location = System::Drawing::Point(90, 15);
			this->textBox_supp->Name = L"textBox_supp";
			this->textBox_supp->Size = System::Drawing::Size(117, 20);
			this->textBox_supp->TabIndex = 3;
			this->textBox_supp->TextChanged += gcnew System::EventHandler(this, &FormSupprCl::RchrcSuppNmCl);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nom du client :";
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
			this->panel2->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(131)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(522, 70);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Supprimer un profil Client";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::OrangeRed;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(100, 466);
			this->panel1->TabIndex = 14;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(100, 70);
			this->panel3->TabIndex = 2;
			// 
			// FormSupprCl
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
			this->Name = L"FormSupprCl";
			this->Text = L"FormSupprCo";
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSupprCl))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void RchrcSuppNmCl(System::Object^ sender, System::EventArgs^ e) 
{
	this->oDsCl = this->oSvcCl->Rechercher(textBox_supp->Text, textBox1->Text, "ClN");
	this->dataGridViewSupprCl->DataSource = this->oDsCl;
	this->dataGridViewSupprCl->DataMember = "ClN";
}

private: System::Void RchrchSuppPrnmCl(System::Object^ sender, System::EventArgs^ e) 
{
	this->oDsCl = this->oSvcCl->Rechercher(textBox_supp->Text, textBox1->Text, "ClPr");
	this->dataGridViewSupprCl->DataSource = this->oDsCl;
	this->dataGridViewSupprCl->DataMember = "ClPr";
}

private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	oSvcCl = gcnew NS_Comp_Svc::ServiceClient;

	this->oSvcCl->SupprimerUnClient(textBox2->Text);
	this->Close();
}

};
}
