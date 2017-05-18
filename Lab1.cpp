#include "stdafx.h"
#include <fstream>
#include <iostream>
#include "list.h"
#include "windows.h"

using namespace std;

namespace arrays 
{
	void Init(list &list);
	void Clear(list &list);
	void LoadElements(list &list, ifstream &ifst);
	void PrintElements(list &list, ofstream &ofst);
	void SortSum(list &list, bool sort);
}

using namespace arrays;

int main(int argc, char* argv[]) 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	if (argc != 3) {
		cout << "Incorrect command line! " << "Waited: command in_file out_file" << endl;
		exit(1);
	}
	ifstream in(argv[1]);
	ofstream out(argv[2]);


	cout << "Start" << endl;

	list list;

	Init(list);
	LoadElements(list, in);
	
	int enter = 0;
	do
	{
		cout << "Сортировка:\n1 - по возрастанию\n2 - по убыванию\n" << endl;
		cin >> enter;
		if (enter != 1 && enter != 2)
			cout << "Ошибка! Повторите ввод!" << endl;

	} while (enter != 1 && enter != 2);

	out << "Сортированный контейнер: " << endl << endl;

	if (enter == 1) 
	{
		SortSum(list, true);
	}
	else 
	{
		SortSum(list, false);
	}

	PrintElements(list, out);
	Clear(list);
	out << "Empty container. " << endl;
	PrintElements(list, out);

	in.close();
	out.close();
	
	return 0;
}

