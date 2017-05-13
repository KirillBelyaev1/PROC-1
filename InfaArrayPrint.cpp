#include "stdafx.h"
#include <fstream>
#include "array.h"

using namespace std;

namespace arrays 
{
	void MasDoubleRead(mas_double &mas_double, ifstream &ifst);
	void MasOneRead(mas_one  &mas_one, ifstream &ifst);
	
	array* InfaArrayPrint(ifstream &ifst) 
	{
		array *readarray;
		int key;
	
		ifst >> key;

		readarray = new array;

		switch (key) 
		{
		case 1:			
			readarray->key = array::key::Mas_one;
			MasOneRead(readarray->mas_one, ifst);
			return readarray;

		case 2:
			readarray->key = array::key::Mas_double;
			MasDoubleRead(readarray->mas_double, ifst);
			return readarray;

		default:
			return NULL;
		}

	}
}

