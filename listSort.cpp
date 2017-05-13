#include "stdafx.h"
#include <fstream>
#include "list.h"

using namespace std;

namespace arrays {

	int CalculationSum(array &array);

	void SortSum(list &list, bool sort)
	{
		listElement *current = list.listHead, *temp = NULL, *previous = NULL;
		bool flag = false;

		do {
			flag = false;
			current = list.listHead;
			while (current->next) {
				if (sort == true) {
					if (CalculationSum(*(current->array)) > CalculationSum(*(current->next->array))) {
						if (current == list.listHead)
						{
							temp = current;
							current = temp->next;
							temp->next = current->next;
							current->next = temp;
							list.listHead = current;
							flag = true;
						}
						else 
						{
							temp = current;
							current = temp->next;
							temp->next = current->next;
							current->next = temp;
							previous->next = current;
							flag = true;
						}
					}
				}
				else {
					if (CalculationSum(*(current->array)) < CalculationSum(*(current->next->array))) {
						if (current == list.listHead) {
							temp = current;
							current = temp->next;
							temp->next = current->next;
							current->next = temp;
							list.listHead = current;
							flag = true;
						}
						else {
							temp = current;
							current = temp->next;
							temp->next = current->next;
							current->next = temp;
							previous->next = current;
							flag = true;
						}
					}
				}
				previous = current;
				current = current->next;
			}
		} while (flag);

	}
}