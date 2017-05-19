#include "stdafx.h"
#include "triangle.h"
#include <fstream>
#include "def.h"

using namespace std;

namespace arrays
{
	void OutMasTriangle(mas_triangle &mas_triangle, ofstream &ofst)
	{
		CheckOutputFile(ofst);
		ofst << "It is Triangle Matrix: razmernost = " << mas_triangle.razmer << endl;
		ofst << "Matrix : " << endl;

		for (int i = 0; i < mas_triangle.razmer; i++)
		{
			for (int j = 0; j < mas_triangle.razmer; j++)
			{
				if (i >= j)
					ofst << mas_triangle.mas3[i][j] << "\t";
			}
			ofst << endl;
		}
	}
}