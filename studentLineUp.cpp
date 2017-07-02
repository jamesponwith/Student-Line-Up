// Student_Line_Up_Project.cpp : Defines the entry point for the console application.
//
//// A teacher has asked all her students to line up single file according to their first name. 
/// For example, in one class Amy will be at the front of the line and yolanda will be at the end. Write a program that prompts 
////the user to enter the number of students in the class, then loops to read that many names. Once all the names have been read
/// it reports which student would be at the front of the line and whcih would be at the back of the line. You may assume that 
////no two students have the same name.

#include "stdafx.h"
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
	// Initalilize variables

	int number_of_students;
	string student_name, first_in_line, last_in_line;
	int count = 0;

	////Asking for number of students in class 

	cout << "Please enter the number of students: ";
	cin >> number_of_students;

	// While loop to validate number of student input

	while (number_of_students < 1 || number_of_students>25)
	{
		cout << "Error, please re-enter a value between 1 and 25"<<endl;
		cin >> number_of_students;
	}

	// for loop to ask for names and place the first and last names in postition 
	cout << "Please enter student name: " << endl;

	cin >> student_name;
	first_in_line = student_name;
	last_in_line = student_name;

	for (count = 0; count < number_of_students - 1; count++)
	{

		cin >> student_name;

		if (student_name > last_in_line) {
			last_in_line = student_name;
		}
		else if (student_name < first_in_line)
		{
			first_in_line = student_name;
		}
	}

	// Output end result 

	cout << "The first person in line is " << first_in_line << endl;
	cout << "The last in line is " << last_in_line << endl;

	system("pause");
	
	
	return 0;
}

