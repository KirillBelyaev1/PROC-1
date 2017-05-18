#include "stdafx.h"
#include "triangle.h"
#include <fstream>

using namespace std;

namespace arrays
{
	void ReadMasTriangle(mas_triangle &mas_triangle, ifstream &ifst)
	{
		ifst >> mas_triangle.razmer3;
		mas_triangle.mas3 = new int*[mas_triangle.razmer3];

		for (int i = 0; i < mas_triangle.razmer3; i++)
			mas_triangle.mas3[i] = new int[mas_triangle.razmer3];

		for (int i = 0; i < mas_triangle.razmer3; i++)

		for (int j = 0; j < mas_triangle.razmer3; j++)
		if (i >= j)
			ifst >> mas_triangle.mas3[i][j];
	}
}
	