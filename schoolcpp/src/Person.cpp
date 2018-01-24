/*
 * Person.cpp
 *
 *  Created on: Jan 24, 2018
 *      Author: tamer
 */

#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

Person::Person()
	: firstname("unknown name"), age(0)
{
	// TODO Auto-generated constructor stub
	cout << "This is the Person:Person empty constructer function" << endl;

}
Person::Person(string fName,string lName, int yo, long phoneNum, string ads, string cty){
	firstname = fName;
	lastname = lName;
	age = yo;
	phone = phoneNum;
	address = ads;
	city = cty;
}
void Person::displayFullName()
{
	cout << firstname << ", " << lastname << endl;
}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

