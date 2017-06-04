/*
Cpp-Pointer-Help.cpp
Author: PotatoSauceVFX | 2017
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

// Declare dad's room to room 100
int dadsRoom = 100;

// Set pointer "mySon" to point to dad's room mem location
int* mySon = &dadsRoom;

int main() {

	// Prints the address
	cout << "Address is: " << &dadsRoom << endl;

	// Prints out the address of dad's room
	cout << "Variable mySon is: " << mySon << endl;

	// Prints out 100 (Value located at mem address)
	cout << "Variable *mySon is: " << *mySon << endl;


	cin.ignore(10, '\n');
	cin.get();
	return 0;
}

