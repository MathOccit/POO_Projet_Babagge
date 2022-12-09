#include "pch.h"
#include "MappStat.h"


System::String^ NS_Comp_Mappage::MappStat::PanierMoyen(void) {

	System::String^ sql;
	return "SELECT SUM(prix_commande)/COUNT(prix_commande) as panier_moyen from commande";
}
System::String^ NS_Comp_Mappage::MappStat::SlectMois(void) {

	System::String^ sql;
	return "select round(SUM (prix_commande),2) as Chiffre_Affaire_Au_Mois from commande where ('2022 - 12 - 01' <= date_emission_commande and date_emission_commande < '2023 - 01 - 01')";
}
System::String^ NS_Comp_Mappage::MappStat::AchatClient(void) {
	System::String^ sql;

	return "select nom_client  ,round(prix_commande,2)   from commande inner join commander ON commande.id_commande = commander.id_commande	inner join client ON commander.id_commande = client.id_client where(nom_client = '"+ this->Nom_Client+"')";

}
System::String^ NS_Comp_Mappage::MappStat::ArticleSousSeuil(void) {

	System::String^ sql;

	return "select * from stock where quantite < seuil_reappro";
}
System::String^ NS_Comp_Mappage::MappStat::SelectDixPlusVendu(void) {
	System::String^ sql;

	return "select top(10) nom_article from commande inner join stocker on commande.id_commande = stocker.id_commande inner join stock on stocker.id_stock = stock.id_stock group by nom_article";

}
System::String^ NS_Comp_Mappage::MappStat::SelectDixMoinsVendu(void) {
	System::String^ sql;

	return "select top(10) nom_article from commande inner join stocker on commande.id_commande = stocker.id_commande inner join stock on stocker.id_stock = stock.id_stock group by nom_article order by nom_article desc";

}
System::String^ NS_Comp_Mappage::MappStat::CalculerValCom(void) {
	System::String^ sql;

	return "select round(sum(prix_article_ht*quantite),2) as valeur_commerciale from stock";
}
System::String^ NS_Comp_Mappage::MappStat::CalculerValAchat(void) {
	System::String^ sql;

	return "select round(sum((prix_article_ht+prix_article_tva+marge)*quantite),2) as valeur_achat from stock";
}

String^ NS_Comp_Mappage::MappStat::calcul(System::String^ choixTVA, System::String^ choixmC, System::String^ choixrC, System::String^ choixdI) {

	System::String^ sql;

	return "SELECT(SUM(prix_article_ht * quantite) *" + this->choixTVA + " *" + this->choixmC + " *" + this->choixrC + " *" + this->choixdI + ") from stock;";
}


//get
int^ NS_Comp_Mappage::MappStat::getTVA1() {
	return this->TVA1;
}

int^ NS_Comp_Mappage::MappStat::getTVA2() {
	return this->TVA2;
}
int^ NS_Comp_Mappage::MappStat::getTVA3() {
	return this->TVA3;
}
int^ NS_Comp_Mappage::MappStat::getmC5() {
	return this->mC5;
}
int^ NS_Comp_Mappage::MappStat::getmC10() {
	return this->mC10;
}
int^ NS_Comp_Mappage::MappStat::getmC15() {
	return this->mC15;
}
int^ NS_Comp_Mappage::MappStat::getrC5() {
	return this->rC5;
}
int^ NS_Comp_Mappage::MappStat::getrC6() {
	return this->rC6;
}
int^ NS_Comp_Mappage::MappStat::getdI2() {
	return this->dI2;
}
int^ NS_Comp_Mappage::MappStat::getdI3() {
	return this->dI3;
}
int^ NS_Comp_Mappage::MappStat::getdI5() {
	return this->dI5;
}


//set


void NS_Comp_Mappage::MappStat::setTVA1(int^ TVA1) {
	this->TVA1 = TVA1;
}
void NS_Comp_Mappage::MappStat::setTVA2(int^ TVA2) {
	this->TVA2 = TVA2;
}
void NS_Comp_Mappage::MappStat::setTVA3(int^ TVA3) {
	this->TVA3 = TVA3;
}
void NS_Comp_Mappage::MappStat::setmC5(int^ mC5) {
	this->mC5 = mC5;
}
void NS_Comp_Mappage::MappStat::setmC10(int^ mC10) {
	this->mC10 = mC10;
}
void NS_Comp_Mappage::MappStat::setmC15(int^ mC15) {
	this->mC15 = mC15;
}
void NS_Comp_Mappage::MappStat::setrC5(int^ rC5) {
	this->rC5 = rC5;
}
void NS_Comp_Mappage::MappStat::setrC6(int^ rC6) {
	this->rC6 = rC6;
}
void NS_Comp_Mappage::MappStat::setdI2(int^ dI2) {
	this->dI2 = dI2;
}
void NS_Comp_Mappage::MappStat::setdI3(int^ dI3) {
	this->dI3 = dI3;
}
void NS_Comp_Mappage::MappStat::setdI5(int^ dI5) {
	this->dI5 = dI5;
}

void NS_Comp_Mappage::MappStat::setNomClient(String^ Nom_Client)
{
	this->Nom_Client =Nom_Client;
}


System::String^ NS_Comp_Mappage::MappStat::MainStat() {
	return PanierMoyen();
	return SlectMois();
	return AchatClient();
	return ArticleSousSeuil();
	return SelectDixPlusVendu();
	return SelectDixMoinsVendu();
	return CalculerValCom();
	return CalculerValAchat();

}