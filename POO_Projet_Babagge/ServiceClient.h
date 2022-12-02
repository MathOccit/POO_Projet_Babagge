#pragma once
#include "GCompAD.h"
#include "MappInfoPerso.h"

using namespace System;

namespace NS_Comp_Svc
{
    public ref class ServiceClient
    {
    private:

        NS_Comp_Data::CLcad^ oCad_Client;
        NS_Comp_Mappage::MappInfoPerso^ oMappInfoPerso;

    public:

        ServiceClient(void);

        Data::DataSet^ SelectionnerTousLesClients(String^);
        void AjouterUnClient(String^, String^, String^, String^, String^, String^, String^, String^, String^);
        void ModifierUnClient(String^, String^, String^, String^, String^, String^, String^, String^, String^);
        void AfficherUnClient(int^);
        void SupprimerUnClient(int^);
    };
}