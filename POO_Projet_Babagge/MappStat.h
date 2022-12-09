#pragma once
namespace NS_Comp_Mappage
{
    ref class MappStat
    {
    public:

        System::String^ PanierMoyen(void);
        System::String^ SlectMois(void);
        System::String^ AchatClient(void);
        System::String^ ArticleSousSeuil(void);
        System::String^ SelectDixPlusVendu(void);
        System::String^ SelectDixMoinsVendu(void);
        System::String^ CalculerValCom(void);
        System::String^ CalculerValAchat(void);
        System::String^ MainStat(void);

        String^ calcul(System::String^ choixTVA, System::String^ choixmC, System::String^ choixrC, System::String^ choixdI);
        int^ TVA1;
        int^ TVA2;
        int^ TVA3;
        int^ mC5;
        int^ mC10;
        int^ mC15;
        int^ rC5;
        int^ rC6;
        int^ dI2;
        int^ dI3;
        int^ dI5;
        System::String^ choixTVA;
        System::String^ choixmC;
        System::String^ choixrC;
        System::String^ choixdI;
        

        int^ getTVA1(void);
        int^ getTVA2(void);
        int^ getTVA3(void);
        int^ getmC5(void);
        int^ getmC10(void);
        int^ getmC15(void);
        int^ getrC5(void);
        int^ getrC6(void);
        int^ getdI2(void);
        int^ getdI3(void);
        int^ getdI5(void);



        void setTVA1(int^);
        void setTVA2(int^);
        void setTVA3(int^);
        void setmC5(int^);
        void setmC10(int^);
        void setmC15(int^);
        void setrC5(int^);
        void setrC6(int^);
        void setdI2(int^);
        void setdI3(int^);
        void setdI5(int^);
        void setNomClient(String^);

    private:
        System::String^ mois;
        System::String^ articles;
        String^ Nom_Client;

    };
}