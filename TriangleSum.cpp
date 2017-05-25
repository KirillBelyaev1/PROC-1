#include "stdafx.h"
#include "triangle.h"
#include <fstream>

using namespace std;

namespace arrays
{
	int CalculationSum(masTriangle &masTriangle)
	{
		int sum3 = 0;

		for (int i = 0; i < masTriangle.razmer; i++)
		{
			for (int j = 0; j < masTriangle.razmer; j++)
			{
				sum3 = sum3 + masTriangle.mas3[i][j];
			}
				return sum3;
		}
	}
}