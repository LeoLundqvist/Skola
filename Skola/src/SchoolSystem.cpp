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
				AddClass(input);
				break;

			case 2:
				AddStudent(input, input2);
				break;

			case 3:
				AddStudentToClass(input);
				break;

			case 4:

				break;

			case 5:

				break;

			case 6:

				break;

			case 7:
				InfoStudent();

				break;

			//Info about class
			case 8:
				InfoClass(input);
				

				break;

			case 9:

				return;

		}
	}
}

void SchoolSystem::AddClass(std::string classname)
{
	std::cout << "Write a classname\n";
	std::cin >> classname;
	schoolClasses.push_back(classname);
	std::cout << "Class " << classname << " created\n";
}

void SchoolSystem::AddStudent(std::string name, int age)
{
	Student student; 
	std::cout << "Write the students name\n";
	std::cin >> name;
	std::cout << "Write the students age\n";
	std::cin >> age;
	student.name = name;
	student.age = age;
	students.push_back(student);
}

void SchoolSystem::AddStudentToClass(std::string input)
{
	std::cout << "Write the students name\n";
	std::cin >> input;
	for (auto i : students)
	{
		if (i.name == input)
		{
			std::cout << "Which class do you want to add " << i.name << " to?\n";
			std::cin >> input;

			for (auto j : schoolClasses)
			{
				if (input == j)
				{
					std::cout << "Are you sure you want to add " << i.name << " to the class" << j << "\nY/N\n";
					std::cin >> input;
					if (input == "Y")
					{
						i.classname == j;
						std::cout << "Student " << i.name << " is now a part of " << j << "\n";

					}
				}
			}
		}
		else
		{
			std::cout << "Student " << input << " not found" << "\n";
		}
			
	}

}

void SchoolSystem::RemoveStudent(std::string name, int age)
{
	std::cout << "Write the students name\n";
	std::cin >> name;
	for (auto i : students)
	{
		if (i.name == name)
		{
			for (auto j : schoolClasses)
			{
				if (i.classname == j)
				{
					std::cout << "Are you sure you want to remove " << name << " from the class " << j << "\n";
					if (name == "Y")
					{
						i.classname == "";
					}
				}
			}
		}
		else
			std::cout << "Student " << name << " not found" << "\n";
	}

}

void SchoolSystem::RemoveClass()
{

}

void SchoolSystem::InfoClass(std::string input)
{
	int counter = 0;
	std::cout << "Write a classname\n";
	std::cin >> input;
	for (auto i : schoolClasses)
	{
		//looks if class exists
		if (i == input)
		{
			std::cout << "Class found\n";

			for (auto j : students)
			{
				//if students class is the same
				if (input == j.classname)
				{
					counter++;
					std::cout << "Student #" << counter << "\n";
					std::cout << j.name << "\n";
					std::cout << j.age << "\n\n";
				}
			}

		}
	}

	//std::cout << "Class not found\n";
}

void SchoolSystem::InfoStudent()
{

}
