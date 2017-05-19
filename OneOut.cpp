#include "stdafx.h"
#include "Mas_One.h"
#include <fstream>
#include "def.h"

using namespace std;

namespace arrays {
	void OutMasOne(masOne &masOne, ofstream &ofst)
	{
		CheckOutputFile(ofst);
		ofst << "Ёто единична€ матрица: размерность = " << masOne.razmer << endl;
		ofst << "ћатрица" << endl;
		for (int i = 0; i < masOne.razmer; i++)
		{
			for (int j = 0; j < masOne.razmer; j++)
			{
				if (i == j)
					ofst << masOne.mas1[i] << "\t";
				else
					ofst << "0\t";
			}
			ofst << "\n";
		}
	}
}