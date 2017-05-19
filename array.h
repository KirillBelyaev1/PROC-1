#include "stdafx.h"
#ifndef _array
#define _array
#include "Mas_Double.h"
#include "Mas_One.h"
#include"triangle.h"
#include <fstream>


using namespace std;

namespace arrays 
{	
	struct array
	{
		enum key { Mas_double, Mas_one, Mas_triangle };
		enum process {ROW,COLUMS,OMAS};
		process p;
		key key;
		int razmer;
		int sum=0;
		union 
		{
			masDouble masDouble;
			masOne masOne;
			masTriangle masTriangle;
		};
	};
}
#endif
