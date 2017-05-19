#include "stdafx.h"
#include "triangle.h"
#include <fstream>

using namespace std;

namespace arrays
{
	int CalculationSum(mas_triangle &mas_triangle)
	{
		int sum3 = 0;

		for (int i = 0; i < mas_triangle.razmer; i++)
		for (int j = 0; j < mas_triangle.razmer; j++)
			sum3 = sum3 + mas_triangle.mas3[i][j];
		return sum3;

	}
}