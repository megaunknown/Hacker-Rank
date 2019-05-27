// Flipping bits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <bitset>

using namespace std;

#define SIZE 32

unsigned long flippingBits(long n) {
	std::string binary = std::bitset<SIZE>(n).to_string();
	//cout << binary << endl;
	std::bitset<SIZE> bitStream(binary);
	//cout << bitStream << endl;
	bitStream.flip();
	//cout << bitStream << endl;

	/*long res = (long) bitStream.to_ulong();*/
	cout << bitStream.to_ulong() << endl;
	unsigned long x = 0ul;
	x = bitStream.to_ulong();
	//cout << "x :: " << x << endl;
	return x;
}


int main()
{
	cout << flippingBits(1) << endl;
	cout << flippingBits(4) << endl;
	cout << flippingBits(123456) << endl;
	cout << flippingBits(2147483647) << endl;
	cout << flippingBits(0) << endl;

	system("pause");
}
