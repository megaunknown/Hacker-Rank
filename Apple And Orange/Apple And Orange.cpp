#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

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