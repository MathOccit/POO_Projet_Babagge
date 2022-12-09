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

void NS_Comp_Svc::ServicePersonnel::ModifierUnPersonnel(String^ IDPrs, String^ IDAdd, String^ IDGeo, String^ nom, String^ prenom, String^ naissance, String^ telephone, String^ mail, String^ numeroRue, String^ nomRue, String^ ville, String^ pays, String^ dateEmbauche, String^ titulaire)
{
	System::String^ sql;

	this->oMappPersonnel->setIDPrs(IDPrs);
	this->oMappPersonnel->setIDAdd(IDAdd);
	this->oMappPersonnel->setIDGeo(IDGeo);
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
	this->oMappPersonnel->setIDstr(ID);
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
}
Data::DataSet^ NS_Comp_Svc::ServicePersonnel::RechercherModif(String^ Recherche, String^ RechercheP, String^ dataTableName)
{
	System::String^ sql;
	this->oMappPersonnel->setNom(Recherche);
	this->oMappPersonnel->setPrenom(RechercheP);
	sql = this->oMappPersonnel->RechercherModif();
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

	sql = this->oMappPersonnel->Inserer_donnees_personnel();
	this->oCad_Personnel->actionRows(sql);

	int^ id_personnel;
	System::Data::DataSet^ oDs_personnel;
	oDs_personnel = this->oCad_Personnel->getRows(this->oMappPersonnel->Selectionner_id_personnel(), "personnel");
	id_personnel = System::Convert::ToInt32(oDs_personnel->Tables["personnel"]->Rows[0]["id_personnel"]->ToString());
	this->oMappPersonnel->setIDint(id_personnel);

	sql = this->oMappPersonnel->Inserer_donnees_adresse();
	this->oCad_Personnel->actionRows(sql);

	int^ id_adresse;
	System::Data::DataSet^ oDs_adresse;
	oDs_adresse = this->oCad_Personnel->getRows(this->oMappPersonnel->Selectionner_id_adresse(), "adresse");
	id_adresse = System::Convert::ToInt32(oDs_adresse->Tables["adresse"]->Rows[0]["id_adresse"]->ToString());
	this->oMappPersonnel->setIDint(id_adresse);

	sql = this->oMappPersonnel->Inserer_donnes_geographie();
	this->oCad_Personnel->actionRows(sql);

	int^ id_geographie;
	System::Data::DataSet^ oDs_geographie;
	oDs_geographie = this->oCad_Personnel->getRows(this->oMappPersonnel->Selectionner_id_geographie(), "geographie");
	id_geographie = System::Convert::ToInt32(oDs_geographie->Tables["geographie"]->Rows[0]["id_geographie"]->ToString());
	this->oMappPersonnel->setIDint(id_geographie);

	sql = "insert into [DonneBDD_Test10].[dbo].[vivre] (id_adresse, id_personnel) values ('" + id_adresse + "', '" + id_personnel + "');";
	this->oCad_Personnel->actionRows(sql);

	sql = "insert into [DonneBDD_Test10].[dbo].[localiser] (id_adresse, id_geographie) values ('" + id_adresse + "', '" + id_geographie + "');";
	this->oCad_Personnel->actionRows(sql);
}
;