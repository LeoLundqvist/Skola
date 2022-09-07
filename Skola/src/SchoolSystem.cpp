#include "SchoolSystem.h"

void SchoolSystem::Run()
{
	int num = 0;

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
		std::string input = "";
		std::getline(std::cin, input);
		num = stoi(input);

		switch(num)
		{
			//create class
			case 1:
				std::cout << "Write a classname\n";
				std::getline(std::cin, input);
				schoolClasses.push_back(input);
				std::cout << "Class " << input << " created\n";


				break;

			case 2:

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

void SchoolSystem::AddStudent()
{
	Student student;
	student.name = "";
	student.age = 0;
	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{

}

void SchoolSystem::AddClass()
{

}
void SchoolSystem::RemoveClass()
{

}