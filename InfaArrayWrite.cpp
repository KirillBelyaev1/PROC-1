#include "stdafx.h"
#include <fstream>
#include "array.h"
#include "def.h"

using namespace std;

namespace arrays
{
	int CalculationSum(array &array);
	int CalculationSum(masOne &masOne);
	int CalculationSum(masDouble &masDouble);
	int CalculationSum(masTriangle &masTriangle);

	void OutMasDouble(masDouble &masDouble, ofstream &ofst);
	void OutMasOne(masOne  &masOne, ofstream &ofst);
	void OutMasTriangle(masTriangle &masTriangle, ofstream &ofst);
	void InfaArrayWrite(array &outarray, ofstream &ofst)
	{
		switch (outarray.key)
		{
		case array::key::Mas_one:
		{
			OutMasOne(outarray.masOne, ofst);
			CheckOutputFile(ofst);
			ofst << "����� ��������� = " << CalculationSum(outarray.masOne) << endl;
			break;
		}
		case array::key::Mas_double:
		{
			OutMasDouble(outarray.masDouble, ofst);
			ofst << "����� ��������� = " << CalculationSum(outarray.masDouble) << endl;
			break;
		}
		case array::key::Mas_triangle:
		{
			OutMasTriangle(outarray.masTriangle, ofst);
			ofst << "����� ��������� = " << CalculationSum(outarray.masTriangle) << endl;
			break;
		}
		default:
			ofst << " �������� ������!" << endl;
		}
		ofst << endl;
		string pro[3] = { "���������", "�� ��������", "���������� ������" };
		ofst << pro[outarray.p].c_str()<<"\n";

	}
}




