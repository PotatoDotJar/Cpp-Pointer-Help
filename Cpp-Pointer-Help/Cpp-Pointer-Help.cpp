/*
Cpp-Pointer-Help.cpp
Author: PotatoSauceVFX | 2017
*/

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// Declare functions
void randomNumberSetter(int* varToBeChanged);

// Declare integer for dad's room to be room 100
int dadsRoom = 100;

// Set pointer "mySon" to point to dad's room mem location. (The dad's son was told what room his dad is in)
int* mySon = &dadsRoom;

int main() {
	// Set seed to a "random number"
	srand(time(NULL));


	// Prints the address of dad's room variable
	cout << "Address is: " << &dadsRoom << endl;

	// Prints out the address of dad's room from mySon pointer
	cout << "Variable mySon is: " << mySon << endl;

	// Prints out 100 (Value located at mem address for dad's room)
	cout << "Variable *mySon is: " << *mySon << endl;

	// Call function for changing the value of dad's room number
	randomNumberSetter(&dadsRoom);
	cout << "Dad's room is now: " << dadsRoom << " after using &dadsRoom." << endl;

	// Call function for changing the value of dad's room number using the "mySon" pointer
	randomNumberSetter(mySon);
	cout << "Dad's room is now: " << dadsRoom << " after using the pointer \"mySon\"." << endl;



	// This is added to keep the program from terminating right away
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}

// Function for changing the value of a mem address location such as &dadsRoom (& calling the address of dad's room)
void randomNumberSetter(int* varToBeChanged) {
	*varToBeChanged = rand() % 10000;
}