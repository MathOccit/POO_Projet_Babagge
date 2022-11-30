#include "pch.h"
#include "ServiceCommandes.h"


NS_Comp_Svc::ServiceCommandes::ServiceCommandes(void)
{
	this->oCad_Command = gcnew NS_Comp_Data::CLcad();
	this->oMappCommand = gcnew NS_Comp_Mappage::MappCommande();
}

Data::DataSet^ NS_Comp_Svc::ServiceCommandes::SelectionnerToutesLesCommand(String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappCommand->Select();
	return this->oCad_Command->getRows(sql, dataTableName);
}

void NS_Comp_Svc::ServiceCommandes::AjouterUneCommand(String^ DateLivraison, String^ DateEmission, int^ QuantiteArticle)
{
	System::String^ sql;

	this->oMappCommand->setDateLivraison(DateLivraison);
	this->oMappCommand->setDateEmission(DateEmission);
	this->oMappCommand->setQuantiteArticles(QuantiteArticle);
	sql = this->oMappCommand->Inserer();

	this->oCad_Command->actionRows(sql);
}

void NS_Comp_Svc::ServiceCommandes::ModifierUneCommand(String^ DateLivraison, String^ DateEmission, int QuantiteArticle)
{
	System::String^ sql;

	this->oMappCommand->setDateLivraison(DateLivraison);
	this->oMappCommand->setDateEmission(DateEmission);
	this->oMappCommand->setQuantiteArticles(QuantiteArticle);
	sql = this->oMappCommand->Modifier();

	this->oCad_Command->actionRows(sql);
}

void NS_Comp_Svc::ServiceCommandes::AfficherUneCommand(int)
{
	throw gcnew System::NotImplementedException();
}

void NS_Comp_Svc::ServiceCommandes::SupprimerUneCommand(int)
{
	throw gcnew System::NotImplementedException();
}
