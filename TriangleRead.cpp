#include "stdafx.h"
#include "triangle.h"
#include <fstream>
#include "def.h"

using namespace std;

namespace arrays
{
	void ReadMasTriangle(Mas_Triangle &Mas_Triangle, ifstream &ifst)
	{
		ifst >> Mas_Triangle.razmer;
		CheckRazmer(Mas_Triangle.razmer);
		CheckWrongInput(ifst);
		Mas_Triangle.mas3 = new int*[Mas_Triangle.razmer];

		for (int i = 0; i < Mas_Triangle.razmer; i++)
		{
			Mas_Triangle.mas3[i] = new int[Mas_Triangle.razmer];
		}
		for (int i = 0; i < Mas_Triangle.razmer; i++)
		{
			for (int j = 0; j < Mas_Triangle.razmer; j++)
			{
				if (i >= j)
				{
					ifst >> Mas_Triangle.mas3[i][j];
					CheckWrongInput(ifst);
				}
			}
		}
	}
}
	