#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

// Complete the kangaroo function below.
string kangaroo(int x1, int v1, int x2, int v2) {
	int k1Pos = x1;
	int k2Pos = x2;

	for (int i = 1; i <= 10000; i++)
	{
		k1Pos += v1;
		k2Pos += v2;

		if (k1Pos == k2Pos) {
			return "YES";
			break;
		}
	}
	return "NO";
}

int main()
{
	cout << kangaroo(0, 2, 5, 3);
	return 0;
}
