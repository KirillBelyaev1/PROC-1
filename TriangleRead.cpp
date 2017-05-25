#include "stdafx.h"
#include "triangle.h"
#include <fstream>
#include "def.h"

using namespace std;

namespace arrays
{
	void ReadMasTriangle(masTriangle &masTriangle, ifstream &ifst)
	{
		ifst >> masTriangle.razmer;
		CheckRazmer(masTriangle.razmer);
		CheckWrongInput(ifst);
		masTriangle.mas3 = new int*[masTriangle.razmer];

		for (int i = 0; i < masTriangle.razmer; i++)
		{
			masTriangle.mas3[i] = new int[masTriangle.razmer];
		}
		for (int i = 0; i < masTriangle.razmer; i++)
		{
			for (int j = 0; j < masTriangle.razmer; j++)
			{
				if (i >= j)
				{
					ifst >> masTriangle.mas3[i][j];
					CheckWrongInput(ifst);
				}
			}
		}
	}
}
	