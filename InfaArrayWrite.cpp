#include "stdafx.h"
#include <fstream>
#include "array.h"
#include "def.h"

using namespace std;

namespace arrays
{
	int CalculationSum(array &array);
	int CalculationSum(Mas_One &Mas_One);
	int CalculationSum(Mas_Double &Mas_Double);
	int CalculationSum(Mas_Triangle &Mas_Triangle);

	void OutMasDouble(Mas_Double &Mas_Double, ofstream &ofst);
	void OutMasOne(Mas_One  &Mas_One, ofstream &ofst);
	void OutMasTriangle(Mas_Triangle &Mas_Triangle, ofstream &ofst);
	
	void InfaArrayWrite(array &outarray, ofstream &ofst)
	{
		switch (outarray.key)
		{
		case array::key::Mas_one:
		{
			OutMasOne(outarray.Mas_One, ofst);
			CheckOutputFile(ofst);
			ofst << "Сумма элементов = " << CalculationSum(outarray.Mas_One) << endl;
			break;
		}
		case array::key::Mas_double:
		{
			OutMasDouble(outarray.Mas_Double, ofst);
			ofst << "Сумма элементов = " << CalculationSum(outarray.Mas_Double) << endl;
			break;
		}
		case array::key::Mas_triangle:
		{
			OutMasTriangle(outarray.Mas_Triangle, ofst);
			ofst << "Сумма элементов = " << CalculationSum(outarray.Mas_Triangle) << endl;
			break;
		}
		default:
			ofst << "Incorrect array!" << endl;
		}
		string pro[3] = { "Построчно", "По столбцам", "Одномерный массив" };
		ofst << pro[outarray.p].c_str()<<"\n";

	}
}




