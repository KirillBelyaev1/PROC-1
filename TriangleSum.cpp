#include "stdafx.h"
#include "triangle.h"
#include <fstream>

using namespace std;

namespace arrays
{
	int CalculationSum(Mas_Triangle &Mas_Triangle)
	{
		int sum3 = 0;

		for (int i = 0; i < Mas_Triangle.razmer; i++)
		{
			for (int j = 0; j < Mas_Triangle.razmer; j++)
			{
				sum3 = sum3 + Mas_Triangle.mas3[i][j];
			}
				return sum3;
		}
	}
}