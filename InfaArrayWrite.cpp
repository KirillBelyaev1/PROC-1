#include "stdafx.h"
#include <fstream>
#include "array.h"

using namespace std;

namespace arrays
{
	void OutMasDouble(mas_double &mas_double, ofstream &ofst);	
	void OutMasOne(mas_one &mas_one, ofstream &ofst);


	void InfaArrayWrite(array &outarray, ofstream &ofst)
	{
		switch (outarray.key)
		{
		case array::key::Mas_one:
			OutMasOne(outarray.mas_one, ofst);
			break;

		case array::key::Mas_double:
			OutMasDouble(outarray.mas_double, ofst);
			break;
	
		default:
			ofst << "Incorrect array!" << endl;
		}
		string pro[3] = { "Построчно", "По столбцам", "Одномерный массив" };
		ofst << pro[outarray.p].c_str()<<"\n";
	

	}
}




