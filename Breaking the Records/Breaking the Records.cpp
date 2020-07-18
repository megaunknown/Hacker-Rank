#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
// Complete the breakingRecords function below.
vector<int> breakingRecords(vector<int> scores) {
	vector<int> results ;//0=> best 1=>worst
	int iHigestScore = scores[0];
	int iLowestScore = scores[0];
	int iHS_Counter = 0 ,iLS_Counter = 0;

	for (size_t i = 1; i < scores.size(); i++)
	{
		if (scores[i] > iHigestScore)
		{
			iHS_Counter++;
			iHigestScore = scores[i];
		}
		else if(scores[i] < iLowestScore)
		{
			iLS_Counter++;
			iLowestScore = scores[i];
		}
	}

	results.push_back(iHS_Counter);
	results.push_back(iLS_Counter);

	return results;
}

template<class T>
void print(vector<T> c){
	for_each(c.begin(), c.end(), [](T x) {cout << x << " "; });
}

int main()
{
	vector<int> c{ 3, 4, 21, 36, 10, 28, 35, 5, 24, 42 };
	print(breakingRecords(c));

	system("pause");
	return 0;
}