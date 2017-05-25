#include "stdafx.h"
#include "Mas_Double.h"
#include <fstream>

using namespace std;

namespace arrays
{
	int CalculationSum(Mas_Double &Mas_Double)
	{
		int sum2 = 0;

		for (int i = 0; i < Mas_Double.razmer; i++)
		{
			for (int j = 0; j < Mas_Double.razmer; j++)
			{
				sum2 = sum2 + Mas_Double.mas2[i][j];
			}
				return sum2;
		}
	}
}