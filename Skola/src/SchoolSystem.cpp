#include "SchoolSystem.h"

void SchoolSystem::Run()
{

	int num = 0;
	std::string input = "";
	int input2 = 0;

	while (true)
	{
		//Menyn
		std::cout << "SchoolSystem\n";
		std::cout << "1. Create new Class\n";
		std::cout << "2. Create new student\n";
		std::cout << "3. Add student to class\n";
		std::cout << "4. Switch students class\n";
		std::cout << "5. Remove student from class\n";
		std::cout << "6. Remove student from schoolsystem\n";
		std::cout << "7. Find info about student\n";
		std::cout << "8. Find info about class\n";
		std::cout << "9. Exit\n";

		//Input
		std::cin >> num;
		
		switch(num)
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

				break;

			case 5:
				RemoveStudentFromClass();
				break;

			case 6:

				break;

			case 7:
				InfoStudent();

				break;

			//Info about class
			case 8:
				InfoClass();
				

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

	std::cout << "Write the class name\n";
	std::cin >> className;

	std::cout << "Which student do you want to add the class?\n";
	std::cin >> studentName;
	
	for (auto& i : schoolClasses)
	{
		if (i != className)
		{
			std::cout << "The class " << className << " doesn't exist\n";
			return;
		}
	}

	for (auto& i : students)
	{
		if (i.name == studentName)
		{
			i.classname = className;
			std::cout << "Student " << i.name << " is added to the class " << i.classname << "\n";
		}
	}
}

void SchoolSystem::RemoveStudentFromClass()
{
	std::string name = "";
	int age = 0;
	std::cout << "Write the students name\n";
	std::cin >> name;

	for (auto i : students)
	{
		if (i.name == name)
		{
			if (i.classname == "")
			{
				std::cout << name << " doesn't have a class\n";
				return;
			}
			std::cout << name << " was removed from " << i.classname << "\n";
			i.classname == "";
			return;
		}
	}

	std::cout << "Student not found\n";
}

void SchoolSystem::RemoveClass()
{

}

void SchoolSystem::InfoClass()
{
	int counter = 0;
	std::string input = "";
	std::cout << "Write a classname\n";
	std::cin >> input;

	for (auto& i : schoolClasses)
	{
		if (input != i)
		{
			std::cout << "Class not found\n";
			return;
		}
	}

	for (auto& i : students)
	{
		if(i.classname == input)
		{
			counter++;
			std::cout << "Student " << counter << i.name << "\n";
		}
	}
    /*
	*/
	
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