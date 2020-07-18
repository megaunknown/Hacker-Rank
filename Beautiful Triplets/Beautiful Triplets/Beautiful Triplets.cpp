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