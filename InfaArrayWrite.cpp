#include "stdafx.h"
#include <fstream>
#include "array.h"

using namespace std;

namespace arrays 
{
	void OutMas(mas_double &mas_double, ofstream &ofst);
	void OutMas(mas_one  &mas_one, ofstream &ofst);
	
	void InfaArrayWrite(array &outarray, ofstream &ofst)
	{
		
		switch (outarray.key) 
		{
		case array::key::Mas_one:
			OutMas(outarray.mas_one, ofst);
			break;
		case array::key::Mas_double:
			OutMas(outarray.mas_double, ofst);
			break;

		default:
			ofst << "Incorrect array!" << endl;
		}


	}
}


