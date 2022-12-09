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
	/// Description résumée de MyForm2
	/// </summary>
	public ref class Inserer_Client : public System::Windows::Forms::Form
	{
	public:
		Inserer_Client(void)
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
		~Inserer_Client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ text_naissance;
	protected:
	private: System::Windows::Forms::Button^ button_ok;
	private: System::Windows::Forms::TextBox^ text_telephone;
	private: System::Windows::Forms::TextBox^ text_mail;
	private: System::Windows::Forms::TextBox^ text_pays;
	private: System::Windows::Forms::TextBox^ text_ville;
	private: System::Windows::Forms::TextBox^ text_numRue;
	private: System::Windows::Forms::TextBox^ text_nomRue;
	private: System::Windows::Forms::TextBox^ text_prenom;
	private: System::Windows::Forms::TextBox^ text_nom;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: NS_Comp_Svc::ServiceClient^ oSvc_Client = gcnew NS_Comp_Svc::ServiceClient;
	private: System::Data::DataSet^ oDs;

	protected:






















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
			this->text_naissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->button_ok = (gcnew System::Windows::Forms::Button());
			this->text_telephone = (gcnew System::Windows::Forms::TextBox());
			this->text_mail = (gcnew System::Windows::Forms::TextBox());
			this->text_pays = (gcnew System::Windows::Forms::TextBox());
			this->text_ville = (gcnew System::Windows::Forms::TextBox());
			this->text_numRue = (gcnew System::Windows::Forms::TextBox());
			this->text_nomRue = (gcnew System::Windows::Forms::TextBox());
			this->text_prenom = (gcnew System::Windows::Forms::TextBox());
			this->text_nom = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// text_naissance
			// 
			this->text_naissance->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->text_naissance->CustomFormat = L"yyyy-MM-dd";
			this->text_naissance->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->text_naissance->Location = System::Drawing::Point(157, 147);
			this->text_naissance->Margin = System::Windows::Forms::Padding(2);
			this->text_naissance->Name = L"text_naissance";
			this->text_naissance->Size = System::Drawing::Size(151, 20);
			this->text_naissance->TabIndex = 65;
			// 
			// button_ok
			// 
			this->button_ok->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button_ok->BackColor = System::Drawing::Color::Red;
			this->button_ok->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_ok->Location = System::Drawing::Point(717, 429);
			this->button_ok->Margin = System::Windows::Forms::Padding(2);
			this->button_ok->Name = L"button_ok";
			this->button_ok->Size = System::Drawing::Size(86, 31);
			this->button_ok->TabIndex = 64;
			this->button_ok->Text = L"OK";
			this->button_ok->UseVisualStyleBackColor = false;
			this->button_ok->Click += gcnew System::EventHandler(this, &Inserer_Client::button_ok_Click_1);
			// 
			// text_telephone
			// 
			this->text_telephone->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->text_telephone->Location = System::Drawing::Point(114, 251);
			this->text_telephone->Margin = System::Windows::Forms::Padding(2);
			this->text_telephone->Name = L"text_telephone";
			this->text_telephone->Size = System::Drawing::Size(234, 20);
			this->text_telephone->TabIndex = 63;
			// 
			// text_mail
			// 
			this->text_mail->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->text_mail->Location = System::Drawing::Point(73, 200);
			this->text_mail->Margin = System::Windows::Forms::Padding(2);
			this->text_mail->Name = L"text_mail";
			this->text_mail->Size = System::Drawing::Size(602, 20);
			this->text_mail->TabIndex = 61;
			// 
			// text_pays
			// 
			this->text_pays->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->text_pays->Location = System::Drawing::Point(440, 378);
			this->text_pays->Margin = System::Windows::Forms::Padding(2);
			this->text_pays->Name = L"text_pays";
			this->text_pays->Size = System::Drawing::Size(234, 20);
			this->text_pays->TabIndex = 58;
			// 
			// text_ville
			// 
			this->text_ville->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->text_ville->Location = System::Drawing::Point(72, 377);
			this->text_ville->Margin = System::Windows::Forms::Padding(2);
			this->text_ville->Name = L"text_ville";
			this->text_ville->Size = System::Drawing::Size(234, 20);
			this->text_ville->TabIndex = 56;
			// 
			// text_numRue
			// 
			this->text_numRue->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->text_numRue->Location = System::Drawing::Point(499, 332);
			this->text_numRue->Margin = System::Windows::Forms::Padding(2);
			this->text_numRue->Name = L"text_numRue";
			this->text_numRue->Size = System::Drawing::Size(86, 20);
			this->text_numRue->TabIndex = 54;
			// 
			// text_nomRue
			// 
			this->text_nomRue->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->text_nomRue->Location = System::Drawing::Point(114, 334);
			this->text_nomRue->Margin = System::Windows::Forms::Padding(2);
			this->text_nomRue->Name = L"text_nomRue";
			this->text_nomRue->Size = System::Drawing::Size(234, 20);
			this->text_nomRue->TabIndex = 50;
			// 
			// text_prenom
			// 
			this->text_prenom->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->text_prenom->Location = System::Drawing::Point(293, 98);
			this->text_prenom->Margin = System::Windows::Forms::Padding(2);
			this->text_prenom->Name = L"text_prenom";
			this->text_prenom->Size = System::Drawing::Size(126, 20);
			this->text_prenom->TabIndex = 49;
			// 
			// text_nom
			// 
			this->text_nom->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->text_nom->Location = System::Drawing::Point(79, 98);
			this->text_nom->Margin = System::Windows::Forms::Padding(2);
			this->text_nom->Name = L"text_nom";
			this->text_nom->Size = System::Drawing::Size(126, 20);
			this->text_nom->TabIndex = 46;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(26, 251);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(85, 18);
			this->label11->TabIndex = 62;
			this->label11->Text = L"Téléphone :";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(23, 200);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 18);
			this->label10->TabIndex = 60;
			this->label10->Text = L"Mail :";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(26, 147);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(138, 18);
			this->label9->TabIndex = 59;
			this->label9->Text = L"Date de naissance :";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(391, 377);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 18);
			this->label8->TabIndex = 57;
			this->label8->Text = L"Pays :";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(25, 377);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 18);
			this->label7->TabIndex = 55;
			this->label7->Text = L"Ville :";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(391, 334);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 18);
			this->label6->TabIndex = 53;
			this->label6->Text = L"Numéro de rue :";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(25, 334);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 18);
			this->label5->TabIndex = 52;
			this->label5->Text = L"Nom de rue :";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(25, 304);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 18);
			this->label4->TabIndex = 51;
			this->label4->Text = L"Adresse de résidance :";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(227, 96);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 18);
			this->label3->TabIndex = 48;
			this->label3->Text = L"Prénom :";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 96);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 18);
			this->label2->TabIndex = 47;
			this->label2->Text = L"Nom :";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Salmon;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(814, 75);
			this->panel1->TabIndex = 66;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(302, 17);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(243, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Insérer un client";
			// 
			// Inserer_Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(814, 471);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->text_naissance);
			this->Controls->Add(this->button_ok);
			this->Controls->Add(this->text_telephone);
			this->Controls->Add(this->text_mail);
			this->Controls->Add(this->text_pays);
			this->Controls->Add(this->text_ville);
			this->Controls->Add(this->text_numRue);
			this->Controls->Add(this->text_nomRue);
			this->Controls->Add(this->text_prenom);
			this->Controls->Add(this->text_nom);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Inserer_Client";
			this->Text = L"Inserer_Client";
			this->Load += gcnew System::EventHandler(this, &Inserer_Client::MyForm2_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		this->oSvc_Client = gcnew NS_Comp_Svc::ServiceClient();
	}
private: System::Void button_ok_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	this->oSvc_Client->AjouterUnClient(this->text_nom->Text, this->text_prenom->Text, this->text_naissance->Text, this->text_telephone->Text, this->text_mail->Text, this->text_numRue->Text, this->text_nomRue->Text, this->text_ville->Text, this->text_pays->Text);
	this->Close();
}

};
}
