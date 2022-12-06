#include "pch.h"


System::String^ NS_Comp_Mappage::MappInfoPerso::getNom(void) 
{
	return this->nom;
}

System::String^ NS_Comp_Mappage::MappInfoPerso::getPrenom(void) 
{
	return this->prenom;
}

System::String^ NS_Comp_Mappage::MappInfoPerso::getNaissance(void) 
{
	return this->naissance;
}

System::String^ NS_Comp_Mappage::MappInfoPerso::getTelephone(void) 
{
	return this->telephone;
}

System::String^ NS_Comp_Mappage::MappInfoPerso::getMail(void) 
{
	return this->mail;
}

System::String^ NS_Comp_Mappage::MappInfoPerso::getNumeroRue(void) 
{
	return this->numeroRue;
}

System::String^ NS_Comp_Mappage::MappInfoPerso::getNomRue(void) 
{
	return this->nomRue;
}

System::String^ NS_Comp_Mappage::MappInfoPerso::getVille(void) 
{
	return this->ville;
}

System::String^ NS_Comp_Mappage::MappInfoPerso::getPays(void) 
{
	return this->pays;
}


void NS_Comp_Mappage::MappInfoPerso::setIDint(int^ ID)
{
	this->IDint = ID;
}
void NS_Comp_Mappage::MappInfoPerso::setIDstr(String^ ID)
{
	this->IDstr = ID;
}

void NS_Comp_Mappage::MappInfoPerso::setNom(System::String^ nom) 
{
	this->nom = nom;
}

void NS_Comp_Mappage::MappInfoPerso::setPrenom(System::String^ prenom) 
{
	this->prenom = prenom;
}

void NS_Comp_Mappage::MappInfoPerso::setNaissance(System::String^ naissance) 
{
	this->naissance = naissance;
}

void NS_Comp_Mappage::MappInfoPerso::setTelephone(System::String^ telephone) 
{
	this->telephone = telephone;
}

void NS_Comp_Mappage::MappInfoPerso::setMail(System::String^ mail) 
{
	this->mail = mail;
}

void NS_Comp_Mappage::MappInfoPerso::setNumeroRue(System::String^ numeroRue) 
{
	this->numeroRue = numeroRue;
}

void NS_Comp_Mappage::MappInfoPerso::setNomRue(System::String^ nomRue) 
{
	this->nomRue = nomRue;
}

void NS_Comp_Mappage::MappInfoPerso::setVille(System::String^ ville) 
{
	this->ville = ville;
}

void NS_Comp_Mappage::MappInfoPerso::setPays(System::String^ pays) 
{
	this->pays = pays;
}


System::String^ NS_Comp_Mappage::MappInfoPerso::Selectionne(void) 
{
	return "select client.id_client, nom_client, prenom_client, date_de_naissance, numero_tel_client, adresse_mail_client, nom_voie, num_voie, ville, pays from client inner join resider on(client.id_client = resider.id_client) inner join adresse on(resider.id_adresse = adresse.id_adresse) inner join localiser on(adresse.id_adresse = localiser.id_adresse) inner join geographie on(localiser.id_geographie = geographie.id_geographie) order by client.id_client";
}

System::String^ NS_Comp_Mappage::MappInfoPerso::Inserer(void) 
{
	return "insert into client (nom_client, prenom_client, date_de_naissance, numero_tel_client, adresse_mail_client) values ('" + this->nom + "','" + this->prenom + "','" + this->naissance + "','" + this->telephone + "','" + this->mail + "'" "insert into adresse (nom_voie, num_voie) values('" + this->nomRue + "','" + this->numeroRue + "'" "insert into geographie (ville, pays) values ('" + this->ville + "','" + this->pays + "')))";
}

System::String^ NS_Comp_Mappage::MappInfoPerso::Modifier(void) 
{
	return "update client SET nom_client '" + this->nom + "', prenom_client '" + this->prenom + "', date_de_naissance '" + this->naissance + "', numero_tel_client '" + this->telephone + "', adresse_mail_client '" + this->mail + "' update adresse SET num_voie '" + this->numeroRue + "', nom_voie '" + this->nomRue + "' update geographie SET ville '" + this->ville + "', pays'" + this->pays + "', WHERE(id_personne = '" + this->IDstr + ");";
}

System::String^ NS_Comp_Mappage::MappInfoPerso::Suppr(void) 
{
	return "DELETE FROM [DonneBDD_Test10].[dbo].[resider] WHERE [resider].[id_client] = '" + this->IDstr + "'; DELETE FROM [DonneBDD_Test10].[dbo].[livrer] WHERE [livrer].[id_client] = '" + this->IDstr + "'; DELETE FROM [DonneBDD_Test10].[dbo].[facturer] WHERE [facturer].[id_client] = '" + this->IDstr + "'; DELETE FROM [DonneBDD_Test10].[dbo].[commander] WHERE [commander].[id_client] = '" + this->IDstr + "'; DELETE FROM [DonneBDD_Test10].[dbo].[client] WHERE [client].[id_client] = '" + this->IDstr + "';";
}

System::String^ NS_Comp_Mappage::MappInfoPerso::Rechercher(void)
{
	return "SELECT * FROM [DonneBDD_Test10].[dbo].[client] WHERE [client].[nom_client] LIKE '%" + this->nom + "%' AND [client].[prenom_client] LIKE '%" + this->prenom + "%'; ";
}

String^ NS_Comp_Mappage::MappInfoPerso::Count(void)
{
	return "SELECT COUNT (*) FROM [DonneBDD_Test10].[dbo].[client] as Nombre";
}

System::String^ NS_Comp_Mappage::MappInfoPerso::RechercherModif(void)
{
	return "SELECT [client].[id_client], [adresse].[id_adresse], [geographie].[id_geographie], [client].[nom_client], [client].[prenom_client], [client].[date_de_naissance], [client].[numero_tel_client], [client].[adresse_mail_client], [adresse].[num_voie], [adresse].[nom_voie], [geographie].[ville], [geographie].[pays] FROM [DonneBDD_Test10].[dbo].[client] inner join [resider] on [client].[id_client] = [resider].[id_client] inner join [adresse] on [resider].[id_adresse] = [adresse].[id_adresse] inner join [localiser] on [adresse].[id_adresse] = [localiser].[id_adresse] inner join [geographie] on [localiser].[id_geographie] = [geographie].[id_geographie] WHERE [client].[nom_client] LIKE '%" + this->nom + "%' AND [client].[prenom_client] LIKE '%" + this->prenom + "%'; ";
}
System::String^ NS_Comp_Mappage::MappInfoPerso::Afficher_id_client(void) {
	return "select client.id_client,nom_client, prenom_client, date_de_naissance, numero_tel_client, adresse_mail_client  from client  WHERE (client.nom_client = '" + this->nom + "' and client.prenom_client='" + this->prenom + "' and client.numero_tel_client='" + this->telephone + "' );";;
}

System::String^ NS_Comp_Mappage::MappInfoPerso::Afficher_id_adresse(void) {
	return "select adresse.id_adresse, nom_voie, num_voie from adresse where (nom_voie = '" + this->nomRue + "' and num_voie = '" + this->numeroRue + "');";
}

System::String^ NS_Comp_Mappage::MappInfoPerso::Afficher_id_geographie(void) {
	return "select geographie.id_geographie, ville, pays from geographie where (ville = '" + this->ville + "' and pays ='" + this->pays + "');";
}
System::String^ NS_Comp_Mappage::MappInfoPerso::Inserer_donnees_perso(void) {
	return "insert into client (nom_client, prenom_client, date_de_naissance, numero_tel_client, adresse_mail_client) values ('" + this->nom + "', '" + this->prenom + "', '" + this->naissance + "', '" + this->telephone + "', '" + this->mail + "');";
}

System::String^ NS_Comp_Mappage::MappInfoPerso::Inserer_donnees_adresse(void)
{
	return "insert into adresse(nom_voie, num_voie) values('" + this->nomRue + "', '" + this->numeroRue + "');";
}

System::String^ NS_Comp_Mappage::MappInfoPerso::Inserer_donnees_geographie(void) {
	return "insert into geographie(ville, pays) values('" + this->ville + "', '" + this->pays + "');";
}