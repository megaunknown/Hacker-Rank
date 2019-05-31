// Beautiful Triplets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <climits>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <numeric>
#include <stack>
#include <vector>
#include <tuple>
#include <string>
#include <list>
#include <cmath>
#include <cstring>
#include <stdlib.h>     /* srand, rand */
using namespace std;

//vector<int>  diffs(int x, vector<int> a)
//{
//	vector<int> diffsValue;
//	for (int i = 0; i < a.size(); i++)
//		diffsValue.push_back(abs(x - a[i]));
//
//	return diffsValue;
//}
//
//void print(vector<int> x)
//{
//	for_each(x.begin(), x.end(), [](int v) {
//		cout << v << " ";
//	});
//	cout << endl;
//}
//ostream& operator<<(ostream& out,tuple<int, int, int>& v)
//{
//	out << "(" << get<0>(v) <<","  << get<1>(v) << "," << get<2>(v) << ")";
//}
//void print(vector<tuple<int, int, int>> x)
//{
//	for_each(x.begin(), x.end(), [](tuple<int, int, int> v) {
//		cout << "(" << get<0>(v) << "," << get<1>(v) << "," << get<2>(v) << ")";
//
//	});
//	cout << endl;
//}
//
//vector<tuple<int, int, int>> BeautifulTriplets(vector<int> a,int d)
//{
//	vector<tuple<int, int, int>>  btValues;
//	
//	for (int i = 0; i < a.size(); i++)
//	{
//		for (int j = i + 1; j < a.size(); j++)
//		{
//			if (a[i] < a[j] && abs(a[i] - a[j]) == d)
//			{
//				for (int v = j+1; v < a.size(); v++)
//				{
//					if (a[j] < a[v] && abs(a[j] - a[v]) == d)
//					{
//						btValues.push_back(make_tuple(a[i], a[j], a[v]));
//					}
//				}
//			}
//		}
//	}
//	return btValues;
//}

int Beautiful_Triplets(vector<int> a, int d)
{
	int iCounter = 0;

	for (int i = 0; i < a.size(); i++)
	{
		for (int j = i + 1; j < a.size(); j++)
		{
			if (a[i] < a[j] && abs(a[i] - a[j]) == d)
			{
				for (int v = j + 1; v < a.size(); v++)
				{
					if (a[j] < a[v] && abs(a[j] - a[v]) == d)
					{
						iCounter++;
					}
				}
			}
		}
	}
	return iCounter;
}
int main()
{
	vector<int> a{ 1, 2, 4, 5, 7 ,8, 10 };
	int d = 3;
	cout << Beautiful_Triplets(a, d);
	vector<int> v{ 2,2,3,4,5};
	d = 1;
	cout << Beautiful_Triplets(v, d);
	
	



	system("pause");
	return 0;
}