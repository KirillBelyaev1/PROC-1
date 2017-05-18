#include "stdafx.h"
#include "list.h"
#include <iostream>
#include "array.h"

#include <fstream>
#include <string>
using namespace std;

namespace arrays
{
	void InfaArrayWrite(array &outarray, ofstream &ofst);

	void Out1(list &list, ofstream &ofst)
	{
		ofst << "Контейнер содержит " << list.listLength << " элементов" << endl;
		listElement *temp = list.listHead;
		int num = list.listLength;
		int menu;
		cout << "Вывод:\n1 - Одномерный массив\n2 - Двумерный массив\n";
		cin >> menu;
		menu--;
		while (temp != NULL)
		{
			while (temp != NULL)
			{
				switch (menu)
				{
				case 0:
					if (temp->array->key == 0)
						InfaArrayWrite(*(temp->array), ofst);
					break;
				case 1:
					if (temp->array->key == 1)
						InfaArrayWrite(*(temp->array), ofst);
					break;
				case 2:
					InfaArrayWrite(*(temp->array), ofst);
					break;
				}
				temp = temp->next;


			}
		}
	}
}