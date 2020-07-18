#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>    // std::sort
using namespace std;

// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(vector<int> ar) {

	int iSize = ar.capacity();

	sort(ar.begin(), ar.begin() + iSize);

	int iCounter = 1;

	int val = ar[ar.capacity() - 1];

	for (int i = ar.capacity() - 2; i >= 0; i--)
	{
		if (ar[i] == val)
			iCounter++;
		else
			break;
	}
	return iCounter;
}

int main() {

	vector<int> myvector{ 3,2,1,3 };
	cout <<  birthdayCakeCandles(myvector) << endl;
	system("pause");
	return 0;
}