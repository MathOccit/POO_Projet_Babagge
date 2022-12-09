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
	/// Description résumée de Inserer_Personnel
	/// </summary>
	public ref class Inserer_Personnel : public System::Windows::Forms::Form
	{
	public:
		Inserer_Personnel(void)
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
		~Inserer_Personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label_titre;
	protected:

	private: System::Windows::Forms::TextBox^ text_nom;
	private: System::Windows::Forms::Label^ label_nom;


	private: System::Windows::Forms::Label^ label_prenom;

	private: System::Windows::Forms::TextBox^ text_prenom;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker_naissance;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker_embauche;


	private: System::Windows::Forms::Label^ label_date_de_naissance;


	private: System::Windows::Forms::Label^ label_date_embauche;
	private: System::Windows::Forms::Label^ label_titulaire;

	private: System::Windows::Forms::ComboBox^ combo_titulaire;
	private: System::Windows::Forms::Label^ label_Mail;
	private: System::Windows::Forms::TextBox^ text_mail;
	private: System::Windows::Forms::TextBox^ text_telephone;
	private: System::Windows::Forms::Label^ label_telephone;
	private: System::Windows::Forms::Button^ button_OK;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label_nom_rue;
	private: System::Windows::Forms::Label^ label_ville;
	private: System::Windows::Forms::Label^ label_num_rue;
	private: System::Windows::Forms::Label^ label_pays;
	private: System::Windows::Forms::TextBox^ text_nom_rue;
	private: System::Windows::Forms::TextBox^ text_ville;
	private: System::Windows::Forms::TextBox^ text_pays;



	private: System::Windows::Forms::TextBox^ text_num_rue;


	private: NS_Comp_Svc::ServicePersonnel^ oSvc_Personnel = gcnew NS_Comp_Svc::ServicePersonnel;





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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label_titre = (gcnew System::Windows::Forms::Label());
			this->text_nom = (gcnew System::Windows::Forms::TextBox());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->text_prenom = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker_naissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker_embauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->label_date_de_naissance = (gcnew System::Windows::Forms::Label());
			this->label_date_embauche = (gcnew System::Windows::Forms::Label());
			this->label_titulaire = (gcnew System::Windows::Forms::Label());
			this->combo_titulaire = (gcnew System::Windows::Forms::ComboBox());
			this->label_Mail = (gcnew System::Windows::Forms::Label());
			this->text_mail = (gcnew System::Windows::Forms::TextBox());
			this->text_telephone = (gcnew System::Windows::Forms::TextBox());
			this->label_telephone = (gcnew System::Windows::Forms::Label());
			this->button_OK = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_nom_rue = (gcnew System::Windows::Forms::Label());
			this->label_ville = (gcnew System::Windows::Forms::Label());
			this->label_num_rue = (gcnew System::Windows::Forms::Label());
			this->label_pays = (gcnew System::Windows::Forms::Label());
			this->text_nom_rue = (gcnew System::Windows::Forms::TextBox());
			this->text_ville = (gcnew System::Windows::Forms::TextBox());
			this->text_pays = (gcnew System::Windows::Forms::TextBox());
			this->text_num_rue = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::YellowGreen;
			this->panel1->Controls->Add(this->label_titre);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1150, 100);
			this->panel1->TabIndex = 0;
			// 
			// label_titre
			// 
			this->label_titre->AutoSize = true;
			this->label_titre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_titre->Location = System::Drawing::Point(393, 28);
			this->label_titre->Name = L"label_titre";
			this->label_titre->Size = System::Drawing::Size(403, 46);
			this->label_titre->TabIndex = 1;
			this->label_titre->Text = L"Inserer un personnel";
			// 
			// text_nom
			// 
			this->text_nom->Location = System::Drawing::Point(167, 142);
			this->text_nom->Name = L"text_nom";
			this->text_nom->Size = System::Drawing::Size(100, 22);
			this->text_nom->TabIndex = 1;
			// 
			// label_nom
			// 
			this->label_nom->AutoSize = true;
			this->label_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nom->Location = System::Drawing::Point(57, 142);
			this->label_nom->Name = L"label_nom";
			this->label_nom->Size = System::Drawing::Size(47, 22);
			this->label_nom->TabIndex = 2;
			this->label_nom->Text = L"Nom";
			// 
			// label_prenom
			// 
			this->label_prenom->AutoSize = true;
			this->label_prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prenom->Location = System::Drawing::Point(392, 144);
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Size = System::Drawing::Size(72, 22);
			this->label_prenom->TabIndex = 4;
			this->label_prenom->Text = L"Prenom";
			// 
			// text_prenom
			// 
			this->text_prenom->Location = System::Drawing::Point(502, 144);
			this->text_prenom->Name = L"text_prenom";
			this->text_prenom->Size = System::Drawing::Size(100, 22);
			this->text_prenom->TabIndex = 3;
			// 
			// dateTimePicker_naissance
			// 
			this->dateTimePicker_naissance->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker_naissance->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_naissance->Location = System::Drawing::Point(264, 209);
			this->dateTimePicker_naissance->Name = L"dateTimePicker_naissance";
			this->dateTimePicker_naissance->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker_naissance->TabIndex = 5;
			// 
			// dateTimePicker_embauche
			// 
			this->dateTimePicker_embauche->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker_embauche->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker_embauche->Location = System::Drawing::Point(758, 209);
			this->dateTimePicker_embauche->Name = L"dateTimePicker_embauche";
			this->dateTimePicker_embauche->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker_embauche->TabIndex = 6;
			// 
			// label_date_de_naissance
			// 
			this->label_date_de_naissance->AutoSize = true;
			this->label_date_de_naissance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_date_de_naissance->Location = System::Drawing::Point(53, 209);
			this->label_date_de_naissance->Name = L"label_date_de_naissance";
			this->label_date_de_naissance->Size = System::Drawing::Size(159, 22);
			this->label_date_de_naissance->TabIndex = 7;
			this->label_date_de_naissance->Text = L"Date de naissance";
			// 
			// label_date_embauche
			// 
			this->label_date_embauche->AutoSize = true;
			this->label_date_embauche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_date_embauche->Location = System::Drawing::Point(546, 209);
			this->label_date_embauche->Name = L"label_date_embauche";
			this->label_date_embauche->Size = System::Drawing::Size(150, 22);
			this->label_date_embauche->TabIndex = 8;
			this->label_date_embauche->Text = L"Date d\'embauche";
			// 
			// label_titulaire
			// 
			this->label_titulaire->AutoSize = true;
			this->label_titulaire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_titulaire->Location = System::Drawing::Point(754, 144);
			this->label_titulaire->Name = L"label_titulaire";
			this->label_titulaire->Size = System::Drawing::Size(75, 22);
			this->label_titulaire->TabIndex = 9;
			this->label_titulaire->Text = L"Titulaire";
			// 
			// combo_titulaire
			// 
			this->combo_titulaire->FormattingEnabled = true;
			this->combo_titulaire->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Houle Remy       \t(Directeur)", L"Rodrigue Arthur \t(Responsable du stock et des commandes)",
					L"Artois Pierrette   \t(Responsable administrative)", L"Mothé Germaine\t(Responsable des clients et du SAV)"
			});
			this->combo_titulaire->Location = System::Drawing::Point(888, 142);
			this->combo_titulaire->Name = L"combo_titulaire";
			this->combo_titulaire->Size = System::Drawing::Size(239, 24);
			this->combo_titulaire->TabIndex = 10;
			// 
			// label_Mail
			// 
			this->label_Mail->AutoSize = true;
			this->label_Mail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Mail->Location = System::Drawing::Point(54, 271);
			this->label_Mail->Name = L"label_Mail";
			this->label_Mail->Size = System::Drawing::Size(42, 22);
			this->label_Mail->TabIndex = 11;
			this->label_Mail->Text = L"Mail";
			// 
			// text_mail
			// 
			this->text_mail->Location = System::Drawing::Point(178, 273);
			this->text_mail->Name = L"text_mail";
			this->text_mail->Size = System::Drawing::Size(593, 22);
			this->text_mail->TabIndex = 12;
			// 
			// text_telephone
			// 
			this->text_telephone->Location = System::Drawing::Point(178, 327);
			this->text_telephone->Name = L"text_telephone";
			this->text_telephone->Size = System::Drawing::Size(283, 22);
			this->text_telephone->TabIndex = 13;
			// 
			// label_telephone
			// 
			this->label_telephone->AutoSize = true;
			this->label_telephone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_telephone->Location = System::Drawing::Point(54, 325);
			this->label_telephone->Name = L"label_telephone";
			this->label_telephone->Size = System::Drawing::Size(96, 22);
			this->label_telephone->TabIndex = 14;
			this->label_telephone->Text = L"Telephone";
			// 
			// button_OK
			// 
			this->button_OK->BackColor = System::Drawing::Color::YellowGreen;
			this->button_OK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_OK->Location = System::Drawing::Point(1037, 531);
			this->button_OK->Name = L"button_OK";
			this->button_OK->Size = System::Drawing::Size(101, 29);
			this->button_OK->TabIndex = 15;
			this->button_OK->Text = L"OK";
			this->button_OK->UseVisualStyleBackColor = false;
			this->button_OK->Click += gcnew System::EventHandler(this, &Inserer_Personnel::button_OK_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(57, 399);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 22);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Adresse de résidence :";
			// 
			// label_nom_rue
			// 
			this->label_nom_rue->AutoSize = true;
			this->label_nom_rue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nom_rue->Location = System::Drawing::Point(57, 464);
			this->label_nom_rue->Name = L"label_nom_rue";
			this->label_nom_rue->Size = System::Drawing::Size(122, 22);
			this->label_nom_rue->TabIndex = 17;
			this->label_nom_rue->Text = L"Nom de la rue";
			// 
			// label_ville
			// 
			this->label_ville->AutoSize = true;
			this->label_ville->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_ville->Location = System::Drawing::Point(57, 509);
			this->label_ville->Name = L"label_ville";
			this->label_ville->Size = System::Drawing::Size(44, 22);
			this->label_ville->TabIndex = 18;
			this->label_ville->Text = L"Ville";
			// 
			// label_num_rue
			// 
			this->label_num_rue->AutoSize = true;
			this->label_num_rue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_num_rue->Location = System::Drawing::Point(598, 464);
			this->label_num_rue->Name = L"label_num_rue";
			this->label_num_rue->Size = System::Drawing::Size(139, 22);
			this->label_num_rue->TabIndex = 19;
			this->label_num_rue->Text = L"Numéro de rue :";
			// 
			// label_pays
			// 
			this->label_pays->AutoSize = true;
			this->label_pays->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_pays->Location = System::Drawing::Point(597, 507);
			this->label_pays->Name = L"label_pays";
			this->label_pays->Size = System::Drawing::Size(50, 22);
			this->label_pays->TabIndex = 20;
			this->label_pays->Text = L"Pays";
			// 
			// text_nom_rue
			// 
			this->text_nom_rue->Location = System::Drawing::Point(217, 463);
			this->text_nom_rue->Name = L"text_nom_rue";
			this->text_nom_rue->Size = System::Drawing::Size(364, 22);
			this->text_nom_rue->TabIndex = 21;
			// 
			// text_ville
			// 
			this->text_ville->Location = System::Drawing::Point(217, 509);
			this->text_ville->Name = L"text_ville";
			this->text_ville->Size = System::Drawing::Size(364, 22);
			this->text_ville->TabIndex = 22;
			// 
			// text_pays
			// 
			this->text_pays->Location = System::Drawing::Point(747, 506);
			this->text_pays->Name = L"text_pays";
			this->text_pays->Size = System::Drawing::Size(196, 22);
			this->text_pays->TabIndex = 23;
			// 
			// text_num_rue
			// 
			this->text_num_rue->Location = System::Drawing::Point(747, 463);
			this->text_num_rue->Name = L"text_num_rue";
			this->text_num_rue->Size = System::Drawing::Size(196, 22);
			this->text_num_rue->TabIndex = 24;
			// 
			// Inserer_Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1150, 572);
			this->Controls->Add(this->text_num_rue);
			this->Controls->Add(this->text_pays);
			this->Controls->Add(this->text_ville);
			this->Controls->Add(this->text_nom_rue);
			this->Controls->Add(this->label_pays);
			this->Controls->Add(this->label_num_rue);
			this->Controls->Add(this->label_ville);
			this->Controls->Add(this->label_nom_rue);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_OK);
			this->Controls->Add(this->label_telephone);
			this->Controls->Add(this->text_telephone);
			this->Controls->Add(this->text_mail);
			this->Controls->Add(this->label_Mail);
			this->Controls->Add(this->combo_titulaire);
			this->Controls->Add(this->label_titulaire);
			this->Controls->Add(this->label_date_embauche);
			this->Controls->Add(this->label_date_de_naissance);
			this->Controls->Add(this->dateTimePicker_embauche);
			this->Controls->Add(this->dateTimePicker_naissance);
			this->Controls->Add(this->label_prenom);
			this->Controls->Add(this->text_prenom);
			this->Controls->Add(this->label_nom);
			this->Controls->Add(this->text_nom);
			this->Controls->Add(this->panel1);
			this->Name = L"Inserer_Personnel";
			this->Text = L"Inserer_Personnel";
			this->Load += gcnew System::EventHandler(this, &Inserer_Personnel::Inserer_Personnel_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void button_OK_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc_Personnel->AjouterUnPersonnel(this->text_nom->Text, this->text_prenom->Text, this->dateTimePicker_naissance->Text, this->text_telephone->Text, this->text_mail->Text, this->text_num_rue->Text, this->text_nom_rue->Text, this->text_ville->Text, this->text_pays->Text, this->dateTimePicker_embauche->Text, this->combo_titulaire->Text);
		this->Close();
	}
	private: System::Void Inserer_Personnel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
