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
	void ReadMasDouble(Mas_Double &Mas_Double, ifstream &ifst);
	void ReadMasOne(Mas_One  &Mas_One, ifstream &ifst);
	void ReadMasTriangle(Mas_Triangle &Mas_Triangle, ifstream &ifst);
	
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
			ReadMasOne(readarray->Mas_One, ifst);
			return readarray;
		}
		case 2:
		{
			readarray->key = array::key::Mas_double;
			ReadMasDouble(readarray->Mas_Double, ifst);
			return readarray;
		}
		case 3:
		{
			readarray->key = array::key::Mas_triangle;
			ReadMasTriangle(readarray->Mas_Triangle, ifst);
			return readarray;
		}
		default:
			return NULL;
		}
		return readarray;
	}
}

