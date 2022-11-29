#pragma once
#include "CompAD.h"
#include "MappStock.h"

using namespace System;

namespace NS_Comp_Svc
{
	public ref class ServiceStock
	{
	private:
		NS_Comp_Data::CLcad oCad_Stock;
		NS_Comp_Mappage::MappStock oMappStock;

	public:
		ServiceStock(void);

		Data::DataSet^ SelectionnerTousLeStock(String^);
		void AjouterUnStock(String^, String^, int^, double^, String^);
		void ModifierUnStock(String^, String^, int^, double^, String^);
		void AfficherUnStock(int);
		void SupprimerUnStock(int);
	};
}