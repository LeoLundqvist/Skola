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
		std::getline(std::cin, input);
		num = stoi(input);

		switch(num)
		{
			case 1:
				AddClass(input);
				break;

			case 2:
				AddStudent(input, input2);
				break;

			case 3:

				break;

			case 4:

				break;

			case 5:

				break;

			case 6:

				break;

			case 7:

				break;

			//Info about class
			case 8:
				std::cout << "Write a classname\n";
				std::getline(std::cin, input);
				for (auto i : schoolClasses)
				{
					if(i==input)
					{ 
						std::cout << "Class found\n";
						
					}
					else
						std::cout << "Class not found\n";

				}

				break;

			case 9:

				break;

		}
			
		
	}
}

void SchoolSystem::AddStudent(std::string name, int age)
{
	Student student; 
	std::cout << "Write the students name\n";
	std::getline(std::cin, name);
	std::cout << "Write the students age\n";
	std::cin >> age;
	student.name = name;
	student.age = age;
	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{

}

void SchoolSystem::AddClass(std::string classname)
{
	std::cout << "Write a classname\n";
	std::getline(std::cin, classname);
	schoolClasses.push_back(classname);
	std::cout << "Class " << classname << " created\n";
}
void SchoolSystem::RemoveClass()
{

}

void SchoolSystem::InfoClass()
{

}

void SchoolSystem::InfoStudent()
{

}
