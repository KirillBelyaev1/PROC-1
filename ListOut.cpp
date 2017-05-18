#include "stdafx.h"
#include <fstream>
#include "list.h"

using namespace std;

namespace arrays {

	void InfaArrayWrite(array &outarray, ofstream &ofst);

	void PrintElements(list &list, ofstream &ofst) {
		ofst << "List contents " << list.listLength << " elements." << endl;
		listElement *temp = list.listHead;
		int num = list.listLength;

		while (temp != NULL) 
		{
			
			ofst << num << ": ";
			InfaArrayWrite(*(temp->array), ofst);
			temp = temp->next;
			num--;
		}
	}
} 
