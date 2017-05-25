#include "stdafx.h"
#include "Mas_Double.h"
#include <fstream>
#include "array.h"
#include "def.h"

using namespace std;

namespace arrays
{
	void OutMasDouble(Mas_Double &Mas_Double, ofstream &ofst)
	{
		CheckOutputFile(ofst);
		ofst << "It is Double Matrix: razmernost = " << Mas_Double.razmer << endl;
		ofst << "Matrix : " << endl;
		for (int i = 0; i < Mas_Double.razmer; i++)
		{
			for (int j = 0; j < Mas_Double.razmer; j++)
			{
				ofst << Mas_Double.mas2[i][j] << "\t";
			}
			ofst << endl;
		}
		
		
	}
}