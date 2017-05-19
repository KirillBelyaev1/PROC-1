#include "stdafx.h"
#include "triangle.h"
#include <fstream>
#include "def.h"

using namespace std;

namespace arrays
{
	void OutMasTriangle(masTriangle &masTriangle, ofstream &ofst)
	{
		CheckOutputFile(ofst);
		ofst << "Это Треугольная матрица: размерность = " << masTriangle.razmer << endl;
		ofst << "Матрица : " << endl;

		for (int i = 0; i < masTriangle.razmer; i++)
		{
			for (int j = 0; j < masTriangle.razmer; j++)
			{
				if (i >= j)
					ofst << masTriangle.mas3[i][j] << "\t";
			}
			ofst << endl;
		}
	}
}