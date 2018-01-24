/*
 * Student.h
 *
 *  Created on: Jan 24, 2018
 *      Author: tamer
 */
#pragma once
#ifndef STUDENT_H_
#define STUDENT_H_
#include "Person.h"


class Student : public Person
{
private:
	string course;
public:
	Student();
	Student(string fName,string lName, int age, long phone, string address, string city, string course);
	virtual ~Student();
	void displayCourse();
};

#endif /* STUDENT_H_ */
