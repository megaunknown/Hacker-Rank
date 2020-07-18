#include "pch.h"
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

struct query
{
	int i;
	int j;
};

vector<int> lineToVector(std::string line)
{
	vector<int> v;
	const char* delm = " ";	//char delimiter
	char* next_token;		//carry out the rest of the string
	char* token;			//token
	int c = 0;
	token = strtok_s((char*)line.c_str(), delm, &next_token);
	while (token)
	{
		if (c > 0)
		{
			v.push_back(atoi(token));
			token = strtok_s(NULL, delm, &next_token);
		}
		c++;
	}
	return v;
}

vector<int>* populateVectors(std::vector<std::string> lines)
{
	vector<int>* c;
	c = new vector<int>[lines.size()];

	for (int i = 0; i < lines.size(); i++)
	{
		c[i] = lineToVector(lines[i]);
	}
	return c;
}

/*
	get number of lines from the user....
*/
vector<std::string> readLines(int numOfLines)
{
	std::vector<std::string> lines;
	std::string line;

	int currentLineIndex = 0;

	while (std::getline(std::cin >> std::ws, line)) {

		if (!line.empty())
			lines.push_back(line);

		currentLineIndex++;

		if (currentLineIndex == numOfLines)
			break;
	}
	return lines;
}

/*
get queries from the user
*/
vector<query> readQueries(int numOfQueries) {

	vector<query> Q;

	for (size_t i = 0; i < numOfQueries; i++)
	{
		query q;
		cin >> q.i >> q.j;

		Q.push_back(q);
	}

	return Q;
}



int main(int argc, char** argv)
{
	//getting n and q from the user.
	int n = 0, q = 0;
	cin >> n >> q;

	std::vector<int>* vecN = populateVectors(readLines(n));
	std::vector<query> vecQ = readQueries(q);

	for (int x = 0; x < vecQ.size(); x++)
	{
		query q = vecQ[x];
		int i = q.i, j = q.j;

		cout << vecN[i][j+1] << endl;
	}
	
	system("pause");
}


/*
vector<int> queueToVector(queue<int> q)
{
	vector<int> v;
	while (!q.empty())
	{
		v.push_back(q.front());
		q.pop();
	}

	return v;
}
*/