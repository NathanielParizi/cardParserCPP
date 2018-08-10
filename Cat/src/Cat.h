/*
 * Cat.h
 *
 *  Created on: Aug 10, 2018
 *      Author: justi
 */



//functions that are apart of a class are called "Methods"
#include <iostream>
using namespace std;
#ifndef CAT_H_
#define CAT_H_


class Cat {

private:
	bool happy = false;
	int size;
	string name;


public:


	Cat(); // Constructor
	~Cat(); // Deconstructor

	void speak();   //prototype of the function speak
	void jump();
	void makeHappy();
	void makeSad();

	string getName();
	//void setName();

	//void toString();

};

#endif /* CAT_H_ */
