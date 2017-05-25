#include "stdafx.h"
#include <fstream>
#include "array.h"
#include"Mas_One.h"
#include"Mas_Double.h"
#include "triangle.h"
#include "def.h"

using namespace std;

namespace arrays 
{
	void ReadMasDouble(masDouble &masDouble, ifstream &ifst);
	void ReadMasOne(masOne  &masOne, ifstream &ifst);
	void ReadMasTriangle(masTriangle &masTriangle, ifstream &ifst);
	
	array* InfaArrayPrint(ifstream &ifst) 
	{
		array *readarray;
		int key;
		CheckInputFile(ifst);
		ifst >> key;
		CheckWrongInput(ifst);
		CheckKey(key);
		int pr;
		ifst >> pr;
		CheckWrongInput(ifst);
		
		readarray = new array;
		readarray->p = (array::process)pr;

		switch (key) 
		{
		case 1:		
		{
			readarray->key = array::key::Mas_one;
			ReadMasOne(readarray->masOne, ifst);
			return readarray;
		}
		case 2:
		{
			readarray->key = array::key::Mas_double;
			ReadMasDouble(readarray->masDouble, ifst);
			return readarray;
		}
		case 3:
		{
			readarray->key = array::key::Mas_triangle;
			ReadMasTriangle(readarray->masTriangle, ifst);
			return readarray;
		}
		default:
			return NULL;
		}
		return readarray;
	}
}

