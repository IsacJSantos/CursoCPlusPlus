#include <iostream>
#include <ctime>

int main()
{
	time_t  * currentTime = nullptr;
	tm* myTime = nullptr;
	localtime_s(myTime,currentTime);

	std::cout << "\nHora: " << myTime->tm_hour;

	system("Pause");
}