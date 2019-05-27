// Dynamic Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
	vector<int> seqList;
	int lastAnswer = 0;
	vector<vector<int>> sequences(n);


	for (int i = 0; i < queries.size(); i++)
	{
		vector<int> v = queries[i];
		int t, x, y;
		t = v[0]; x = v[1]; y = v[2];
		int seq;
		if (t == 1)
		{
			seq = (x ^ lastAnswer) % n;
		//	seqList[seq] = y;
			sequences[seq].push_back(y);
		}
		else if (t == 2)
		{
			seq = (x ^ lastAnswer) % n;
			int x = y % sequences[seq].size();
			lastAnswer = sequences[seq][x];
			seqList.push_back(lastAnswer);
			//cout << lastAnswer << endl;
		}
	}

	return seqList;
}

void printV(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
}

int main()
{
	/*
	2 5
	1 0 5
	1 1 7
	1 0 3
	2 1 0
	2 1 1
	*/
	int N, Q;
	cin >> N >> Q;
	vector<vector<int>> queries;
	for (int i = 0; i < Q; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		vector<int> v{a,b,c};
		queries.push_back(v);
	}

	vector<int> res = dynamicArray(N, queries);
	printV(res);

	system("pause"); 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
