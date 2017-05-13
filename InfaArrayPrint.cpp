#include "stdafx.h"
#include <fstream>
#include "array.h"

using namespace std;

namespace arrays 
{
	void ReadMas(mas_double &mas_double, ifstream &ifst);
	void ReadMas(mas_one  &mas_one, ifstream &ifst);
	
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
			ReadMas(readarray->mas_one, ifst);
			break;
			
		case 2:
			readarray->key = array::key::Mas_double;
			ReadMas(readarray->mas_double, ifst);
			break;
		default:
			return NULL;
		}
		return readarray;

	}
}

