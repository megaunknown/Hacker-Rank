#include "pch.h"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Complete the hurdleRace function below.
int hurdleRace(int k, vector<int> height) {
	int iMax = *std::max_element(height.begin(), height.end());
	if (iMax > k)
		return iMax - k;
	return 0;
}

int main()
{
   
	system("pause");
	return 0;
}