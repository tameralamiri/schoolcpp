//============================================================================
// Name        : schoolcpp.cpp
// Author      : Tamer Alamiri
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
#include "Student.h"

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Student student1;
	student1.displayFullName();
	student1.displayCourse();
	return 0;
}
