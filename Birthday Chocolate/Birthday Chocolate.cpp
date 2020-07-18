#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

//Cake Slicer
vector< vector<int>> slicer(vector<int> s, int m)
{
	vector<vector<int>> seq(0);
	for (int i = 0; i < s.size(); i++)
	{
		vector<int> v(m);
		if (i + m <= s.size())
		{
			std::copy(s.begin() + i, s.begin() + i + m, v.begin());
			seq.push_back(v);
		}else
		{
			break;
		}
	}
	return seq;
}

//Accumulate Cakes Sequances Size
vector<int> accum(vector<vector<int>> numbers)
{
	vector<int> acc(numbers.size());
	for (int i = 0; i < numbers.size(); i++)
		acc[i] = std::accumulate(numbers[i].begin(), numbers[i].end(), 0);
	
	return acc;
}


// Complete the birthday function below.
int birthday(vector<int> s, int d, int m) {

	int iCakesCounter = 0;
	vector<vector<int>> CakeSequances = slicer(s, m);
	vector<int> summ = accum(CakeSequances);
	iCakesCounter = count(summ.begin(), summ.end(), d);

	return iCakesCounter;
}


int main()
{
	vector<int> vec{ 1, 2, 1, 3, 2 };
	cout << birthday(vec, 3, 2) << endl;
	system("pause");
	return 0;
}