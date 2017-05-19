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
		cout << "�������� ��������� ������! " << "��������: �������� in_file out_file" << endl;
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
		cout << "����������:\n1 - �� �����������\n2 - �� ��������\n" << endl;
		cin >> enter;
		if (enter != 1 && enter != 2)
		{
			cout << "������! ��������� ����!" << endl;
		}

	} while (enter != 1 && enter != 2);

	out << "������������� ���������: " << endl << endl;

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
	out << "��������� ����. " << endl;


	in.close();
	out.close();
	
	return 0;
}

