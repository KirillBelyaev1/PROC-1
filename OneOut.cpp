#include "stdafx.h"
#include "Mas_One.h"
#include <fstream>
#include "def.h"

using namespace std;

namespace arrays {
	void OutMasOne(Mas_One &Mas_One, ofstream &ofst)
	{
		CheckOutputFile(ofst);
		ofst << "It is One Matrix: razmernost = " << Mas_One.razmer << endl;
		ofst << "Matrix" << endl;
		for (int i = 0; i < Mas_One.razmer; i++)
		{
			for (int j = 0; j < Mas_One.razmer; j++)
			{
				if (i == j)
					ofst << Mas_One.mas1[i] << "\t";
				else
					ofst << "0\t";
			}
			ofst << "\n";
		}
		ofst << endl;
	}
}