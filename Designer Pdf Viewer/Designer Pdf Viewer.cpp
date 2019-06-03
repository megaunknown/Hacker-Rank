// Designer Pdf Viewer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Complete the designerPdfViewer function below.
int designerPdfViewer(vector<int> h, string word) {
	vector<int> heights(word.length());
	for (int i = 0; i < word.length(); i++)
	{
		heights[i] = h[word[i]-97];
	}
	int max = *max_element(heights.begin(), heights.end());

	return max * word.length();
}
int main()
{
	vector<int> alpha{ 1, 3, 1, 3, 1, 4 ,1, 3, 2 ,5 ,5, 5, 5, 5 ,5, 5 ,5, 5, 5 ,5 ,5 ,5 ,5 ,5 ,5 ,5 };
	cout << designerPdfViewer(alpha, "abc") << endl;
	system("pause");
	return 0;
}
