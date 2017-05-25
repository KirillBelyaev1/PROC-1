#include "stdafx.h"
#include "Mas_One.h"
#include <fstream>
#include "def.h"

using namespace std;

namespace arrays 
{
	void ReadMasOne(Mas_One &Mas_One, ifstream &ifst)
	{
		ifst >> Mas_One.razmer;
		CheckRazmer(Mas_One.razmer);

		Mas_One.mas1 = new int[Mas_One.razmer];
		for (int i = 0; i < Mas_One.razmer; i++)
		{
			ifst >> Mas_One.mas1[i];
		}
	}
}