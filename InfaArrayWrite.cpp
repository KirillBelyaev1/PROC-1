#include "stdafx.h"
#include <fstream>
#include "array.h"

using namespace std;

namespace arrays 
{
	void MasDoubleOut(mas_double &mas_double, ofstream &ofst);
	void MasOneOut(mas_one  &mas_one, ofstream &ofst);
	int MasOneSum(mas_one &mas_one);
	int MasDoubleSum(mas_double &mas_double);

	void InfaArrayWrite(array &outarray, ofstream &ofst)
	{
		
		switch (outarray.key) 
		{
		case array::key::Mas_one:
			MasOneOut(outarray.mas_one, ofst);
			ofst << "Сумма элементов = " << MasOneSum(outarray.mas_one) << endl;
			break;
		case array::key::Mas_double:
			MasDoubleOut(outarray.mas_double, ofst);
			ofst << "Сумма элементов = " << MasDoubleSum(outarray.mas_double) << endl;
			break;
		default:
			ofst << "Incorrect array!" << endl;
		}

		


	}
}


