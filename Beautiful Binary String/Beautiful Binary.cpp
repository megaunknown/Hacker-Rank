// Beautiful Binary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;


bool IsMaching(string s, int index) {
	bool bResult = false;
	int len = s.length();

	if (index + 1 >= len || index + 2 >= len)
		return false;

	if (s[index] == '0' && s[index + 1] == '1' && s[index + 2] == '0')
		bResult = true;

	return bResult;
}
// Complete the beautifulBinaryString function below.
int beautifulBinaryString(string b) {

	int iCounter = 0;
	int iStart = 0;

	for (int iStartIndex = 0; iStartIndex < b.length(); ) {
		if (IsMaching(b, iStartIndex)) {
			iCounter++;
			iStartIndex += 3;
		}
		else {
			iStartIndex++;
		}
	}
	return iCounter;
}
int main()
{
	cout << beautifulBinaryString("0101010") << endl;

	system("pause");
	return 0;
}
