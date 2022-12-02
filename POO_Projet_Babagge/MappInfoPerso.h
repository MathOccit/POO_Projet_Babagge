#pragma once

using namespace System;
namespace NS_Comp_Mappage
{
    ref class MappInfoPerso
    {
    public:
        int^ getID(void);
        String^ getNom(void);
        String^ getPrenom(void);
        String^ getNaissance(void);
        String^ getTelephone(void);
        String^ getMail(void);
        String^ getNumeroRue(void);
        String^ getNomRue(void);
        String^ getVille(void);
        String^ getPays(void);
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
        String^ Afficher(void);

    private:
        int^ ID;
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