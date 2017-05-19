#include "stdafx.h"
#include "Mas_Double.h"
#include <fstream>
#include "array.h"
#include "def.h"

using namespace std;

namespace arrays
{
	void OutMasDouble(masDouble &masDouble, ofstream &ofst)
	{
		CheckOutputFile(ofst);
		ofst << "��� �������� �������: ����������� = " << masDouble.razmer << endl;
		ofst << "������� : " << endl;
		for (int i = 0; i < masDouble.razmer; i++)
		{
			for (int j = 0; j < masDouble.razmer; j++)
			{
				ofst << masDouble.mas2[i][j] << "\t";
			}
			ofst << endl;
		}
	}
}