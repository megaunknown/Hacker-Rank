// Jumping Clouds.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
#include <stdlib.h>     /* srand, rand */
using namespace std;


//stupid solution...can be better.
int jumpingOnClouds(vector<int> c);
bool CanStepOver(int c[], int len, int i, int& steps);
vector<int> convertIntArrayToVector(int c[], int size);
void print(int vec[], int size);


bool CanStepOver(int c[], int len, int curIndex, int& steps)
{
	bool bCan = false;
	//Check next 2 integers
	if ((curIndex + 1 < len) && (c[curIndex + 1] == 0) && (curIndex + 2 < len) && (c[curIndex + 2] == 0))
	{
		steps = 2;
		bCan = true;
	}//Check next integer
	else if ((curIndex + 1 < len) && (c[curIndex + 1] == 0))
	{
		steps = 1;
		bCan = true;
	}

	return bCan;
}

int jumpingOnClouds(vector<int> c) {

	int len = c.size();

	int i = 0, steps = 0, iJump = 0;
	bool prevIsOne = false;

	int* clouds = new int[c.size()];
	for (i = 0; i < c.size(); i++)
		clouds[i] = c[i];

	for (i = 0; i < len; )
	{
		if (clouds[i] == 0)
		{
			if (prevIsOne)
			{
				prevIsOne = false;
				iJump++;
			}

			if (CanStepOver(clouds, len, i, steps))
			{
				iJump++;
				i += steps;
			}
			else
			{
				i++;
			}
		}
		else
		{
			prevIsOne = true;
			i++;
		}
	}

	return iJump;
}



int main()
{
	//int arr[] = {0, 0, 1, 0, 0, 1, 0};
	//int arr[] = {0 ,0 ,0, 0, 1, 0};
	int arr[] = { 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0 };

	print(arr, sizeof(arr) / sizeof(int));

	vector<int> v = convertIntArrayToVector(arr, sizeof(arr) / sizeof(int));

	cout << jumpingOnClouds(v) << endl;

	system("pause");
	return 0;
}

vector<int> convertIntArrayToVector(int c[], int size)
{
	vector<int> v;
	for (int i = 0; i < size; i++)
		v.push_back(c[i]);
	return v;
}

void print(int vec[], int size)
{
	for (int i = 0; i < size; i++)
		cout << vec[i] << " ";
}