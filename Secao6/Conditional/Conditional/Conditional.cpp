#include <iostream>
#include <string>

int main()
{
	bool acessAllowed, isSunny, carAlright, haveMoney;
	std::string acessPassword = "cplusplus";
	std::string givenPassword;

	std::cout << "Enter the password: ";
	std::cin >> givenPassword;

	if (givenPassword == acessPassword)
	{
		std::cout << "\nAcess allowed\n";
		acessAllowed = true;
	}
	else
	{
		std::cout << "\nAcess denied\n";
		system("PAUSE");
		exit(0);
	}

	if (acessAllowed)
	{
		char response{ ' ' };

		std::cout << "Is it a sunny day?(s/n) ";
		std::cin >> response;
		isSunny = response == 's' ? true : false;

		std::cout << "Is your car ready to go?(s/n) ";
		std::cin >> response;
		carAlright = response == 's' ? true : false;

		std::cout << "Do you have mmoney at least?(s/n) ";
		std::cin >> response;
		haveMoney = response == 's' ? true : false;

		if (isSunny || carAlright && haveMoney)
		{
			std::cout << "Is beach day!!\n";
		}
		else if (haveMoney)
		{
			std::cout << "No beach today, but you have money\n";
		}
		else
			std::cout << "No beach today :(\n";
	}

	system("PAUSE");
}