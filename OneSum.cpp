#include "stdafx.h"
#include "Mas_One.h"
#include <fstream>

using namespace std;

namespace arrays 
{
	int CalculationSum(masOne &masOne)
	{
		int sum1 = 0;
		for (int i = 0; i < masOne.razmer; i++)
		{
			sum1 = sum1 + masOne.mas1[i];
		}
			return sum1;
	}
}