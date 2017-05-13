#include "stdafx.h"
#include <fstream>
#include "list.h"

using namespace std;

namespace arrays {
	array *InfaArrayPrint(ifstream &ifst);

	void LoadElements(list &list, ifstream &ifst) 
	{
		while (!ifst.eof()) 
		{
			listElement *temp = new listElement;
			temp->array = InfaArrayPrint(ifst);
			temp->next = list.listHead;
			list.listHead = temp;
			list.listLength++;
		}

	}
} 
