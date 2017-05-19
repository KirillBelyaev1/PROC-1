#include "stdafx.h"
#include "mas_double.h"
#include <fstream>
#include "array.h"
#include "def.h"

using namespace std;

namespace arrays
{
	void OutMasDouble(mas_double &mas_double, ofstream &ofst)
	{
		CheckOutputFile(ofst);
		ofst << "It is Double Matrix: razmernost = " << mas_double.razmer << endl;
		ofst << "Matrix : " << endl;
		for (int i = 0; i < mas_double.razmer; i++)
		{
			for (int j = 0; j < mas_double.razmer; j++)
			{
				ofst << mas_double.mas2[i][j] << "\t";
			}
			ofst << endl;
		}
		
		
	}
}