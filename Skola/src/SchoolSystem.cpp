#include "SchoolSystem.h"

void SchoolSystem::Run()
{
	int counter = 0;
	int num = 0;

	




	while (true)
	{
		//Menyn
		std::cout << "SchoolSystem\n";
		std::cout << "1. Skapa ny skolklass\n";
		std::cout << "2. Lägg till elev i klass\n";
		std::cout << "3. Byt elevs klass\n";
		std::cout << "4. Ta bort elev från klass\n";
		std::cout << "5. Ta bort elev från skolsystemet\n";
		std::cout << "6. Hitta information om elev\n";
		std::cout << "7. Hitta information om klass\n";

		//Input
		std::string input = "";
		std::getline(std::cin, input);
		num = stoi(input);

		switch(num)
		{
			case 1:
				std::cout << "hello";

			break;

		}
			
		
		//Feedback

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
