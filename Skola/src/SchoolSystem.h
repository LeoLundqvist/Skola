#pragma once
#include "Student.h"
#include <vector>
#include <iostream>

class SchoolSystem
{
public:
	void Run();
	void AddStudent(std::string name, int age);
	void AddClass(std::string classname);
	void AddStudentToClass(std::string classname);

	void RemoveStudent(std::string name, int age);
	void RemoveClass();
	void InfoClass(std::string input);
	void InfoStudent();




	std::vector<Student> students;
	std::vector<std::string> schoolClasses;
};
