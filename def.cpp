#include <fstream>
#include <iostream>
#include "stdafx.h"
#include "def.h"

using namespace std;

void CheckInputFile(ifstream &ifst)
{
	if (!ifst)
	{
		cerr << "Ошибка: отсутсвует входной файл!" << endl;
		getchar();
		getchar();
		exit(1);
	}
}

void CheckWrongInput(ifstream &ifst)
{
	if (ifst.fail())
	{
		cout << "Неправильный ввод!" << endl;
		getchar();
		getchar();
		exit(1);
	}
}

void CheckOutputFile(ostream &ofst)
{
	if (!ofst)
	{
		cerr << "Ошибка: отсутвует выходной файл!" << endl;
		getchar();
		getchar();
		exit(1);
	}
}

void CheckKey(int key)
{
	if (key < 1 || key > 3)
	{
		cout << "Неправильный ввод 'key'." << endl;
		getchar();
		getchar();
		exit(1);
	}
}
void CheckRazmer(int razmer)
{
	if (razmer < 1)
	{
		cout << "Неправильный ввод размера." << endl;
		getchar();
		getchar();
		exit(1);
	}
}