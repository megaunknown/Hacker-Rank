#include "pch.h"
#include <iostream>
#include <climits>
#include <string>
#include <algorithm>
#include <sstream>
#include <stack>
#include <vector>
#include <list>
#include <cmath>
#include <stdlib.h> 
#include <cctype>
#include <iomanip>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

	int iCounter = 0;
	int alt = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'U')
		{
			alt++;
			if (alt == 0)
				iCounter++;
		}
		else
		{
			alt--;
		}
	}
	return iCounter;
}


int main()
{
	cout << countingValleys(12, "DDUUDDUDUUUD") << endl;

	system("pause");
	return 0;
}