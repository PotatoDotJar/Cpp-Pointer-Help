/*
Cpp-Pointer-Help.cpp
Author: PotatoSauceVFX | 2017
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

// Declare integer for dad's room to be room 100
int dadsRoom = 100;

// Set pointer "mySon" to point to dad's room mem location. (The dad's son was told what room his dad is in)
int* mySon = &dadsRoom;

int main() {

	// Prints the address of dad's room variable
	cout << "Address is: " << &dadsRoom << endl;

	// Prints out the address of dad's room from mySon pointer
	cout << "Variable mySon is: " << mySon << endl;

	// Prints out 100 (Value located at mem address for dad's room)
	cout << "Variable *mySon is: " << *mySon << endl;

	// This is added to keep the program from terminating right away
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}

