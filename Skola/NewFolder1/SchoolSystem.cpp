#include "SchoolSystem.h"

void SchoolSystem::Run()
{
	int counter = 0;
	while (true)
	{
		//Menyn
		//Input
		//Feedback
		std::cout << "Loop: " << counter << "\n";
		counter++;
		std::cin.get();
	}
}

void SchoolSystem::AddStudent()
{
	Student student;
	student.name = "blabal";
	student.age = 123;
	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{

}
