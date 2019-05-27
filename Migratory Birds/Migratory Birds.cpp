// Migratory Birds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr) {
	//Find MAX Type of Birds.
	vector<int>::iterator it = max_element(arr.begin(), arr.end());

	int iMax = *it;			// Maximum Number of Bird Types.
	int iMaxFrequnce = 0;	// Bird frequncey
	int iTypeId = 0;		// Bird TypeID
	
	for (int i = 1; i <= iMax; i++){
		int iFrequnce = std::count(arr.begin(), arr.end(), i);

		if (iFrequnce > iMaxFrequnce)
		{
			iMaxFrequnce = iFrequnce;
			iTypeId = i;
		}
	}

	return iTypeId;
}

int main()
{
	vector<int> v{ 1, 4, 4, 4, 5, 3 };
	//vector<int> v{ 1, 2, 3, 4, 5, 4, 3, 2, 1, 3, 4 };
	cout << migratoryBirds(v) << endl;
	system("pause");
	return 0;
}