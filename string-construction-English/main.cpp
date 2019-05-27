#include <iostream>
#include <climits>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <stack>
#include <vector>
#include <set>
#include <string>
#include <list>
#include <cmath>
#include <stdlib.h>     /* srand, rand */
using namespace std;


const int MAX_CHAR = 26 ;
// Complete the stringConstruction function below.
int stringConstruction(string s) {
	
	int cost = 0;
	string s2 = "";
	// vector for storing character occurrences 
	vector<int> v(MAX_CHAR, 0); 
	
	// increment vector index for every character of s 
	for (int i = 0; i < s.length(); i++) 
		v[s[i] - 'a'] = 1;

	// checking common substring of str2 in str1
	for (int j = 0; j < s.length(); j++)
	{
		if (v[s[j] - 'a'] == 1)
		{
			s2+=s[j];
			v[s[j] - 'a'] = 2;
			cost++;
		}
		else if(v[s[j] - 'a'] == 2)
		{
			s2+=s[j];
		}
	}	
	cout << s2 << endl;
	return cost;
}


int main(int argc,char** argv)
{
	cout << stringConstruction("abab") << endl;	

	system("pause");
	return 0;
}