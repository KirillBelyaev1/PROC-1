#include "stdafx.h"
#include "mas_one.h"
#include "mas_double.h"
#include <fstream>
#include "array.h"
using namespace std;

namespace arrays
{
	int CalculationSum(mas_one &mas_one);
	int CalculationSum(mas_double &mas_double);
	int CalculationSum(array &array)
	{
		switch (array.key)
		{
		case array::key::Mas_one:
			return CalculationSum(array.mas_one);
			break;
		case array::key::Mas_double:
			return CalculationSum(array.mas_double);
			break;
		default:
			return 0;

		}
	}
}