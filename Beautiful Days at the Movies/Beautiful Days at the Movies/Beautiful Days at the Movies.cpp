// Beautiful Days at the Movies.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>     // std::string, std::to_string
#include <algorithm>    // std::reverse
using namespace std;

int beautifulDays(int i, int j, int k) {
	int iIsBeautiful = 0;
	float frac = 0;
	double iresult = 0;
	int irevnumval = 0;
	std::string::size_type sz;   // alias of size_t
	std::string s1, s2;

	for (int d = i; d <= j; d++)
	{
		s1 = s2 = to_string(d);
		s2.reserve();

		irevnumval = std::stoi(s2, &sz);

		iresult = (d - irevnumval) / k;
		frac = iresult - (int)iresult;
		if (frac == 0)
			iIsBeautiful++;
	}

	return iIsBeautiful;
}

int main()
{
    std::cout << "Hello World!\n"; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
