// Alternating Characters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class solution
{
public:
	 static int minimum(std::string s) {
		 int iCounter = 0;
		 stack<char> stack;

		 for (int i = 0; i < s.length() ; i++)
		 {
			 if (stack._Get_container().size() == 0)
				 stack.push(s[i]);
			 else
			 {
				 if (stack.top() == s[i])
					 iCounter++;
				 else
					 stack.push(s[i]);
			 }
		 }
		 return iCounter++;
	}
};

int main()
{
   //Test
	string s = "AABAAB";
	vector<string> TestCases ={
			"AAAA",
			"BBBBB",
			"ABABABAB",
			"BABABA",
			"AAABBB"
	};

	for(auto item : TestCases)
		cout << solution::minimum(item) << endl;

	system("pause");
	return 0;
}
