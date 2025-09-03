#include <iostream>
#include <string>
#include "Book.h"

using std::string;
using std::cout;
using std::cin;
using std::getline;

Book GetBookRegistration(int ID);
void DrawBook(Book book);
int main()
{
	const int BOOK_VECTOR_LENGTH = 5;

	Book book[BOOK_VECTOR_LENGTH];

	for (int i = 0; i < BOOK_VECTOR_LENGTH; i++)
	{
		book[i] = GetBookRegistration(i + 1);
	}
	
	for (int i = 0; i < BOOK_VECTOR_LENGTH; i++)
	{
		DrawBook(book[i]);
	}

	system("Pause");
}

Book GetBookRegistration(int ID)
{
	Book book;
	
	book.ID = ID;
	cout << "**** Book Registration ****\n";
	cout << "Enter the title: ";
	getline(cin, book.title);
	cout << "\nEnter the author: ";
	getline(cin, book.author);
	cout << "\nEnter the publisher name: ";
	getline(cin, book.publisher);
	cout << "\nEnter the publication year: ";
	cin >> book.year;
	cin.ignore();

	system("cls");
	return book;
}

void DrawBook(Book book)
{
	cout << "\n**** " << book.title << " ****\n";
	cout << "By " << book.author << "\n\n";
	cout << "publihed by " << book.publisher;
	cout << "\n" << book.year << "\n";
}
