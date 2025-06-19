#include <iostream>
#include <string>

int main()
{
	bool acess;
	std::string acessPassword = "cplusplus";
	std::string givenPassword;

	std::cout << "Enter the password: ";
	std::cin >> givenPassword;

	if (givenPassword == acessPassword)
	{
		std::cout << "\nAcess allowed\n";
		acess = true;
		system("PAUSE");
	}
	else
	{
		std::cout << "\nAcess denied\n";
		system("PAUSE");
		exit(0);
	}

}