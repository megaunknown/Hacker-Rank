// Lonely Integer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iostream>     // std::cout
#include <algorithm>    // std::transform
#include <vector>       // std::vector
#include <functional>   // std::plus
#include <algorithm>
#include <bitset>
using namespace std;
vector<int> c;
// Complete the lonelyinteger function below.
int lonelyinteger(vector<int> a) {
	if (a.size() == 2 && a[0] == a[1])
		return a[0];
	int lonelyInt;
	for (int i = 0; i < a.size(); ++i)
	{

		if (std::count(a.begin(), a.end(), a[i]) == 1)
		{
			lonelyInt = a[i];
			break;
		}
	}
	return lonelyInt;
}
void check(int i)
{
	
}


int main()
{
	vector<int> v{ 1,2,3,4,1,2,3 };
	cout << lonelyinteger(v) << endl;
	system("pause");
	return 0;
}
