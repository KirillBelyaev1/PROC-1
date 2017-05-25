#include "stdafx.h"
#include "Mas_One.h"
#include "Mas_Double.h"
#include "triangle.h"
#include <fstream>
#include "array.h"
using namespace std;

namespace arrays
{
	int CalculationSum(Mas_One &Mas_One);
	int CalculationSum(Mas_Double &Mas_Double);
	int CalculationSum(Mas_Triangle &Mas_Triangle);
	int CalculationSum(array &array)
	{
		switch (array.key)
		{
		case array::key::Mas_one:
			return CalculationSum(array.Mas_One);
			break;
		case array::key::Mas_double:
			return CalculationSum(array.Mas_Double);
			break;
		case array::key::Mas_triangle:
			return CalculationSum(array.Mas_Triangle);
			break;
		default:
			return 0;

		}
	}
}