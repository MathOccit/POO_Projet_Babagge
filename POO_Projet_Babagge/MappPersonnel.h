#pragma once
#include "pch.h"

using namespace System;

namespace NS_Comp_Mappage
{
	public ref class MappPersonnel
	{
	private:
		String^ ID;
		String^ nom;
		String^ prenom;
		String^ naissance;
		String^ telephone;
		String^ mail;
		String^ numeroRue;
		String^ nomRue;
		String^ ville;
		String^ pays;
		String^ dateEmbauche;
		String^ titulaire;

	public:
		MappPersonnel(void);

		String^ getID(void);
		String^ getNom(void);
		String^ getPrenom(void);
		String^ getNaissance(void);
		String^ getTelephone(void);
		String^ getMail(void);
		String^ getNumeroRue(void);
		String^ getNomRue(void);
		String^ getVille(void);
		String^ getPays(void);
		String^ getDateEmbauche(void);
		String^ getTitulaire(void);

		void setID(String^);
		void setNom(String^);
		void setPrenom(String^);
		void setNaissance(String^);
		void setTelephone(String^);
		void setMail(String^);
		void setNumeroRue(String^);
		void setNomRue(String^);
		void setVille(String^);
		void setPays(String^);
		void setDateEmbauche(String^);
		void setTitulaire(String^);

		String^ Selectionner(void);
		String^ Ajouter(void);
		String^ Supprimer(void);
		String^ Modifier(void);
		System::String^ Rechercher(void);

	};
}