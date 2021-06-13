// ReversingNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int number, reversedNumber=0;
	
	cout << "Number:";
	cin >> number;
	while (number != 0) {
		reversedNumber *= 10;
		int lastDigit = number % 10;
		reversedNumber += lastDigit;
		number /= 10;
	}
	cout << "Reversed: " << reversedNumber;
}


