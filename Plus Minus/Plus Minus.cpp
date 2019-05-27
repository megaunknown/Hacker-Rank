// Plus Minus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;



// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
	double n=0, p=0, z=0;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(6);
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] < 0)
			n++;
		else if (arr[i] == 0)
			z++;
		else if (arr[i] > 0)
			p++;
	}
	double SUM = p + n + z;
	cout << p / SUM << endl;
	cout << n / SUM << endl;
	cout << z / SUM << endl;
}


int main(int argc, char** argv) {
	/*
	0.428571
	0.571429
	0.000000
	*/
	vector<int>  v{ 1 ,-2 ,-7 ,9, 1, -8,-5 };

	plusMinus(v);


	system("pause");
	return 0;
}
