#include"pch.h"

String^ NS_Comp_Mappage::MappPersonnel::getIDstr(void)
{
	return this->IDstr;
}

int^ NS_Comp_Mappage::MappPersonnel::getIDint(void)
{
	return this->IDint;
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

void NS_Comp_Mappage::MappPersonnel::setIDstr(String^ ID)
{
	this->IDstr = ID ;
}
void NS_Comp_Mappage::MappPersonnel::setIDint(int^ ID)
{
	this->IDint = ID;
}
void NS_Comp_Mappage::MappPersonnel::setIDPrs(String^ IDPrs)
{
	this->IDPrs = IDPrs;
}
void NS_Comp_Mappage::MappPersonnel::setIDAdd(String^ IDAdd)
{
	this->IDAdd = IDAdd;
}
void NS_Comp_Mappage::MappPersonnel::setIDGeo(String^ IDGeo)
{
	this->IDGeo = IDGeo;
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
	return "DELETE FROM [DonneBDD_Test10].[dbo].[vivre] WHERE [vivre].[id_personnel] = '" + this->IDstr + "'; DELETE FROM [DonneBDD_Test10].[dbo].[personnel] WHERE [personnel].[id_personnel] = '" + this->IDstr + "';";
}

String^ NS_Comp_Mappage::MappPersonnel::Modifier(void)
{
	return "UPDATE [DonneBDD_Test10].[dbo].[personnel] SET [personnel].[nom_personnel] = '" + this->nom + "', [personnel].[prenom_personnel] = '" + this->prenom + "', [personnel].[naissance_personnel] = '" + this->naissance + "', [personnel].[numero_tel_personnel] = '" + this->telephone + "', [personnel].[adresse_mail_personnel] ='" + this->mail + "', [personnel].[date_embauche] ='" + this->dateEmbauche + "', [personnel].[titulaire] ='" + this->titulaire + "' WHERE [personnel].[id_personnel] = '" + this->IDPrs + "' ; UPDATE [DonneBDD_Test10].[dbo].[adresse] SET [adresse].[num_voie] = '" + this->numeroRue + "', [adresse].[nom_voie] ='" + this->nomRue + "' WHERE [adresse].[id_adresse] = '" + this->IDAdd + "' ; UPDATE [DonneBDD_Test10].[dbo].[geographie] SET [geographie].[ville] = '" + this->ville + "' , [geographie].[pays]= '" + this->pays + "'WHERE [geographie].[id_geographie] = '" + this->IDGeo + "';";
}

System::String^ NS_Comp_Mappage::MappPersonnel::Rechercher(void)
{
	return "SELECT * FROM [DonneBDD_Test10].[dbo].[personnel] WHERE [personnel].[nom_personnel] LIKE '%" + this->nom + "%' AND [personnel].[prenom_personnel] LIKE '%" + this->prenom + "%';";
}

System::String^ NS_Comp_Mappage::MappPersonnel::RechercherModif(void)
{
	return "SELECT [personnel].[id_personnel], [adresse].[id_adresse], [geographie].[id_geographie], [personnel].[nom_personnel], [personnel].[prenom_personnel], [personnel].[date_embauche], [personnel].[titulaire], [personnel].[numero_tel_personnel], [personnel].[adresse_mail_personnel], [personnel].[naissance_personnel], [adresse].[num_voie], [adresse].[nom_voie], [geographie].[ville], [geographie].[pays] FROM[DonneBDD_Test10].[dbo].[personnel] inner join vivre on[personnel].[id_personnel] = [vivre].[id_personnel] inner join[DonneBDD_Test10].[dbo].[adresse] on[vivre].[id_adresse] = [adresse].[id_adresse] inner join[DonneBDD_Test10].[dbo].[localiser] on[adresse].[id_adresse] = [localiser].[id_adresse] inner join[DonneBDD_Test10].[dbo].[geographie] on[localiser].[id_geographie] = [geographie].[id_geographie]WHERE [personnel].[nom_personnel] LIKE '%" + this->nom + "%' AND [personnel].[prenom_personnel] LIKE '%" + this->prenom + "%';";
};
System::String^ NS_Comp_Mappage::MappPersonnel::Inserer_donnees_personnel(void) {
	return "insert into [DonneBDD_Test10].[dbo].[personnel] (nom_personnel, prenom_personnel, date_embauche, titulaire, numero_tel_personnel, adresse_mail_personnel, naissance_personnel) VALUES ('" + this->nom + "', '" + this->prenom + "','" + this->dateEmbauche + "', '" + this->titulaire + "', '" + this->telephone + "', '" + this->mail + "', '" + this->naissance + "');";
}
System::String^ NS_Comp_Mappage::MappPersonnel::Inserer_donnees_adresse(void) {
	return "insert into [DonneBDD_Test10].[dbo].[adresse] (nom_voie, num_voie) VALUES('" + this->nomRue + "', '" + this->numeroRue + "');";
}
System::String^ NS_Comp_Mappage::MappPersonnel::Inserer_donnes_geographie(void) {
	return "insert into [DonneBDD_Test10].[dbo].[geographie] (ville, pays) VALUES ('" + this->ville + "', '" + this->pays + "');";
}

System::String^ NS_Comp_Mappage::MappPersonnel::Selectionner_id_personnel(void) {
	return "select [personnel].[id_personnel], nom_personnel, prenom_personnel from personnel where ( nom_personnel='" + this->nom + "' and prenom_personnel = '" + this->prenom + "' and numero_tel_personnel='" + this->telephone + "');";
}
System::String^ NS_Comp_Mappage::MappPersonnel::Selectionner_id_adresse(void) {
	return "select [adresse].[id_adresse], nom_voie, num_voie from adresse where (nom_voie = '" + this->nomRue + "' and  num_voie = '" + this->numeroRue + "');";
}
System::String^ NS_Comp_Mappage::MappPersonnel::Selectionner_id_geographie(void) {
	return "select [geographie].[id_geographie], ville, pays from geographie where (ville = '" + this->ville + "' and pays ='" + this->pays + "');";
}
