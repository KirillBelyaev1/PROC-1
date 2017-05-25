#include "stdafx.h"
#include "triangle.h"
#include <fstream>
#include "def.h"

using namespace std;

namespace arrays
{
	void OutMasTriangle(Mas_Triangle &Mas_Triangle, ofstream &ofst)
	{
		CheckOutputFile(ofst);
		ofst << "It is Triangle Matrix: razmernost = " << Mas_Triangle.razmer << endl;
		ofst << "Matrix : " << endl;

		for (int i = 0; i < Mas_Triangle.razmer; i++)
		{
			for (int j = 0; j < Mas_Triangle.razmer; j++)
			{
				if (i >= j)
					ofst << Mas_Triangle.mas3[i][j] << "\t";
			}
			ofst << endl;
		}
	}
}