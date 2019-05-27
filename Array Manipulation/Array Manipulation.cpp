// Array Manipulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string>
using namespace std;

// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int>> queries) {
	long iMax = INT_MIN;
	vector<long> vec(n);
	for (int i = 0; i < queries.size(); i++) {
		std::transform(vec.begin() + (queries[i][0] - 1),
			vec.begin() + queries[i][1],
			vec.begin() + (queries[i][0] - 1), [&](long d) {
			if (d + queries[i][2] > iMax)
				iMax = d + queries[i][2];
			return d + queries[i][2];
		});
	}
	return iMax;
}

int main()
{
	vector<vector<int>> v = { { 1, 5 ,3},{ 4 ,8, 7},{6 ,9, 1} };
	cout << arrayManipulation(10, v) << endl;

	system("pause");
	return 0;
}

class OldSol {
public:

	long arrayManipulation(int n, vector<vector<int>> queries) {
		long iMax = INT_MIN;
		vector<long> vec(n);
		int a, b, k;

		for (int i = 0; i < queries.size(); i++)
		{
			a = queries[i][0]; //start
			b = queries[i][1]; //end
			k = queries[i][2]; //the value to be added

			for (int j = a - 1; j <= b - 1; ++j)
			{
				vec[j] += k;

				if (vec[j] > iMax)
					iMax = vec[j];
			}
		}

		return iMax;
	}

	void s()
	{
		long n, m;
		cin >> n >> m;
		long iMax = INT_MIN, iTempMax = 0;
		vector<long> vec(n);
		int i = 0, j = 0;


		for (i = 0; i < m; ++i)
		{
			long a, b, k;
			cin >> a >> b >> k;

			for (j = a - 1; j < b - 1; ++j)
			{
				vec[j] += k;
				if (vec[j] > iMax)
					iMax = vec[j];
			}
		}
		cout << iMax << endl;
	}

	long max(vector<long> d)
	{
		long max = d[0];
		for (int i = 1; i < d.size(); i++)
		{
			if (d[i] > max)
				max = d[i];
		}
		return max;
	}

};