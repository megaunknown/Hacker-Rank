#include "pch.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;


int main() 
{
	int numberOfQueries;
	map<string, int> studentsQuizes;
	vector<tuple<int, string, int>> Queries;
	int qType,sScore;
	string sName;

	cin >> numberOfQueries;

	//fetch user queries.
	for (size_t i = 0; i < numberOfQueries; ++i)
	{
		cin >> qType;
		if (qType == 1)
		{
			cin >> sName;
			cin >> sScore;
			Queries.push_back(make_tuple(qType, sName, sScore));
		}
		else if (qType == 3 || qType == 2)
		{
			cin >> sName;
			Queries.push_back(make_tuple(qType, sName, -1));
		}
	}

	//eval user queries.
	for (size_t i = 0; i < numberOfQueries; ++i)
	{
		qType = std::get<0>(Queries[i]);
		sName = std::get<1>(Queries[i]);
		sScore = std::get<2>(Queries[i]);

		if (qType == 1)
		{
			if (studentsQuizes.find(sName) == studentsQuizes.end())
			{
				studentsQuizes.insert(pair<string, int>(sName,sScore));
			}
			else
			{
				studentsQuizes[sName] += sScore;
			}
		}
		else if (qType == 2)
		{
			studentsQuizes[sName] = 0;
		}
		else if (qType == 3)
		{
			cout << studentsQuizes[sName] << '\n';
		}

	}
	return 0;
}
