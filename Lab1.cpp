#include "stdafx.h"
#include <fstream>
#include <iostream>
#include "list.h"
#include <string>
#include "windows.h"

using namespace std;

namespace arrays 
{
	void Init(list &list);
	void Clear(list &list);
	void SortSum(list &list, bool sort);
	void In(list &list, ifstream &ifst);
	void Out(list &list, ofstream &ofst);
	void Out1(list &list, ofstream &ofst);
}

using namespace arrays;

int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream in;
	in.open("in.txt");

	ofstream out;
	out.open("out.txt");

	/*if (argc != 3) 
	{
		cout << "Неверная командная строка! " << "Ожидание: комманды in_file out_file" << endl;
		exit(1);
	}

	ifstream in(argv[1]);
	ofstream out(argv[2]);
	ofstream outtemp("qwer.txt");*/
	

	list list;


	Init(list);
	In(list, in);
	
	int enter = 0;
	do
	{
		cout << "Сортировка:\n1 - по возрастанию\n2 - по убыванию\n" << endl;
		cin >> enter;
		if (enter != 1 && enter != 2)
		{
			cout << "Ошибка! Повторите ввод!" << endl;
		}

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

	Out(list, out);

	Out1(list, out);

	Clear(list);
	out << "Контейнер пуст. " << endl;


	in.close();
	out.close();
	
	return 0;
}

