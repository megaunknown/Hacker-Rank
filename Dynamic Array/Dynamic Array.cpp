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
