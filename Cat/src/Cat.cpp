//============================================================================
// Name        : Cat.cpp
// Author      : Nathaniel-Joel Parizi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;


Cat::Cat(){

	cout << "Cat created" << endl;

}

Cat::~Cat(){
	cout << "cat destroyed" << endl;
}

// This is a member of the cat class, that's why we use ::
void Cat::speak() {

	if (happy == true) {
		cout << "MEOW" << endl;

	} else {
		cout << "SSSss!!" << endl;
	}

}

void Cat::makeSad() {

	happy = false;

}

void Cat::makeHappy() {

	happy = true;
}

void Cat::jump() {
	cout << "The cat jumps high" << endl;
}

//string Cat::toString(){
//	return "What's up I'm a cat!";
//}

