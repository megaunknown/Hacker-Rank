#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>     // std::string, std::to_string
using namespace std;

template<class T>
void print(vector<T> c) {
	for_each(c.begin(), c.end(), [](T x) {
		cout << x << " "; 
	});
}

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {

	vector<int> vecKaprekar;
	bool bFlagRightPartIsZero = false;
	int org,d = 0, ileft = 0, iRight = 0, iRightStartIndex = 0;
	unsigned long long squared;
	string s;
	
	for (size_t i = p; i <= q; i++)
	{
		org = i;
		squared = powl(org, 2);
		s = to_string(squared);

		if (s.length() == 1)
		{
			ileft = atol(s.c_str());
			iRight = 0;
		}
		else if (s.length() % 2 == 0)
		{
		//	cout << i << " squared " << squared << endl;
			ileft = atol(s.substr(0, s.length() / 2).c_str());
			iRight = atol(s.substr(s.length() / 2, s.length() - s.length() / 2).c_str());
		//	cout << "Left " << ileft << " right " << iRight << endl;
			if (iRight == 0)
				bFlagRightPartIsZero = true;
		}
		else {
			d = to_string(i).length();
		//	cout << i << " squared " << squared << endl;
			iRightStartIndex = s.size() - d;
			iRight = atol(s.substr(iRightStartIndex, s.size() - iRightStartIndex+1).c_str());
			ileft = atol(s.substr(0, iRightStartIndex).c_str());

		//	cout << "Left " << ileft << " right " << iRight << endl;
			if (iRight == 0)
				bFlagRightPartIsZero = true;
		}

		if (!bFlagRightPartIsZero)
		{
			if (org == (ileft + iRight))
				vecKaprekar.push_back(org);
		}

		bFlagRightPartIsZero = false;
	}

	if (vecKaprekar.size() == 0)
		cout << "INVALID RANGE";
	else
	{
		for_each(vecKaprekar.begin(), vecKaprekar.end(), [](int x) {
			cout << x << " ";
		});
	}
}

int main()
{
	kaprekarNumbers(77778, 99999);

	system("pause");
	return 0;
}
