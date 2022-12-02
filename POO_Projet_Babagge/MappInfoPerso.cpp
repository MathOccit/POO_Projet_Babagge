#include "pch.h"


int^ NS_Comp_Mappage::MappInfoPerso::getID(void) {
	return this->ID;
}
System::String^ NS_Comp_Mappage::MappInfoPerso::getNom(void) {
	return this->nom;
}
System::String^ NS_Comp_Mappage::MappInfoPerso::getPrenom(void) {
	return this->prenom;
}
System::String^ NS_Comp_Mappage::MappInfoPerso::getNaissance(void) {
	return this->naissance;
}
System::String^ NS_Comp_Mappage::MappInfoPerso::getTelephone(void) {
	return this->telephone;
}
System::String^ NS_Comp_Mappage::MappInfoPerso::getMail(void) {
	return this->mail;
}
System::String^ NS_Comp_Mappage::MappInfoPerso::getNumeroRue(void) {
	return this->numeroRue;
}
System::String^ NS_Comp_Mappage::MappInfoPerso::getNomRue(void) {
	return this->nomRue;
}
System::String^ NS_Comp_Mappage::MappInfoPerso::getVille(void) {
	return this->ville;
}
System::String^ NS_Comp_Mappage::MappInfoPerso::getPays(void) {
	return this->pays;
}
void NS_Comp_Mappage::MappInfoPerso::setNom(System::String^ nom) {
	this->nom = nom;
}
void NS_Comp_Mappage::MappInfoPerso::setPrenom(System::String^ prenom) {
	this->prenom = prenom;
}
void NS_Comp_Mappage::MappInfoPerso::setNaissance(System::String^ naissance) {
	this->naissance = naissance;
}
void NS_Comp_Mappage::MappInfoPerso::setTelephone(System::String^ telephone) {
	this->telephone = telephone;
}
void NS_Comp_Mappage::MappInfoPerso::setMail(System::String^ mail) {
	this->mail = mail;
}
void NS_Comp_Mappage::MappInfoPerso::setNumeroRue(System::String^ numeroRue) {
	this->numeroRue = numeroRue;
}
void NS_Comp_Mappage::MappInfoPerso::setNomRue(System::String^ nomRue) {
	this->nomRue = nomRue;
}
void NS_Comp_Mappage::MappInfoPerso::setVille(System::String^ ville) {
	this->ville = ville;
}
void NS_Comp_Mappage::MappInfoPerso::setPays(System::String^ pays) {
	this->pays = pays;
}
System::String^ NS_Comp_Mappage::MappInfoPerso::Selectionne(void) {
	return "select nom_client, prenom_client, date_de_naissance, numero_tel_client, adresse_mail_client, nom_voie, num_voie, ville, pays from client inner join livrer on(client.id = livrer.id_client) inner join adresse on(livrer.id_adresse = adresse.id) inner join localiser on(adresse.id = localiser.id_adresse) inner join geographie on(localiser.id_geographie = geographie.id) select nom_client, prenom_client, date_de_naissance, numero_tel_client, adresse_mail_client, nom_voie, num_voie, ville, pays from client inner join resider on(client.id = resider.id_client) inner join adresse on(resider.id_adresse = adresse.id) inner join localiser on(adresse.id = localiser.id_adresse) inner join geographie on(localiser.id_geographie = geographie.id) select nom_client, prenom_client, date_de_naissance, numero_tel_client, adresse_mail_client, nom_voie, num_voie, ville, pays from client inner join facturer on(client.id = facturer.id_client) inner join adresse on(facturer.id_adresse = adresse.id) inner join localiser on(adresse.id = localiser.id_adresse) inner join geographie on(localiser.id_geographie = geographie.id) ";
}
System::String^ NS_Comp_Mappage::MappInfoPerso::Inserer(void) {
	return "insert into client (nom_client, prenom_client, date_de_naissance, numero_tel_client, adresse_mail_client) values ('" + this->nom + "','" + this->prenom + "','" + this->naissance + "','" + this->telephone + "','" + this->mail + "'" "insert into adresse (nom_voie, num_voie) values('" + this->nomRue + "','" + this->numeroRue + "'" "insert into geographie (ville, pays) values ('" + this->ville + "','" + this->pays + "')))";
}
System::String^ NS_Comp_Mappage::MappInfoPerso::Modifier(void) {
	return "update client SET nom_client '" + this->nom + "', prenom_client '" + this->prenom + "', date_de_naissance '" + this->naissance + "', numero_tel_client '" + this->telephone + "', adresse_mail_client '" + this->mail + "' update adresse SET num_voie '" + this->numeroRue + "', nom_voie '" + this->nomRue + "' update geographie SET ville '" + this->ville + "', pays'" + this->pays + "', WHERE(id_personne = '" + this->getID() + ");";
}
System::String^ NS_Comp_Mappage::MappInfoPerso::Suppr(void) {
	return "delete client nom_client, prenom_client, date_de_naissance, numero_tel_client, adresse_mail_client, delete adresse nom_voie, num_voie, WHERE(id_personne = '" + this->getID() + ");";
}
System::String^ NS_Comp_Mappage::MappInfoPerso::Afficher(void) {
	return "select nom_client, prenom_client, date_de_naissance, numero_tel_client, adresse_mail_client, nom_voie, num_voie, ville, pays from client inner join livrer on(client.id = livrer.id_client) inner join adresse on(livrer.id_adresse = adresse.id) inner join localiser on(adresse.id = localiser.id_adresse) inner join geographie on(localiser.id_geographie = geographie.id) select nom_client, prenom_client, date_de_naissance, numero_tel_client, adresse_mail_client, nom_voie, num_voie, ville, pays from client inner join resider on(client.id = resider.id_client) inner join adresse on(resider.id_adresse = adresse.id) inner join localiser on(adresse.id = localiser.id_adresse) inner join geographie on(localiser.id_geographie = geographie.id) select nom_client, prenom_client, date_de_naissance, numero_tel_client, adresse_mail_client, nom_voie, num_voie, ville, pays from client inner join facturer on(client.id = facturer.id_client) inner join adresse on(facturer.id_adresse = adresse.id) inner join localiser on(adresse.id = localiser.id_adresse) inner join geographie on(localiser.id_geographie = geographie.id), WHERE(id_personne = '" + this->getID() + "); ";
}
