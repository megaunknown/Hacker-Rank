// 2D Array - DS CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <stdlib.h>     /* srand, rand */
using namespace std;

class OldSol;

class NewSol {
public:
	//Calculate HourGlassSum For Multi-Dim Array
	/*int GetHourGlassSumValue(int** ss, int iStartCol, int iStartRow)
	{
		int iSum = 0;

		if (iStartCol + 3 > 6 || iStartRow + 3 > 6)
			return 0;

		iSum = ss[iStartRow][iStartCol] + ss[iStartRow][iStartCol + 1] + ss[iStartRow][iStartCol + 2];
		iSum += ss[iStartRow + 1][iStartCol + 1];
		iSum += ss[iStartRow + 2][iStartCol] + ss[iStartRow + 2][iStartCol + 1] + ss[iStartRow + 2][iStartCol + 2];

		return iSum;
	}*/

	//Calculate HourGlassSum For Vec of Vec
	int GetHourGlassSumValue(vector<vector<int>> ss, int iStartCol, int iStartRow)
	{
		int iSum = 0;

		if (iStartCol + 3 > 6 || iStartRow + 3 > 6)
			return 0;

		iSum = ss[iStartRow][iStartCol] + ss[iStartRow][iStartCol + 1] + ss[iStartRow][iStartCol + 2];
		iSum += ss[iStartRow + 1][iStartCol + 1];
		iSum += ss[iStartRow + 2][iStartCol] + ss[iStartRow + 2][iStartCol + 1] + ss[iStartRow + 2][iStartCol + 2];

		return iSum;
	}

	//Find Max, max_element can substitute in case if I saved the result of Calc in vec/array. 
	int FindMax(vector<vector<int>> c)
	{
		int iMax = INT_MIN;
		
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				int v = GetHourGlassSumValue(c, i, j);
				if (v > iMax)
					iMax = v;
			}
		}
		return iMax;
	}


private:
	//Test Case 
	vector<vector<int>> arr{
					{-9,-9,-9,1,1,1},
					{0,-9,0, 4,3, 2},
					{-9,-9,-9,1,2,3},
					{0,0,8,6,6,0},
					{0,0,0,-2,0,0},
					{0,0,1,2,4,0} };
};



int main()
{
	vector<vector<int>> arr{
						{0 ,-4, -6 ,0, -7 ,-6},
						{-1, -2 ,-6, -8 ,-3, -1},
						{-8 ,-4, -2, -8, -8 ,-6},
						{-3, -1 ,-2 ,-5, -7 ,-4},
						{-3 ,-5, -3, -6, -6 ,-6},
						{-3, -6, 0, -8 ,-6, -7}};
	NewSol s;
	cout << s.FindMax(arr) << endl;

	system("pause");
}
/*
Test Case 1
{-1 ,-1, 0 ,-9 ,-2 ,-2}
{-2 ,-1 ,-6 ,-8 ,-2 ,-5}
{-1 ,-1 ,-1 ,-2 ,-3 ,-4}
{-1 ,-9 ,-2 ,-4, -4 ,-5}
{-7 ,-3 ,-3 ,-2, -9 ,-9}
{-1 ,-3 ,-1, -2, -4, -5}

// -6
Test Case 2
{0 ,-4, -6 ,0, -7 ,-6},
{-1, -2 ,-6, -8 ,-3, -1},
{-8 ,-4, -2, -8, -8 ,-6},
{-3, -1 ,-2 ,-5, -7 ,-4},
{-3 ,-5, -3, -6, -6 ,-6},
{-3, -6,, 0, -8 ,-6, -7}


//-19


*/

class OldSol {
public:

	// Complete the hourglassSum function below.
	int hourglassSum(vector<vector<int>> vec)
	{
		int cap = vec.size();
		//Initialize New Matrix
		int** matrix = new int*[cap];
		for (int c = 0; c < cap; ++c)
			matrix[c] = new int[cap];

		//Convert Vector of Vectors to MultiDimention Array.
		int iCounter = 0;
		for (vector<vector<int>>::iterator it = vec.begin(); it != vec.end(); ++it)
		{
			vector<int> temp = *it;
			int size = temp.capacity();
			for (int j = 0; j < size; j++)
			{
				matrix[iCounter][j] = temp.at(j);
				cout << setw(2) << matrix[iCounter][j] << " ";
			}
			iCounter++;
			cout << "\n";
		}

		return 0;
	}

	int GetHourGlassSumValue(int** ss, int iStartCol, int iStartRow, int dim)
	{
		int iSum = 0;

		if (iStartCol + 3 > dim || iStartRow + 3 > dim)
			return 0;

		iSum = ss[iStartRow][iStartCol] + ss[iStartRow][iStartCol + 1] + ss[iStartRow][iStartCol + 2];
		iSum += ss[iStartRow + 1][iStartCol + 1];
		iSum += ss[iStartRow + 2][iStartCol] + ss[iStartRow + 2][iStartCol + 1] + ss[iStartRow + 2][iStartCol + 2];

		return iSum;
	}

	int** SetValues(int** arr, int dim)
	{
		//**********************************
		int** matrix = new int*[dim];
		for (int c = 0; c < dim; ++c)
			matrix[c] = new int[dim];
		//**********************************
		for (int i = 0; i < dim; i++)
			for (int j = 0; j < dim; j++)
				matrix[j][i] = GetHourGlassSumValue(arr, i, j, dim);
		return matrix;
	}

	int FindMax(int** matrix, int dim)
	{
		int iMax = 0;

		for (int i = 0; i < dim; i++)
		{
			for (int j = 0; j < dim; j++)
			{
				if (matrix[i][j] > iMax)
					iMax = matrix[i][j];
			}
		}
		return iMax;
	}


};