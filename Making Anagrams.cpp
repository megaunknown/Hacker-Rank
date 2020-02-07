// Making Anagrams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
using namespace std;


int makeAnagram(string a, string b) {
	map<char, tuple<int,int>> freqTable;

	//Construct Freq Table
	for (char cCounter = 'a'; cCounter <= 'z'; cCounter++)
		freqTable.insert(pair<char, tuple<int,int>>(cCounter,make_tuple(0,0)));

	for (int iCounter = 0; iCounter < a.length(); iCounter++)
		get<0>(freqTable[a[iCounter]])++;

	for (int iCounter = 0; iCounter < b.length(); iCounter++)
		get<1>(freqTable[b[iCounter]])++;

	map<char, tuple<int, int>>::iterator itr;

	int diffs = 0;
	for (itr = freqTable.begin(); itr != freqTable.end(); ++itr) {
		tuple<int, int> T = itr->second;
		diffs += abs(get<0>(T) - get<1>(T));
	}

	return diffs;
}

int main()
{
	std::string a = "cde";
	std::string b = "abc";

	cout << makeAnagram(a, b) << endl;
	/*
	a = "";
	b = "";
	cout << makeAnagram(a, b) << endl;
	*/

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
