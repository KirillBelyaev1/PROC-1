#include <fstream>
#include <iostream>
#include "stdafx.h"
#include "def.h"

using namespace std;

void CheckInputFile(ifstream &ifst)
{
	if (!ifst)
	{
		cerr << "Error: no input file!" << endl;
		getchar();
		getchar();
		exit(1);
	}
}

void CheckWrongInput(ifstream &ifst)
{
	if (ifst.fail())
	{
		cout << "Wrong input!" << endl;
		getchar();
		getchar();
		exit(1);
	}
}

void CheckOutputFile(ostream &ofst)
{
	if (!ofst)
	{
		cerr << "Error: no output file!" << endl;
		getchar();
		getchar();
		exit(1);
	}
}

/*void CheckField(int p)
{
if (p < 0 || p > 2 )
{
cout << "Incorrect input field." << endl;
getchar();
getchar();
exit(1);
}
}*/
void CheckKey(int key)
{
	if (key < 1 || key > 2)
	{
		cout << "Incorrect input key." << endl;
		getchar();
		getchar();
		exit(1);
	}
}
void CheckRazmer(int razmer)
{
	if (razmer < 1)
	{
		cout << "Incorrect input razmer." << endl;
		getchar();
		getchar();
		exit(1);
	}
}