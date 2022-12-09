#include "pch.h"
#include "GCompAD.h"

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

    sql = this->oMappInfoPerso->Inserer_donnees_perso();
    this->oCad_Client->actionRows(sql);


    int^ id_client;

    System::Data::DataSet^ oDs_client;
    oDs_client = this->oCad_Client->getRows(this->oMappInfoPerso->Afficher_id_client(), "client");
    id_client = System::Convert::ToInt32(oDs_client->Tables["client"]->Rows[0]["id_client"]->ToString());
    this->oMappInfoPerso->setIDint(id_client);

    sql = this->oMappInfoPerso->Inserer_donnees_adresse();
    this->oCad_Client->actionRows(sql);


    int^ id_adresse;
    System::Data::DataSet^ oDs_adresse;
    oDs_adresse = this->oCad_Client->getRows(this->oMappInfoPerso->Afficher_id_adresse(), "adresse");
    id_adresse = System::Convert::ToInt32(oDs_adresse->Tables["adresse"]->Rows[0]["id_adresse"]->ToString());
    this->oMappInfoPerso->setIDint(id_adresse);

    sql = this->oMappInfoPerso->Inserer_donnees_geographie();
    this->oCad_Client->actionRows(sql);


    int^ id_geographie;
    System::Data::DataSet^ oDs_geographie;
    oDs_geographie = this->oCad_Client->getRows(this->oMappInfoPerso->Afficher_id_geographie(), "geographie");
    id_geographie = System::Convert::ToInt32(oDs_geographie->Tables["geographie"]->Rows[0]["id_geographie"]->ToString());
    this->oMappInfoPerso->setIDint(id_geographie);
    sql = "insert into [DonneBDD_Test10].[dbo].[resider](id_adresse, id_client) values ('" + id_adresse + "','" + id_client + "');";
    this->oCad_Client->actionRows(sql);


    sql = "insert into [DonneBDD_Test10].[dbo].[localiser](id_adresse, id_geographie) values('" + id_adresse + "','" + id_geographie + "');";
    this->oCad_Client->actionRows(sql);

}

void NS_Comp_Svc::ServiceClient::ModifierUnClient(String^ IDCl, String^ IDAdd, String^ IDGeo, String^ nom, String^ prenom, String^ naissance, String^ telephone, String^ mail, String^ numeroRue, String^ nomRue, String^ ville, String^ pays) {
    String^ sql;
  
    this->oMappInfoPerso->setIDCl(IDCl);
    this->oMappInfoPerso->setIDAdd(IDAdd);
    this->oMappInfoPerso->setIDGeo(IDGeo);
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

void NS_Comp_Svc::ServiceClient::SupprimerUnClient(String^ ID) {
    String^ sql;
    this->oMappInfoPerso->setIDstr(ID);
    sql = this->oMappInfoPerso->Suppr();
    return this->oCad_Client->actionRows(sql);
}

Data::DataSet^ NS_Comp_Svc::ServiceClient::Rechercher(String^ RechercheN, String^ RechercheP, String^ dataTableName)
{
    System::String^ sql;
    this->oMappInfoPerso->setNom(RechercheN);
    this->oMappInfoPerso->setPrenom(RechercheP);
    sql = this->oMappInfoPerso->Rechercher();
    return this->oCad_Client->getRows(sql, dataTableName);
}

Data::DataSet^ NS_Comp_Svc::ServiceClient::RechercherModif(String^ RechercheN, String^ RechercheP, String^ dataTableName)
{
    System::String^ sql;
    this->oMappInfoPerso->setNom(RechercheN);
    this->oMappInfoPerso->setPrenom(RechercheP);
    sql = this->oMappInfoPerso->RechercherModif();
    return this->oCad_Client->getRows(sql, dataTableName);
}

void NS_Comp_Svc::ServiceClient::Count(void)
{
    System::String^ sql;
    this->oMappInfoPerso->Count();
    return this->oCad_Client->actionRows(sql);
}
;