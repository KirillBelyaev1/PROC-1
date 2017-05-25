#include "stdafx.h"
#include "Mas_One.h"
#include <fstream>

using namespace std;

namespace arrays 
{
	int CalculationSum(Mas_One &Mas_One)
	{
		int sum1 = 0;
		for (int i = 0; i < Mas_One.razmer; i++)
		{
			sum1 = sum1 + Mas_One.mas1[i];
		}
			return sum1;
	}
}