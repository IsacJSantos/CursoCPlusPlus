#include <iostream>

class Base 
{
public:
	void GetNumbers()
	{
		std::cout << "Num1:";
		std::cin >> Num1;
		std::cout << "Num2:";
		std::cin >> Num2;

		ShowResult(Num1, Num2);
	}

protected:
	float Num1, Num2;
	float Sum(float num1, float num2)
	{
		return num1 + Num2;
	}

	void ShowResult(float num1, float num2)
	{
		std::cout << "Sum: " << Sum(num1, num2) << "\n";
	}
};

class SubClass :public Base
{

};

int main()
{
	SubClass subclass;
	subclass.GetNumbers();

	system("pause");
}