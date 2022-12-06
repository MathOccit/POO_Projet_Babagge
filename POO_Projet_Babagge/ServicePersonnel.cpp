#include "pch.h"
#include "ServicePersonnel.h"
#include "MappPersonnel.h"

NS_Comp_Svc::ServicePersonnel::ServicePersonnel(void)
{
	this->oCad_Personnel = gcnew NS_Comp_Data::CLcad();
	this->oMappPersonnel = gcnew NS_Comp_Mappage::MappPersonnel();
}

Data::DataSet^ NS_Comp_Svc::ServicePersonnel::SelectionnerTousLesPersonnels(String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappPersonnel->Selectionner();
	return this->oCad_Personnel->getRows(sql, dataTableName);
}

void NS_Comp_Svc::ServicePersonnel::AjouterUnPersonnel(String^ nom, String^ prenom, String^ naissance, String^ telephone, String^ mail, String^ numeroRue, String^ nomRue, String^ ville, String^ pays, String^ dateEmbauche, String^ titulaire)
{
	System::String^ sql;

	this->oMappPersonnel->setNom(nom);
	this->oMappPersonnel->setPrenom(prenom);
	this->oMappPersonnel->setNaissance(naissance);
	this->oMappPersonnel->setTelephone(telephone);
	this->oMappPersonnel->setMail(mail);
	this->oMappPersonnel->setNumeroRue(numeroRue);
	this->oMappPersonnel->setNomRue(nomRue);
	this->oMappPersonnel->setVille(ville);
	this->oMappPersonnel->setPays(pays);
	this->oMappPersonnel->setDateEmbauche(dateEmbauche);
	this->oMappPersonnel->setTitulaire(titulaire);

	sql = this->oMappPersonnel->Ajouter();
	this->oCad_Personnel->actionRows(sql);
}

void NS_Comp_Svc::ServicePersonnel::ModifierUnPersonnel(String^ nom, String^ prenom, String^ naissance, String^ telephone, String^ mail, String^ numeroRue, String^ nomRue, String^ ville, String^ pays, String^ dateEmbauche, String^ titulaire)
{
	System::String^ sql;

	this->oMappPersonnel->setNom(nom);
	this->oMappPersonnel->setPrenom(prenom);
	this->oMappPersonnel->setNaissance(naissance);
	this->oMappPersonnel->setTelephone(telephone);
	this->oMappPersonnel->setMail(mail);
	this->oMappPersonnel->setNumeroRue(numeroRue);
	this->oMappPersonnel->setNomRue(nomRue);
	this->oMappPersonnel->setVille(ville);
	this->oMappPersonnel->setPays(pays);
	this->oMappPersonnel->setDateEmbauche(dateEmbauche);
	this->oMappPersonnel->setTitulaire(titulaire);

	sql = this->oMappPersonnel->Modifier();
	this->oCad_Personnel->actionRows(sql);
}

void NS_Comp_Svc::ServicePersonnel::AfficherUnPersonnel(int)
{
	throw gcnew System::NotImplementedException();
}

void NS_Comp_Svc::ServicePersonnel::SupprimerUnPersonnel(String^ ID)
{
	System::String^ sql;
	this->oMappPersonnel->setID(ID);
	sql = this->oMappPersonnel->Supprimer();

	this->oCad_Personnel->actionRows(sql);
}

Data::DataSet^ NS_Comp_Svc::ServicePersonnel::Rechercher(String^ Recherche, String^ RechercheP, String^ dataTableName)
{
	System::String^ sql;
	this->oMappPersonnel->setNom(Recherche);
	this->oMappPersonnel->setPrenom(RechercheP);
	sql = this->oMappPersonnel->Rechercher();
	return this->oCad_Personnel->getRows(sql, dataTableName);
};