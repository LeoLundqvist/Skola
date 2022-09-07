#pragma once
#include "Student.h"
#include <vector>
#include <iostream>

class SchoolSystem
{
public:
	void Run();
	void AddStudent(std::string name, int age);
	void RemoveStudent();
	void AddClass(std::string classname);
	void RemoveClass();
	void InfoClass();
	void InfoStudent();




	std::vector<Student> students;
	std::vector<std::string> schoolClasses;
};
