#include "stdafx.h"
#include "list.h"
#include "array.h"

namespace arrays 
{

	void Init(list &list) { list.listHead = NULL; }

	void Clear(list &list)
	{
		while (list.listHead != NULL)
		{
			listElement *temp = list.listHead->next;
			delete list.listHead;
			list.listHead = temp;
		}
		list.listLength = 0;
	}
}