#include "stdafx.h"
#include "triangle.h"
#include <fstream>

using namespace std;

namespace arrays
{
	void OutMasTriangle(mas_triangle &mas_triangle, ofstream &ofst)
	{

		ofst << "It is Triangle Matrix: razmernost = " << mas_triangle.razmer3 << endl;
		ofst << "Matrix : " << endl;

		for (int i = 0; i < mas_triangle.razmer3; i++)
		{
			for (int j = 0; j < mas_triangle.razmer3; j++)
			{
				if (i >= j)
					ofst << mas_triangle.mas3[i][j] << "\t";
			}
			ofst << endl;
		}
	}
}