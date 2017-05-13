#include "stdafx.h"

#ifndef _list
#define _list

namespace arrays {

	struct array;

	struct listElement 
	{
		array *array;
		listElement *next = NULL;
	};	
	
	struct list 
	{
		listElement *listHead;
		int listLength = 0;
	};
}
#endif
