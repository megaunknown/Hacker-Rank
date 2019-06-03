// Ransom Note.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <climits>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <stack>
#include <vector>
#include <string>
#include <list>
#include <cmath>
#include <cstring>
#include <stdlib.h>     /* srand, rand */
using namespace std;

// Complete the checkMagazine function below.
void checkMagazine(vector<string> magazine, vector<string> note) {

	sort(magazine.begin(), magazine.end());
	sort(note.begin(), note.end());

	if (equal(magazine.begin(), magazine.end(), note.begin()))
	{
		cout << "No";
		return;
	}

	if (includes(magazine.begin(), magazine.end(), note.begin(), note.end()))
		cout << "Yes";
	else
		cout << "No";
}

int main()
{
	vector<string> mag  { "give", "me", "one", "grand", "today" ,"night" };
	vector<string> note { "give", "one", "grand", "today"};
	checkMagazine(mag, note);
	system("pause");
	return 0;
}
