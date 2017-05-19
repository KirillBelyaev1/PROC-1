#include "stdafx.h"
#include "Mas_One.h"
#include <fstream>
#include "def.h"

using namespace std;

namespace arrays 
{
	void ReadMasOne(masOne &masOne, ifstream &ifst)
	{
		ifst >> masOne.razmer;
		CheckRazmer(masOne.razmer);
		masOne.mas1 = new int[masOne.razmer];
		for (int i = 0; i < masOne.razmer; i++)
		{
			ifst >> masOne.mas1[i];
		}
	}
}