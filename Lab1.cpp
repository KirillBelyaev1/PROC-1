#include "stdafx.h"
#include <fstream>
#include <iostream>
#include "list.h"
#include <string>
#include "windows.h"

using namespace std;

namespace arrays {
	void Init(list &list);
	void Clear(list &list);
	void In(list &list, ifstream &ifst);
	void Out(list &list, ofstream &ofst);
	void Out1(list &list, ofstream &ofst);
}

using namespace arrays;

int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream in(argv[1]);
	ofstream out(argv[2]);
	

	list list;


	Init(list);
	In(list, in);


	Out1(list, out);
	Clear(list);
	out << "Empty container. " << endl;


	cout << "Stop" << endl;

	in.close();
	out.close();
	
	return 0;
}

