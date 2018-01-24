/*
 * Person.h
 *
 *  Created on: Jan 24, 2018
 *      Author: tamer
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <string>

using namespace std;

class Person {
private:
	string firstname;
	string lastname;
	int age;
	string address;
	long phone;
	string city;
public:
	Person();
	Person(string fName,string lName, int age, long phone, string address, string city);
	virtual ~Person();
	void displayFullName();
};


#endif /* PERSON_H_ */
