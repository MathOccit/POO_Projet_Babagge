#include "pch.h"
#include "MappStock.h"



String^ NS_Comp_Mappage::MappStock::getID() {
	return this->ID;
}
System::String^ NS_Comp_Mappage::MappStock::getNomArticle() {
	return this->nomArticle;
}
System::String^ NS_Comp_Mappage::MappStock::getCategorieArticle() {
	return this->categorieArticle;
}
String^ NS_Comp_Mappage::MappStock::getQuantite() {
	return this->quantite;
}
String^ NS_Comp_Mappage::MappStock::getPrixArticleHT() {
	return this->prixArticleHT;
}
String^ NS_Comp_Mappage::MappStock::getPrixArticleTVA() {
	return this->prixArticleTVA;
}
String^ NS_Comp_Mappage::MappStock::getrefArticle() {
	return this->refArticle;
}
String^ NS_Comp_Mappage::MappStock::getseuilReappro() {
	return this->seuilReappro;
}
System::String^ NS_Comp_Mappage::MappStock::getdesignationArticle() {
	return this->designationArticle;
}


void NS_Comp_Mappage::MappStock::setNomArticle(String^ nomArticle) {
	this->nomArticle = nomArticle;
}
void NS_Comp_Mappage::MappStock::setCategorieArticle(String^ categorieArticle) {
	this->categorieArticle = categorieArticle;
}
void NS_Comp_Mappage::MappStock::setQuantite(String^ quantite) {
	this->quantite = quantite;
}
void NS_Comp_Mappage::MappStock::setPrixArticleHT(String^ prixArticleHT) {
	this->prixArticleHT = prixArticleHT;
}
void NS_Comp_Mappage::MappStock::setMarge(String^ Marge) {
	this->Marge = Marge;
}
void NS_Comp_Mappage::MappStock::setPrixArticleTVA(String^ prixArticleTVA) {
	this->prixArticleTVA = prixArticleTVA;
}
void NS_Comp_Mappage::MappStock::setrefArticle(String^ refArticle) {
	this->refArticle = refArticle;
}
void NS_Comp_Mappage::MappStock::setseuilReappro(String^ seuilReappro) {
	this->seuilReappro = seuilReappro;
}
void NS_Comp_Mappage::MappStock::setdesignationArticle(String^ designationArticle) {
	this->designationArticle = designationArticle;
}
void NS_Comp_Mappage::MappStock::setID(String^ ID) {
	this->ID = ID;
}


String^ NS_Comp_Mappage::MappStock::Ajouter() {
	return"INSERT INTO [DonneBDD_Test10].[dbo].[stock] (nom_article, categorie_article, quantite, prix_article_ht, prix_article_tva, ref_article, seuil_reappro, designation_article) VALUES ('" + this->nomArticle + "','" + this->categorieArticle + "','" + this->quantite + "','" + this->prixArticleHT + "','" + this->prixArticleTVA + "','" + this->refArticle + "','" + this->seuilReappro + "','" + this->designationArticle + "');";
}
String^ NS_Comp_Mappage::MappStock::Selectionner() {
	return"SELECT * FROM [DonneBDD_Test10].[dbo].[stock] ";
}
String^ NS_Comp_Mappage::MappStock::Modifier() {

	return "UPDATE [DonneBDD_Test10].[dbo].[stock] SET [stock].[nom_article] = '" + this->nomArticle + " ', [stock].[categorie_article] = ' " + this->categorieArticle + " ', [stock].[quantite] = '" + this->quantite + " ', [stock].[prix_article_ht] =  " + this->prixArticleHT + ", [stock].[prix_article_tva] =" + this->prixArticleTVA + ", [stock].[marge] =" + this->Marge + ", [stock].[ref_article] ='" + this->refArticle + "', [stock].[designation_article] ='" + this->designationArticle + "', [stock].[seuil_reappro] ='" + this->seuilReappro + "' WHERE [stock].[id_stock] = '" + this->ID + "';";
}

String^ NS_Comp_Mappage::MappStock::Supprimer() {
	return "DELETE FROM [DonneBDD_Test10].[dbo].[stocker] WHERE [stocker].[id_stock] = '" + this->ID + "'; DELETE FROM [DonneBDD_Test10].[dbo].[stock] WHERE [stock].[id_stock] = '" + this->ID + "';";
}

String^ NS_Comp_Mappage::MappStock::Rechercher() {
	return "SELECT * FROM [DonneBDD_Test10].[dbo].[stock] WHERE [stock].[nom_article] LIKE '%" + this->nomArticle + "%';";
}
