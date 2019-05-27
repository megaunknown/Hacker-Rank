// Apple And Orange.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <iostream>
#include <climits>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <stack>
#include <vector>
#include <set>
#include <string>
#include <list>
#include <cmath>
#include <stdlib.h>     /* srand, rand */
using namespace std;


// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
	int appleCounter = 0;
	int orangeCounter = 0;

	for (int i = 0; i < apples.size(); i++)
	{
		if (a + apples[i] >= s && a + apples[i] <= t)
			appleCounter++;
	}


	for (int j = 0; j < oranges.size(); j++)
	{
		if (b + oranges[j] >= s && b + oranges[j] <= t)
			orangeCounter++;
	}

	cout << appleCounter << endl;
	cout << orangeCounter << endl;
}

int main()
{
	system("pause");
	return 0;
}