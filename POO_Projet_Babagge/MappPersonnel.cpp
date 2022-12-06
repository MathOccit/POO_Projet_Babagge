//MappPersonnel.cpp

#include"pch.h"

NS_Comp_Mappage::MappPersonnel::MappPersonnel(void)
{
	//throw gcnew System::NotImplementedException();
}

String^ NS_Comp_Mappage::MappPersonnel::getID(void)
{
	return this->ID;
}

String^ NS_Comp_Mappage::MappPersonnel::getNom(void)
{
	return this->nom;
}

String^ NS_Comp_Mappage::MappPersonnel::getPrenom(void)
{
	return this->prenom;
}

String^ NS_Comp_Mappage::MappPersonnel::getNaissance(void)
{
	return this->naissance;
}

String^ NS_Comp_Mappage::MappPersonnel::getTelephone(void)
{
	return this->telephone;
}

String^ NS_Comp_Mappage::MappPersonnel::getMail(void)
{
	return this->mail;
}

String^ NS_Comp_Mappage::MappPersonnel::getNumeroRue(void)
{
	return this->numeroRue;
}

String^ NS_Comp_Mappage::MappPersonnel::getNomRue(void)
{
	return this->nomRue;
}

String^ NS_Comp_Mappage::MappPersonnel::getVille(void)
{
	return this->ville;
}

String^ NS_Comp_Mappage::MappPersonnel::getPays(void)
{
	return this->pays;
}

String^ NS_Comp_Mappage::MappPersonnel::getDateEmbauche(void)
{
	return this->dateEmbauche;
}

String^ NS_Comp_Mappage::MappPersonnel::getTitulaire(void)
{
	return this->titulaire;
}

void NS_Comp_Mappage::MappPersonnel::setID(String^ ID)
{
	this->ID = ID ;
}

void NS_Comp_Mappage::MappPersonnel::setNom(String^ nom)
{
	this->nom = nom;
}

void NS_Comp_Mappage::MappPersonnel::setPrenom(String^ prenom)
{
	this->prenom = prenom;
}

void NS_Comp_Mappage::MappPersonnel::setNaissance(String^ naissance)
{
	this->naissance = naissance;
}

void NS_Comp_Mappage::MappPersonnel::setTelephone(String^ telephone)
{
	this->telephone = telephone;
}

void NS_Comp_Mappage::MappPersonnel::setMail(String^ mail)
{
	this->mail = mail;
}

void NS_Comp_Mappage::MappPersonnel::setNumeroRue(String^ numeroRue)
{
	this->numeroRue = numeroRue;
}

void NS_Comp_Mappage::MappPersonnel::setNomRue(String^ nomRue)
{
	this->nomRue = nomRue;
}

void NS_Comp_Mappage::MappPersonnel::setVille(String^ ville)
{
	this->ville = ville;
}

void NS_Comp_Mappage::MappPersonnel::setPays(String^ pays)
{
	this->pays = pays;
}

void NS_Comp_Mappage::MappPersonnel::setDateEmbauche(String^ dateEmbauche)
{
	this->dateEmbauche = dateEmbauche;
}

void NS_Comp_Mappage::MappPersonnel::setTitulaire(String^ titulaire)
{
	this->titulaire = titulaire;
}

String^ NS_Comp_Mappage::MappPersonnel::Selectionner(void)
{
	return "SELECT * FROM [DonneBDD_Test10].[dbo].[Personnel]";
}

String^ NS_Comp_Mappage::MappPersonnel::Ajouter(void)
{
	return "INSERT INTO Personnel (ID, nom, naissance, telephone, mail, numeroRue, nomRue, ville, pays, dateEmbauche, titulaire, dateEmbauche, titulaire) VALUES('" + this->nom + "','" + this->prenom + "','" + this->naissance + "','" + this->telephone + "','" + this->mail + "','" + this->numeroRue + "','" + this->nomRue + "','" + this->ville + "','" + this->pays + "','" + this->dateEmbauche + "','" + this->titulaire + "');";
}

String^ NS_Comp_Mappage::MappPersonnel::Supprimer(void)
{
	return "DELETE FROM [DonneBDD_Test10].[dbo].[vivre] WHERE [vivre].[id_personnel] = '" + this->ID + "'; DELETE FROM [DonneBDD_Test10].[dbo].[personnel] WHERE [personnel].[id_personnel] = '" + this->ID + "';";
}

String^ NS_Comp_Mappage::MappPersonnel::Modifier(void)
{
	return "UPDATE Personnel SET nom = '" + this->nom + "', prenom = '" + this->prenom + "', naissance = '" + this->naissance + "', telephone = '" + this->telephone + "', mail = '" + this->mail + "', numeroRue = '" + this->numeroRue + "', nomRue = '" + this->nomRue + "', ville = '" + this->ville + "', pays = '" + this->pays + "', DateEmbauche = '" + this->dateEmbauche + "', Titulaire = '" + this->titulaire + "'; WHERE '" + this->ID + "'";
}

System::String^ NS_Comp_Mappage::MappPersonnel::Rechercher(void)
{
	return "SELECT * FROM [DonneBDD_Test10].[dbo].[personnel] WHERE [personnel].[nom_personnel] LIKE '%" + this->nom + "%' AND [personnel].[prenom_personnel] LIKE '%" + this->prenom + "%';";
};
