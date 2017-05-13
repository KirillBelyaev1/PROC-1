#include "stdafx.h"
#include <fstream>
#include "mas_double.h"

using namespace std;

namespace arrays 
{	
	void ReadMasDouble(mas_double &mas_double, ifstream &ifst) 
	{
		ifst >> mas_double.razmer;
		mas_double.mas2 = new int*[mas_double.razmer];
		for (int i = 0; i < mas_double.razmer; i++)
			mas_double.mas2[i] = new int[mas_double.razmer];
		for (int i = 0; i < mas_double.razmer; i++)
		
			for (int j = 0; j < mas_double.razmer; j++)
				ifst >> mas_double.mas2[i][j];
	}
}