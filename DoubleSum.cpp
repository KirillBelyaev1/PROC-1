#include "stdafx.h"
#include "Mas_Double.h"
#include <fstream>

using namespace std;

namespace arrays
{
	int CalculationSum(masDouble &masDouble)
	{
		int sum2 = 0;

		for (int i = 0; i < masDouble.razmer; i++)
		{
			for (int j = 0; j < masDouble.razmer; j++)
			{
				sum2 = sum2 + masDouble.mas2[i][j];
			}
				return sum2;
		}
	}
}