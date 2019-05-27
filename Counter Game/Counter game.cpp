#include "pch.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <bitset>
#include <math.h>       /* log2 */

using namespace std;

#define MAX_BIT_STREAM_SIZE 64

bool isPowerOf2(long n)
{
	bool bResult = false;
	//Convert the given value to BitStream.
	std::string binStream = std::bitset<MAX_BIT_STREAM_SIZE>(n).to_string();
	//Check How many ones in the bitstream if it's ONE only and Not The last Character then it's POWER of 2.
	if (count(binStream.begin(), binStream.end(), '1') == 1 && binStream[binStream.size()-1] != '1')
		bResult = true;
	return bResult;
}

long getLowerPowerOf2(long n)
{
	//Convert the value to Binary
	std::string binStream = std::bitset<MAX_BIT_STREAM_SIZE>(n).to_string();
	//Find first 1 in the sequence.
	string::iterator it = find(binStream.begin(), binStream.end(), '1');
	//Fetch the index of the first one.
	int iIndex = it - binStream.begin();
	//Initialize the ZERO bit stream.
	binStream = std::bitset<MAX_BIT_STREAM_SIZE>(0).to_string();
	//Set the Bit 
	binStream[iIndex] = '1';
	//To convert the bit stream  to Long value.
	std::bitset<MAX_BIT_STREAM_SIZE> finalValue(binStream);
	//return the value 
	return finalValue.to_ulong();
}

// Complete the counterGame function below.
string counterGame(long n) {
	int iCounter = 0;
	while (n != 1)
	{
		if (isPowerOf2(n)){		
			n /= 2;
			iCounter++;
		}
		else {
			n -= getLowerPowerOf2(n);
			iCounter++;
		}
	}
	return iCounter%2 == 0 ? "Richard" : "Louise" ;
}

int main()
{
	cout << getLowerPowerOf2(6) << endl;

	system("pause");
	return 0;
}
