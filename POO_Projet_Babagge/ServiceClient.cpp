#include "pch.h"

using namespace System;

NS_Comp_Svc::ServiceClient::ServiceClient(void) {
    this->oCad_Client = gcnew NS_Comp_Data::CLcad();
    this->oMappInfoPerso = gcnew NS_Comp_Mappage::MappInfoPerso();
}

Data::DataSet^ NS_Comp_Svc::ServiceClient::SelectionnerTousLesClients(String^ dataTableClient)
{
    String^ sql;
    sql = this->oMappInfoPerso->Selectionne();
    return this->oCad_Client->getRows(sql, dataTableClient);
}

void NS_Comp_Svc::ServiceClient::AjouterUnClient(String^ nom, String^ prenom, String^ naissance, String^ telephone, String^ mail, String^ numeroRue, String^ nomRue, String^ ville, String^ pays) {
    String^ sql;
    this->oMappInfoPerso->setNom(nom);
    this->oMappInfoPerso->setPrenom(prenom);
    this->oMappInfoPerso->setNaissance(naissance);
    this->oMappInfoPerso->setTelephone(telephone);
    this->oMappInfoPerso->setMail(mail);
    this->oMappInfoPerso->setNumeroRue(numeroRue);
    this->oMappInfoPerso->setNomRue(nomRue);
    this->oMappInfoPerso->setVille(ville);
    this->oMappInfoPerso->setPays(pays);
    sql = this->oMappInfoPerso->Inserer();
    return this->oCad_Client->actionRows(sql);
}

void NS_Comp_Svc::ServiceClient::AfficherUnClient(int^ ID) {
    String^ sql;
    sql = this->oMappInfoPerso->Afficher();
    return this->oCad_Client->actionRows(sql);
}
void NS_Comp_Svc::ServiceClient::ModifierUnClient(String^ nom, String^ prenom, String^ naissance, String^ telephone, String^ mail, String^ numeroRue, String^ nomRue, String^ ville, String^ pays) {
    String^ sql;
    sql = this->oMappInfoPerso->Afficher();
    return this->oCad_Client->actionRows(sql);
    this->oMappInfoPerso->setNom(nom);
    this->oMappInfoPerso->setPrenom(prenom);
    this->oMappInfoPerso->setNaissance(naissance);
    this->oMappInfoPerso->setTelephone(telephone);
    this->oMappInfoPerso->setMail(mail);
    this->oMappInfoPerso->setNumeroRue(numeroRue);
    this->oMappInfoPerso->setNomRue(nomRue);
    this->oMappInfoPerso->setVille(ville);
    this->oMappInfoPerso->setPays(pays);
    sql = this->oMappInfoPerso->Modifier();
    return this->oCad_Client->actionRows(sql);
}

void NS_Comp_Svc::ServiceClient::SupprimerUnClient(int^ ID) {
    String^ sql;
    sql = this->oMappInfoPerso->Suppr();
    return this->oCad_Client->actionRows(sql);
}