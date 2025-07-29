#include <iostream>
#include <iomanip>

int main()
{
	float speedValues[]{ 70.9f,89.5f,65.6f,102.5f,123.6f,63.4f,74.5f,99.5f,68.7f };
	int speedCount = std::size(speedValues);
	float averageSpeed{ 0.0f };
	float total{ 0.0f };

	for (auto speedValue : speedValues)
	{
		total += speedValue;
	}

	averageSpeed = total / speedCount;
	std::cout << "Average speed: " << std::setprecision(4) << averageSpeed << "Km/h\n";

	system("Pause");
}