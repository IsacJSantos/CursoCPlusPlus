#include <iostream>

class House
{
private:
	int roomsQtd{4};
	float length{90.0f};
	bool hasSuite{true};
public:
	void ShowLength();
	int GetRoomsQtd();
	bool Hassuite();
};

int main()
{
	House beachHouse;
	beachHouse.ShowLength();
	std::cout << "\nRooms: " << beachHouse.GetRoomsQtd() << "\n";
	std::cout << "\nHas Suite: ";
	beachHouse.Hassuite() ? std::cout << "Yes\n" : std::cout << "No\n";
	system("Pause");
	return 0;
}

void House::ShowLength()
{
	std::cout << "\nHouse Length: " << length << "\n";
}

int House::GetRoomsQtd()
{
	return roomsQtd;
}

bool House::Hassuite()
{
	return hasSuite;
}