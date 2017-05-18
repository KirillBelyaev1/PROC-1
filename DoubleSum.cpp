#include "stdafx.h"
#include "mas_double.h"
#include <fstream>

using namespace std;

namespace arrays
{
	int CalculationSum(mas_double &mas_double)
	{
		int sum2 = 0;

		for (int i = 0; i < mas_double.razmer; i++)
		for (int j = 0; j < mas_double.razmer; j++)
			sum2 = sum2 + mas_double.mas2[i][j];
		return sum2;

	}
}