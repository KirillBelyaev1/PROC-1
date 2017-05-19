#include "stdafx.h"
#include <fstream>
#include "Mas_Double.h"
#include "array.h"
#include "def.h"

using namespace std;

namespace arrays 
{	
	void ReadMasDouble(masDouble &masDouble, ifstream &ifst)
	{
		ifst >> masDouble.razmer;
		CheckRazmer(masDouble.razmer);
		CheckWrongInput(ifst);
		masDouble.mas2 = new int*[masDouble.razmer];
		for (int i = 0; i < masDouble.razmer; i++)
		{
			masDouble.mas2[i] = new int[masDouble.razmer];
		}

		for (int i = 0; i < masDouble.razmer; i++)
		{
			for (int j = 0; j < masDouble.razmer; j++)
			{
				ifst >> masDouble.mas2[i][j];
				CheckWrongInput(ifst);
			}
		}
	}
}