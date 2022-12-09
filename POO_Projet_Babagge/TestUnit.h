#pragma once

using namespace System;
namespace NS_Comp_Test {
    ref class Test
    {
    private:
        NS_Comp_Data::CLcad^ oCad_Test;
        int^ ID;

    public:


        Test();

        String^ Selectionner_id_personnel(void);
        String^ Selectionner_id_adresse(void);
        String^ Selectionner_id_geographie(void);

        String^ Inserer_donnees_personnel(void);
        String^ Inserer_donnees_adresse(void);
        String^ Inserer_donnes_geographie(void);

        String^ AjouterUnPersonnel();

        void setID(int^);
    };
}