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
		cout << "Вывод:\n1 - Одиночная матрица\n2 - Двумерная матрица\n3 - Треугольная матрица\n4 - Все матрицы\n";
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
				case 3:
					if (temp->array->key == 2)
					InfaArrayWrite(*(temp->array), ofst);
					break;
				case 4:
					InfaArrayWrite(*(temp->array), ofst);
					break;
				}
				temp = temp->next;
			}
		}
	}
}