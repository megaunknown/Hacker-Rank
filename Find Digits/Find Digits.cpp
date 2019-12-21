// Find Digits.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
#include <stdlib.h>     /* srand, rand */
using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
	int counter = 0;
	string s = to_string(n);
	for (int i = 0; i < s.length(); ++i)
	{
		int ix = (int)s[i];
		ix -= 48;
		if (ix != 0) {
			if (n % ix == 0)
				counter++;
		}
		
	}
	return counter;
}

int main()
{
	cout << findDigits(1012) << endl;
	system("pause");
	return 0;
}
