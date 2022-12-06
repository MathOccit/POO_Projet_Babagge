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
	/// Description résumée de MyForm
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
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;


	private: NS_Comp_Svc::ServiceClient^ oSvc_Client = gcnew NS_Comp_Svc::ServiceClient;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button_ok;

	private: System::Windows::Forms::TextBox^ text_telephone;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ text_mail;

	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ text_pays;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ text_ville;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ text_numRue;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ text_nomRue;

	private: System::Windows::Forms::TextBox^ text_prenom;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ text_nom;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label13;


	private: System::Windows::Forms::DateTimePicker^ text_naissance;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->text_naissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->button_ok = (gcnew System::Windows::Forms::Button());
			this->text_telephone = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->text_mail = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->text_pays = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->text_ville = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->text_numRue = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->text_nomRue = (gcnew System::Windows::Forms::TextBox());
			this->text_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->text_nom = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(830, 489);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->text_naissance);
			this->tabPage1->Controls->Add(this->button_ok);
			this->tabPage1->Controls->Add(this->text_telephone);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->text_mail);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->text_pays);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->text_ville);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->text_numRue);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->text_nomRue);
			this->tabPage1->Controls->Add(this->text_prenom);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->text_nom);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage1->Size = System::Drawing::Size(822, 460);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Inserer";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// text_naissance
			// 
			this->text_naissance->CustomFormat = L"yyyy-MM-dd";
			this->text_naissance->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->text_naissance->Location = System::Drawing::Point(172, 145);
			this->text_naissance->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->text_naissance->Name = L"text_naissance";
			this->text_naissance->Size = System::Drawing::Size(151, 21);
			this->text_naissance->TabIndex = 45;
			// 
			// button_ok
			// 
			this->button_ok->BackColor = System::Drawing::Color::Red;
			this->button_ok->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_ok->Location = System::Drawing::Point(732, 427);
			this->button_ok->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_ok->Name = L"button_ok";
			this->button_ok->Size = System::Drawing::Size(86, 31);
			this->button_ok->TabIndex = 42;
			this->button_ok->Text = L"OK";
			this->button_ok->UseVisualStyleBackColor = false;
			this->button_ok->Click += gcnew System::EventHandler(this, &Inserer_Client::button_ok_Click);
			// 
			// text_telephone
			// 
			this->text_telephone->Location = System::Drawing::Point(129, 249);
			this->text_telephone->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->text_telephone->Name = L"text_telephone";
			this->text_telephone->Size = System::Drawing::Size(234, 21);
			this->text_telephone->TabIndex = 41;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(41, 249);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(85, 18);
			this->label11->TabIndex = 40;
			this->label11->Text = L"Téléphone :";
			// 
			// text_mail
			// 
			this->text_mail->Location = System::Drawing::Point(88, 198);
			this->text_mail->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->text_mail->Name = L"text_mail";
			this->text_mail->Size = System::Drawing::Size(602, 21);
			this->text_mail->TabIndex = 39;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(38, 198);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 18);
			this->label10->TabIndex = 38;
			this->label10->Text = L"Mail :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(41, 145);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(138, 18);
			this->label9->TabIndex = 36;
			this->label9->Text = L"Date de naissance :";
			// 
			// text_pays
			// 
			this->text_pays->Location = System::Drawing::Point(455, 376);
			this->text_pays->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->text_pays->Name = L"text_pays";
			this->text_pays->Size = System::Drawing::Size(234, 21);
			this->text_pays->TabIndex = 35;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(406, 375);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 18);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Pays :";
			// 
			// text_ville
			// 
			this->text_ville->Location = System::Drawing::Point(87, 375);
			this->text_ville->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->text_ville->Name = L"text_ville";
			this->text_ville->Size = System::Drawing::Size(234, 21);
			this->text_ville->TabIndex = 33;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(40, 375);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 18);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Ville :";
			// 
			// text_numRue
			// 
			this->text_numRue->Location = System::Drawing::Point(514, 330);
			this->text_numRue->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->text_numRue->Name = L"text_numRue";
			this->text_numRue->Size = System::Drawing::Size(86, 21);
			this->text_numRue->TabIndex = 31;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(406, 332);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 18);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Numéro de rue :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(40, 332);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 18);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Nom de rue :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(40, 302);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 18);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Adresse de résidance :";
			// 
			// text_nomRue
			// 
			this->text_nomRue->Location = System::Drawing::Point(129, 332);
			this->text_nomRue->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->text_nomRue->Name = L"text_nomRue";
			this->text_nomRue->Size = System::Drawing::Size(234, 21);
			this->text_nomRue->TabIndex = 27;
			// 
			// text_prenom
			// 
			this->text_prenom->Location = System::Drawing::Point(308, 96);
			this->text_prenom->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->text_prenom->Name = L"text_prenom";
			this->text_prenom->Size = System::Drawing::Size(126, 21);
			this->text_prenom->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(242, 94);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 18);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Prénom :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(41, 94);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 18);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Nom :";
			// 
			// text_nom
			// 
			this->text_nom->Location = System::Drawing::Point(94, 96);
			this->text_nom->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->text_nom->Name = L"text_nom";
			this->text_nom->Size = System::Drawing::Size(126, 21);
			this->text_nom->TabIndex = 23;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Salmon;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(2, 2);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(818, 75);
			this->panel1->TabIndex = 22;
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
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->panel2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage2->Size = System::Drawing::Size(822, 460);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Validation";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(460, 338);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 19);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Annuler";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(286, 338);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 19);
			this->button3->TabIndex = 6;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(253, 203);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(315, 18);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Voulez vous valider l\'action d\'insérer un client \?";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSalmon;
			this->panel2->Controls->Add(this->label13);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(2, 2);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(818, 81);
			this->panel2->TabIndex = 4;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Location = System::Drawing::Point(328, 28);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(132, 26);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Validation :";
			// 
			// Inserer_Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(830, 489);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Inserer_Client";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &Inserer_Client::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc_Client = gcnew NS_Comp_Svc::ServiceClient();
	}

	private: System::Void button_ok_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc_Client->AjouterUnClient(this->text_nom->Text, this->text_prenom->Text, this->text_naissance->Text, this->text_telephone->Text, this->text_mail->Text, this->text_numRue->Text, this->text_nomRue->Text, this->text_ville->Text, this->text_pays->Text);
		this->Close();
	}
	};
}
