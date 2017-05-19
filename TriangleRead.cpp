#include "stdafx.h"
#include "triangle.h"
#include <fstream>
#include "def.h"

using namespace std;

namespace arrays
{
	void ReadMasTriangle(mas_triangle &mas_triangle, ifstream &ifst)
	{
		ifst >> mas_triangle.razmer;
		CheckRazmer(mas_triangle.razmer);
		CheckWrongInput(ifst);
		mas_triangle.mas3 = new int*[mas_triangle.razmer];

		for (int i = 0; i < mas_triangle.razmer; i++)
			mas_triangle.mas3[i] = new int[mas_triangle.razmer];

		for (int i = 0; i < mas_triangle.razmer; i++)

		for (int j = 0; j < mas_triangle.razmer; j++)
		if (i >= j)
			ifst >> mas_triangle.mas3[i][j];
			CheckWrongInput(ifst);
	}
}
	