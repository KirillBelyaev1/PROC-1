#include "stdafx.h"
#include "Mas_One.h"
#include "Mas_Double.h"
#include "triangle.h"
#include <fstream>
#include "array.h"
using namespace std;

namespace arrays
{
	int CalculationSum(masOne &masOne);
	int CalculationSum(masDouble &masDouble);
	int CalculationSum(masTriangle &masTriangle);
	int CalculationSum(array &array)
	{
		switch (array.key)
		{
		case array::key::Mas_one:
			return CalculationSum(array.masOne);
			break;
		case array::key::Mas_double:
			return CalculationSum(array.masDouble);
			break;
		case array::key::Mas_triangle:
			return CalculationSum(array.masTriangle);
			break;
		default:
			return 0;

		}
	}
}