#include "stdafx.h"

#ifndef _array
#define _array

#include "mas_double.h"
#include "mas_one.h"
#include"triangle.h"
#include <fstream>

using namespace std;

namespace arrays 
{	
	struct array 
	{
		enum key { Mas_double, Mas_one, Mas_triangle };
		key key;
		int razmer;
		union 
		{
			mas_double mas_double;
			mas_one mas_one;
			mas_triangle mas_triangle;
		};
	};
}
#endif
