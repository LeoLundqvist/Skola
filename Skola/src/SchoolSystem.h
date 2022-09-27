#pragma once
#include "Student.h"
#include <vector>
#include <iostream>

class SchoolSystem
{
public:
	void Run();
	void AddStudent();
	void AddClass();
	void AddStudentToClass();
	void RemoveStudentFromClass();
	void RemoveClass();
	void InfoClass();
	void InfoStudent();

	std::vector<Student> students;
	std::vector<std::string> schoolClasses;
};
