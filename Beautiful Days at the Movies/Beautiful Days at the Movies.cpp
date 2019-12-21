// Beautiful Days at the Movies.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include <climits>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <stack>
#include <vector>
#include <string>
#include <list>
#include <cmath>
#include <cstring>
#include <stdlib.h>     /* srand, rand */
using namespace std;
// Complete the beautifulDays function below.
int beautifulDays(int i, int j, int k) {
	int iIsBeautiful = 0;
	float frac = 0;
	double iResult = 0;
	int iRevNumVal = 0;
	std::string::size_type sz;   // alias of size_t
	string s1, s2;
	
	for (int d = i; d <= j; d++)
	{
		s1 = s2 = to_string(d);
		s2.reserve();

		iRevNumVal = std::stoi(s2, &sz);

		iResult = (d - iRevNumVal) / k;
		frac = iResult - (int)iResult;
		if (frac == 0)
			iIsBeautiful++;
	}

	return iIsBeautiful;
}

int main()
{
	system("pause");
	return 0;
}
