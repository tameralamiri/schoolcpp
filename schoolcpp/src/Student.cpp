/*
 * Student.cpp
 *
 *  Created on: Jan 24, 2018
 *      Author: tamer
 */

#include "Student.h"
#include <iostream>

Student::Student()
	: course("Unknown course")
{
	// TODO Auto-generated constructor stub
	cout << "Empty Student Constructor" << endl;
}

Student::Student(string fName,string lName, int yo, long phoneNum, string ads, string cty, string crs)
	: Person( fName, lName, yo, phoneNum, ads, cty), course(crs)
{
	// TODO Auto-generated constructor stub

}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

void Student::displayCourse(){
	cout << course << endl;
}
