#include "pch.h"
#include <iostream>
#include <climits>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <stack>
#include <vector>
#include <set>
#include <string>
#include <list>
#include <cmath>
#include <stdlib.h> 
#include <fstream>
using namespace std;

void printIntOfString(string s)
{
	for_each(s.begin(), s.end(), [](char c) {
		cout << setw(2) << (int)c << " ";
	});
}
void print(vector<string> vv)
{
	for (int i = 0; i < vv.size(); i++)
	{
		printIntOfString(vv[i]);
		cout << "\n";
	}
}




template<class T>
void printVector(vector<T> v){
	for_each(v.begin(), v.end(), [](T i) {cout << i << " "; });
}

string gridChallenge(vector<string> grid) {
	int i = 0, TopValue = 0, iCol = 0, iSize = grid.size();

	print(grid);
	//Sort the rows
	for (i = 0; i < iSize; i++)
		sort(grid[i].begin(), grid[i].end());
	cout << "\n";
	print(grid);
	//Check the columns
	for (int iRow = 0; iRow < iSize; ++iRow, ++iCol)
	{
		TopValue = grid[0][iCol];
		for (int j = iRow + 1; j < iSize; ++j)
		{
			if (grid[j][iCol] < TopValue)
				return "NO";
			else
				TopValue = grid[j][iCol];
		}
	}
	return "YES";
}

//read file into vector.
vector<long int> read(string fileName) {
	vector<long int> li;
	ifstream file;
	file.open(fileName);
	if (!file.is_open())
		return li;
	string word;
	while (file >> word)
		li.push_back(stoll(word, nullptr, 10));
	file.close();
	return li;
}



void main()
{
	vector<string> vec{ "ebacd","fghij","olmkn","trpqs","xywuv" };

	cout << gridChallenge(vec) << endl;

}