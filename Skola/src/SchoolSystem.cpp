#include "SchoolSystem.h"

void SchoolSystem::Run()
{

	int switchNum = 0;

	while (true)
	{
		//Menyn
		std::cout << "SchoolSystem\n";
		std::cout << "1. Create new Class\n";
		std::cout << "2. Create new student\n";
		std::cout << "3. Add student to class\n";
		std::cout << "4. Remove student from class\n";
		std::cout << "5. Remove student from schoolsystem\n";
		std::cout << "6. Find info about student\n";
		std::cout << "7. Find info about class\n";
		std::cout << "8. Check if student exists\n";
		std::cout << "9. Exit\n";


		//Input
		std::cin >> switchNum;
		
		switch(switchNum)
		{
			case 1:
				AddClass();
				break;

			case 2:
				AddStudent();
				break;

			case 3:
				AddStudentToClass();

				break;

			case 4:
				RemoveStudentFromClass();

				break;

			case 5:
				RemoveStudent();

				break;

			case 6:
				InfoStudent();

				break;

			case 7:
				InfoClass();

				break;

			case 8:
				CheckStudent();

				break;

			case 9:

				return;

		}
	}
}

void SchoolSystem::AddClass()
{
	std::string className = "";
	std::cout << "Write a classname\n";
	std::cin >> className;
	schoolClasses.push_back(className);
	std::cout << "Class " << className << " created\n";
}

void SchoolSystem::AddStudent()
{
	std::string name = "";
	int age = 0;
	Student student; 

	std::cout << "Write the students name\n";
	std::cin >> name;
	std::cout << "Write the students age\n";
	std::cin >> age;

	student.name = name;
	student.age = age;
	students.push_back(student);
}

void SchoolSystem::AddStudentToClass()
{
	std::string className = "";
	std::string studentName = "";
	std::string YNInput = "";

	std::cout << "Write the class name\n";
	std::cin >> className;

	std::cout << "Which student do you want to add the class?\n";
	std::cin >> studentName;
	
	//checks if className is in schoolClasses vector
	if (!std::count(schoolClasses.begin(), schoolClasses.end(), className))
	{
		std::cout << "The class " << className << " doesn't exist\n";
		std::cout << "Do you want to make this into a class and add the student to it?\ny/n\n";
		std::cin >> YNInput;
		//if you dont want to create a new class
		if (YNInput == "n") return;
	}

	for (auto& i : students)
	{
		if (i.name == studentName)
		{
			//if you want to create a new class
			if (YNInput == "y") schoolClasses.push_back(className);

			//the students class is saved
			i.classname = className;
			std::cout << "Student " << i.name << " is added to the class " << i.classname << "\n";
			return;
		}
	}
	std::cout << "Student " << studentName << " doesn't exist\n";
}

void SchoolSystem::CheckStudent()
{
	std::string name = "";
	std::cout << "Write student name\n";
	std::cin >> name;
	
	//checks if school
	if (!std::count(students.begin(), students.end(), name))
	{
		std::cout << "The Student " << name << " doesn't exist\n";
		return;
	}
}

void SchoolSystem::RemoveStudentFromClass()
{
	std::string name = "";
	std::cout << "Write the students name\n";
	std::cin >> name;

	for (auto i : students)
	{
		if (i.name == name)
		{
			//if the class is empty it means that no class has been added
			if (i.classname == "")
			{
				std::cout << name << " doesn't have a class\n";
				return;
			}
			std::cout << name << " was removed from " << i.classname << "\n";
			i.classname = "";
			return;
		}
	}
	//the only way that this line gets read is if no student has the name of your input
	std::cout << "Student not found\n";
}

void SchoolSystem::RemoveStudent()
{
	std::string name;
	std::cout << "Write the students name\n";
	std::cin >> name;

	for (int i = 0; i < students.size(); i++)
	{
		if (name == students[i].name)
		{
			std::cout << students[i].name << " was removed from the system";
			students.erase(students.begin() + i);
			break;
		}
	}
}

void SchoolSystem::InfoClass()
{
	int counter = 1;
	std::string className = "";
	std::cout << "Write a classname\n";
	std::cin >> className;

	if (!std::count(schoolClasses.begin(), schoolClasses.end(), className))
	{
		std::cout << "Class not found\n";
		return;
	}

	for (auto& i : students)
	{
		if(i.classname == className)
		{
			std::cout << "Student " << counter << ": " << i.name << "\n";
			counter++;
		}
	}	
}

void SchoolSystem::InfoStudent()
{
	std::string input = "";
	std::cout << "Write the students name\n";
	std::cin >> input;

	for (auto i : students)
	{
		if(input == i.name)
		{
			std::cout << "Name: " << i.name << "\n";
			std::cout << "Age: "<< i.age << "\n";
			std::cout << "Class: " << i.classname << "\n\n";
			return;
		}
	}
	std::cout << "Student not found";
}