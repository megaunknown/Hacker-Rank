// sam-and-substrings-English.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <time.h>
#include <numeric>      // std::accumulate

using namespace std;

int sumVec(vector<long> v) {
	long long int iSum = 0;
	long long int res;
	
	iSum=	accumulate(v.begin(), v.end(), iSum);

	long long int MY_MAX = (pow(10, 9) + 7);
	
	if (iSum > MY_MAX)
		res = iSum % MY_MAX;
	else
		res = iSum;

	return res;
}

/*
	input: "123"
	output: 1,2,3,12,23,123 
*/
vector<long> shredder(std::string s)
{
	vector<long> v;
	int iStart = 0,iLen = 1,iIteration = s.length();

	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < iIteration; j++)
		{			
			v.push_back(atol(s.substr(iStart, iLen).c_str()));
			iStart++;
		}
		iIteration--;
		iLen++;
		iStart = 0;
	}

	for_each(v.begin(), v.end(), [](long v) {
		cout << "{" << v << "}\n";
	});

	return v;
}





int main()
{
	string nStr = to_string(123);
	vector<long> dd = shredder(nStr);
	/*cout << sumVec(dd) << endl;*/

	//cout << pow(10, 9) + 7 << endl;
	//cout << MAX << endl;

	system("pause");
	return 0;
}


//vector<long long int> shredderEx(std::string s)
//{
//	vector<long long int> v;
//	int iStart = 0;
//	int iLen = 1;
//	int iIteration = s.length();
//	for (int i = 0; i < s.length(); i++)
//	{
//		for (int j = 0; j < iIteration; j++)
//		{
//			v.push_back(atoll(s.substr(iStart, iLen).c_str()));
//			iStart++;
//		}
//		iIteration--;
//		iLen++;
//		iStart = 0;
//		//cout << "\n";
//	}
//	return v;
//}