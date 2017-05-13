#include "stdafx.h"

#ifndef _array
#define _array

#include "mas_double.h"
#include "mas_one.h"
#include <fstream>

using namespace std;

namespace arrays 
{	
	struct array 
	{
		enum key { Mas_one, Mas_double};
		key key;
		int razmer;
		union 
		{
			mas_double mas_double;
			mas_one mas_one;
		};
	};
}
#endif
