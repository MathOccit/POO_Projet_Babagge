#pragma once 
#include "MappStock.h"
#include "ServiceStock.h"
#include "GCompAD.h"
#include "pch.h"


NS_Comp_Svc::ServiceStock::ServiceStock(void)
{
	this->oCad_Stock = gcnew NS_Comp_Data::CLcad();
	this->oMappStock = gcnew NS_Comp_Mappage::MappStock();
}



Data::DataSet^ NS_Comp_Svc::ServiceStock::SelectionnerTousLeStock(String^ dataTableName) {
	System::String^ sql;
	sql = this->oMappStock->Selectionner();
	return this->oCad_Stock->getRows(sql, dataTableName);
};


void NS_Comp_Svc::ServiceStock::AjouterUnStock(String^ nomArticle, String^ categorieArticle, String^ quantite, String^ prixArticleHT, String^ prixArticleTVA, String^ refArticle, String^ seuilReappro, String^ designationArticle)
{
	System::String^ sql;
	this->oMappStock->setNomArticle(nomArticle);
	this->oMappStock->setCategorieArticle(categorieArticle);
	this->oMappStock->setQuantite(quantite);
	this->oMappStock->setPrixArticleHT(prixArticleHT);
	this->oMappStock->setPrixArticleTVA(prixArticleTVA);
	this->oMappStock->setrefArticle(refArticle);
	this->oMappStock->setseuilReappro(seuilReappro);
	this->oMappStock->setdesignationArticle(designationArticle);
	sql = this->oMappStock->Ajouter();

	this->oCad_Stock->actionRows(sql);
}

void NS_Comp_Svc::ServiceStock::ModifierUnStock(String^ IDstock, String^ nomArticle, String^ categorieArticle, String^ quantite, String^ refArticle, String^ designationArticle, String^ Marge, String^ prixArticleHT, String^ prixArticleTVA, String^ seuilReappro) {
	System::String^ sql;
	this->oMappStock->setID(IDstock);
	this->oMappStock->setNomArticle(nomArticle);
	this->oMappStock->setCategorieArticle(categorieArticle);
	this->oMappStock->setQuantite(quantite);
	this->oMappStock->setPrixArticleHT(prixArticleHT);
	this->oMappStock->setPrixArticleTVA(prixArticleTVA);
	this->oMappStock->setrefArticle(refArticle);
	this->oMappStock->setseuilReappro(seuilReappro);
	this->oMappStock->setdesignationArticle(designationArticle);
	this->oMappStock->setMarge(Marge);
	sql = this->oMappStock->Modifier();

	this->oCad_Stock->actionRows(sql);
};
void NS_Comp_Svc::ServiceStock::AfficherUnStock(int ID) {
	throw gcnew System::NotImplementedException();
};

void NS_Comp_Svc::ServiceStock::SupprimerUnStock(String^ ID) 
{
	System::String^ sql;
	this->oMappStock->setID(ID);
	sql = this->oMappStock->Supprimer();

	this->oCad_Stock->actionRows(sql);
}
Data::DataSet^ NS_Comp_Svc::ServiceStock::Rechercher(String^ Recherche, String^ dataTableName)
{
	System::String^ sql;
	this->oMappStock->setNomArticle(Recherche);
	sql = this->oMappStock->Rechercher();
	return this->oCad_Stock->getRows(sql, dataTableName);
};