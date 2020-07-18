#include "pch.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <stdlib.h>     /* srand, rand */
using namespace std;

class NewSol {
public:
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