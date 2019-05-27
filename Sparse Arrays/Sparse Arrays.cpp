// Sparse Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>    // std::any_of
#include <array>        // std::array
#include <vector>
#include <string>
#include <algorithm>
#include <time.h>
using namespace std;

void f(int i) {
	std::cout << i << ' ';
}

void printVector(vector<int> v){
	for_each(v.begin(), v.end(), f);
}

// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
	vector<int> vecfrequency;
	
	int sum = 0;
	for (size_t i = 0; i < queries.size(); i++)
	{
		for (size_t t = 0; t < strings.size(); t++)
		{
			if (queries[i] == strings[t])
				sum++;	
		}
		vecfrequency.push_back(sum);
		sum = 0;
	}
	return vecfrequency;
}

vector<int> matchingStringsEx(vector<string> strings, vector<string> queries) {
	vector<int> vecfrequency;

	int sum = 0;
	for (size_t i = 0; i < queries.size(); i++)
	{
		for (size_t t = 0; t < strings.size(); t++)
			if (queries[i] == strings[t])
				sum++;
		vecfrequency.push_back(sum);
		sum = 0;
	}
	return vecfrequency;
}

int main()
{

	vector<string> strings{ "aba","baba","aba","xzxb" };
	vector<string> queries{"aba","xzxb","ab"};

	vector<int> s = matchingStrings(strings,queries);
	
	printVector(s);
	
	system("pause");
}
/*
vector<string> strings{ "def","de","fgh"};
	vector<string> queries{"de","lmn","fgh"};
1 0 1



*/
/*vector<string> s{ "aa","bb","cc" };
printVector(s);
*/
//printVector(subSets("Mohamed"));