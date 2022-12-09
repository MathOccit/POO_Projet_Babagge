#pragma once
#include "pch.h"

using namespace System;

namespace NS_Comp_Mappage
{
	public ref class MappPersonnel
	{
	private:
		int^ IDint;
		String^ IDstr;
		String^ IDPrs;
		String^ IDAdd;
		String^ IDGeo;
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
		int^ getIDint(void);
		String^ getIDstr(void);
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

		void setIDstr(String^);
		void setIDint(int^);
		void setIDPrs(String^);
		void setIDAdd(String^);
		void setIDGeo(String^);
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
		String^ Rechercher(void);
		String^ RechercherModif(void);
		String^ Selectionner_id_personnel(void);
		String^ Selectionner_id_adresse(void);
		String^ Selectionner_id_geographie(void);

		String^ Inserer_donnees_personnel(void);
		String^ Inserer_donnees_adresse(void);
		String^ Inserer_donnes_geographie(void);

	};
}