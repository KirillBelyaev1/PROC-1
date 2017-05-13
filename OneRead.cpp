#include "stdafx.h"
#include "mas_one.h"
#include <fstream>

using namespace std;

namespace arrays 
{
	void ReadMasOne(mas_one &mas_one, ifstream &ifst) 
	{
		ifst >> mas_one.razmer;

		mas_one.mas1 = new int[mas_one.razmer];
		for (int i = 0; i < mas_one.razmer; i++)
			ifst >> mas_one.mas1[i];
	}
}