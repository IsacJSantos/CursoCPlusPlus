#include <iostream>

void PopulateMatrix(int matrix[][5], int lines, int columns);
void ShowMatrix(int matrix[][5], int lines, int columns);
int main()
{
	int matrix[5][5]{ 0 };

	PopulateMatrix(matrix, 5, 5);
	ShowMatrix(matrix, 5, 5);

	system("pause");
}

void PopulateMatrix(int matrix[][5], int lines, int columns)
{
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (i == j)
				matrix[i][j] = 0;
			else if (i < j)
				matrix[i][j] = 1;
			else
				matrix[i][j] = -1;
		}
	}
}

void ShowMatrix(int matrix[][5], int lines, int columns)
{
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (matrix[i][j] == -1)
				std::cout << matrix[i][j] << " ";
			else
				std::cout << " " << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
