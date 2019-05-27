// Mini-Max Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << "  ";
}

void getMaxMin(long long arr[], int size)
{
	long long iMin = LONG_MAX, iMax = LONG_MIN, x, xIndex, sum;

	for (int i = 0; i < size; i++)
	{
		xIndex = i;
		x = arr[xIndex];
		arr[xIndex] = 0;

		for (int j = 0; j < size; j++)
			sum += arr[j];

		arr[xIndex] = x;

		if (sum > iMax)
			iMax = sum;

		if (sum < iMin)
			iMin = sum;

		sum = 0;
	}
	cout << iMin << " " << iMax << endl;
}

void miniMaxSum(vector<long long > arr) {
	unsigned long long iMin = INT_MAX, iMax = INT_MIN, x, xIndex, sum;

	for (int i = 0; i < arr.size(); i++)
	{
		xIndex = i;
		x = arr[xIndex];
		arr[xIndex] = 0;

		for (int j = 0; j < arr.size(); j++)
			sum += arr[j];

		arr[xIndex] = x;

		if (sum > iMax)
			iMax = sum;
		else if (sum < iMin)
			iMin = sum;

		sum = 0;
	}
	cout << iMin << " " << iMax << endl;
}

int main(int argc, char** argv) {
	/*
		1640793344 2199437821
	*/
	long long a[] = { 769082435, 210437958, 673982045, 375809214, 380564127 };

	getMaxMin(a, 5);

	return 0;
}