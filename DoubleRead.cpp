#include "stdafx.h"
#include <fstream>
#include "Mas_Double.h"
#include "array.h"
#include "def.h"

using namespace std;

namespace arrays 
{	
	void ReadMasDouble(Mas_Double &Mas_Double, ifstream &ifst)
	{

		ifst >> Mas_Double.razmer;
		CheckRazmer(Mas_Double.razmer);
		CheckWrongInput(ifst);
		Mas_Double.mas2 = new int*[Mas_Double.razmer];
		for (int i = 0; i < Mas_Double.razmer; i++)
		{
			Mas_Double.mas2[i] = new int[Mas_Double.razmer];
		}

		for (int i = 0; i < Mas_Double.razmer; i++)
		{
			for (int j = 0; j < Mas_Double.razmer; j++)
			{
				ifst >> Mas_Double.mas2[i][j];
				CheckWrongInput(ifst);
			}
		}
	}
}