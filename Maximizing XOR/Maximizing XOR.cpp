	// Maximizing XOR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
#include <bitset>
#include <math.h>       /* log2 */
using namespace std;

#define MAX 25

bool isValid(long n, long i)
{
	std::string binary1 = std::bitset<MAX>(n).to_string();
	std::string binary2 = std::bitset<MAX>(i).to_string();

	for (int i = 0; i < binary1.length(); i++)
	{
		if (binary1[i] == '1' && binary2[i] == '1')
			return false;
	}
	return true;
}
// Complete the maximizingXor function below.
int maximizingXor(int l, int r) {
	int iMax = INT_MIN;

	for (int i = l; i <= r; ++i)
	{
		for (int j = i; j <= r; ++j)
		{
			if (i != j)
			{
				if ((i^j) > iMax)
					iMax = (i^j);
			}
		}
	}
	return iMax;
}


int main()
{
	cout << maximizingXor(10, 15);

	system("pause");
	return 0;
}