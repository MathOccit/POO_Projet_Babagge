#pragma once
#include "ServiceCommandes.h"

namespace POO_Projet_Babagge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormSupprCo
	/// </summary>
	public ref class FormSupprCo : public System::Windows::Forms::Form
	{
	public:
		FormSupprCo(void)
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
		~FormSupprCo()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox_supp;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridViewSupprCo;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Data::DataSet^ oDsCo;
	private: NS_Comp_Svc::ServiceCommandes^ oSvcCo = gcnew NS_Comp_Svc::ServiceCommandes;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox_supp = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewSupprCo = (gcnew System::Windows::Forms::DataGridView());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSupprCo))->BeginInit();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(127)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(127)));
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(622, 70);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Supprimer une Commande";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->textBox_supp);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 70);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(622, 52);
			this->panel4->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(280, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(27, 20);
			this->button1->TabIndex = 4;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			// 
			// textBox_supp
			// 
			this->textBox_supp->Location = System::Drawing::Point(145, 16);
			this->textBox_supp->Name = L"textBox_supp";
			this->textBox_supp->Size = System::Drawing::Size(117, 20);
			this->textBox_supp->TabIndex = 3;
			this->textBox_supp->TextChanged += gcnew System::EventHandler(this, &FormSupprCo::RchrchRefCo);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Référence de commande :";
			// 
			// dataGridViewSupprCo
			// 
			this->dataGridViewSupprCo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSupprCo->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridViewSupprCo->Location = System::Drawing::Point(0, 122);
			this->dataGridViewSupprCo->Name = L"dataGridViewSupprCo";
			this->dataGridViewSupprCo->Size = System::Drawing::Size(622, 186);
			this->dataGridViewSupprCo->TabIndex = 7;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button2);
			this->panel6->Controls->Add(this->textBox2);
			this->panel6->Controls->Add(this->label3);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 308);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(622, 60);
			this->panel6->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(216, 15);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(27, 20);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(174, 15);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(36, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(162, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ID de la commande a supprimer :";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(535, 433);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 21);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormSupprCo::button3_Click);
			// 
			// FormSupprCo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(622, 466);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->dataGridViewSupprCo);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label1);
			this->Name = L"FormSupprCo";
			this->Text = L"FormSupprCo";
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSupprCo))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void RchrchRefCo(System::Object^ sender, System::EventArgs^ e) 
	{
		this->oDsCo = this->oSvcCo->Rechercher(textBox_supp->Text, "Commandes");
		this->dataGridViewSupprCo->DataSource = this->oDsCo;
		this->dataGridViewSupprCo->DataMember = "Commandes";
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		oSvcCo = gcnew NS_Comp_Svc::ServiceCommandes;

		this->oSvcCo->SupprimerUneCommand(textBox2->Text);
		this->Close();
	}

};
}