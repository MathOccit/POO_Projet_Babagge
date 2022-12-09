#pragma once

using namespace System;
namespace NS_Comp_Mappage
{
    ref class MappInfoPerso
    {
    public:
        String^ getNom(void);
        String^ getPrenom(void);
        String^ getNaissance(void);
        String^ getTelephone(void);
        String^ getMail(void);
        String^ getNumeroRue(void);
        String^ getNomRue(void);
        String^ getVille(void);
        String^ getPays(void);
        void setIDint(int^);
        void setIDstr(String^);
        void setIDCl(String^);
        void setIDAdd(String^);
        void setIDGeo(String^);
        void setNom(String^);
        void setPrenom(String^);
        void setNaissance(String^);
        void setTelephone(String^);
        void setMail(String^);
        void setNumeroRue(String^);
        void setNomRue(String^);
        void setVille(String^);
        void setPays(String^);
        String^ Selectionne(void);
        String^ Inserer(void);
        String^ Modifier(void);
        String^ Suppr(void);
        String^ Rechercher(void);
        String^ Count(void);
        String^ RechercherModif(void);
        String^ Inserer_donnees_perso(void);
        String^ Afficher_id_client(void);
        String^ Inserer_donnees_adresse(void);
        String^ Inserer_donnees_geographie(void);
        String^ Afficher_id_adresse(void);
        String^ Afficher_id_geographie(void);


    private:
        int^ IDint;
        String^ IDstr;
        String^ IDCl;
        String^ IDAdd;
        String^ IDGeo;
        String^ nom;
        String^ prenom;
        String^ naissance;
        String^ telephone;
        String^ mail;
        String^ numeroRue;
        String^ nomRue;
        String^ ville;
        String^ pays;
    };
}