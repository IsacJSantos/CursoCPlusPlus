#include <iostream>

class House
{

private:
	int roomsQtd{ 4 };
	float length{ 90.0f };
	bool hasSuite{ true };

public:
	void ShowLength();
	int GetRoomsQtd();
	bool HasSuite();
	void SetRoomQtd(int num);

};

int main()
{
	/*Casa CasaDePraia;
	CasaDePraia.MostrarTamanho();
	CasaDePraia.SetNumQuartos(6);*/

	//Instanciando um objeto via alocação dinamica na memoria, utilizando ponteiros
	House* beachHouse = new House();

	//Como se trata de um ponteiro, é necessário fazer o desreferenciamento
	(*beachHouse).ShowLength();

	//Uma forma mais fácil de acessar a classe pelo ponteiro, é utilizando a notação flecha: beachHouse->ShowLength
	beachHouse->SetRoomQtd(5);
	std::cout << "\nRooms: " << beachHouse->GetRoomsQtd();
	std::cout << "\nHas Suite: ";
	beachHouse->HasSuite() ? std::cout << "Yes\n" : std::cout << "No\n";
	std::cout << "\n";
	system("PAUSE");
	return 0;
}

void House::ShowLength()
{
	std::cout << "\nLength: " << length;
}

int House::GetRoomsQtd()
{
	return roomsQtd;
}

bool House::HasSuite()
{
	return hasSuite;
}

void House::SetRoomQtd(int num)
{
	if ((num <= 6) && (num >= 0))
	{
		roomsQtd = num;
	}
	else
	{
		std::cout << "\nInvalid rooms amount\n";
	}

}