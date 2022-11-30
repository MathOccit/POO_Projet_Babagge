#pragma once

using namespace System;
namespace NS_Comp_Mappage
{
	public ref class MappStandard
	{
	public:
		virtual String^ Selectionne(void);
		virtual String^ Inserer(void);
		virtual String^ Suppr(void);
		virtual String^ Modifier(void);

	private:
		String^ sSql;
	};
}