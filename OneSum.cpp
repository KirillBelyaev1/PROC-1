#include "stdafx.h"
#include "mas_one.h"
#include <fstream>

using namespace std;

namespace arrays 
{
	int CalculationSum(mas_one &mas_one)
	{
		int sum1 = 0;
		for (int i = 0; i < mas_one.razmer; i++)
			sum1 = sum1 + mas_one.mas1[i];
		return sum1;

	}
}