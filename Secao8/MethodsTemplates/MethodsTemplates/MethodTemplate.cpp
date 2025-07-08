#include <iostream>

template <typename T>
T Sum(T a, T b);

int main()
{
	std::cout << "Sum: " << Sum<int>(5, 7) << "\n";
	std::cout << "Sum: " << Sum(5.5f, 7.35f) << "\n";
	std::cout << "Sum: " << Sum(5.5555, 7.353587) << "\n";

	system("Pause");
}

template<typename T>
T Sum(T a, T b)
{
	std::cout << "a type: " << typeid(a).name() << ". b type: " << typeid(b).name() << ". ";
	return a + b;
}
