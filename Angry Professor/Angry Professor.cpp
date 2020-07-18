// Angry Professor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
using namespace std;

// Complete the angryProfessor function below.
string angryProfessor(int k, vector<int> a) {
	string strResult = "NO";
	int iEarlyOnTime = 0;

	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] < 0 || a[i] == 0)
			iEarlyOnTime++;
	}

	if (!(iEarlyOnTime >= k))
		strResult = "YES";

	return strResult;
}

int main()
{	
	return 0;
}