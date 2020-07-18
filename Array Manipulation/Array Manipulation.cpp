#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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