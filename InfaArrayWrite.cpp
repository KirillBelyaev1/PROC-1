#include "stdafx.h"
#include <fstream>
#include "array.h"

using namespace std;

namespace arrays 
{
	int CalculationSum(array &array);
	int CalculationSum(mas_one &mas_one);
	int CalculationSum(mas_double &mas_double);

	void OutMasDouble(mas_double &mas_double, ofstream &ofst);
	void OutMasOne(mas_one  &mas_one, ofstream &ofst);
	void OutMasTriangle(mas_triangle &mas_triangle, ofstream &ofst);
	
	void InfaArrayWrite(array &outarray, ofstream &ofst)
	{
		
		switch (outarray.key) 
		{
		case array::key::Mas_one:
			OutMasOne(outarray.mas_one, ofst);
			ofst << "Сумма элементов = " << CalculationSum(outarray.mas_one) << endl;
			break;
		case array::key::Mas_double:
			OutMasDouble(outarray.mas_double, ofst);
			ofst << "Сумма элементов = " << CalculationSum(outarray.mas_double) << endl;
			break;
		case array::key::Mas_triangle:
			OutMasTriangle(outarray.mas_triangle, ofst);
			ofst << "Сумма элементов = " << CalculationSum(outarray.mas_triangle) << endl;
			break;
		default:
			ofst << "Incorrect array!" << endl;
		}

		


	}
}


