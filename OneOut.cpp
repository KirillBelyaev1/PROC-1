#include "stdafx.h"
#include "mas_one.h"
#include <fstream>

using namespace std;

namespace arrays {
	void MasOneOut(mas_one &mas_one, ofstream &ofst) 
	{
		ofst << "It is One Matrix: razmernost = " << mas_one.razmer << endl;
		ofst << "Matrix" << endl;
		for (int i = 0; i < mas_one.razmer; i++)
		{
			for (int j = 0; j < mas_one.razmer; j++)
			{
				if (i == j)
					ofst << mas_one.mas1[i] << "\t";
				else
					ofst << "0\t";
			}
			ofst << "\n";
		}
		ofst << endl;
	}
}