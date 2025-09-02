#include <iostream>
#include <string>
#include "Book.h"

using std::string;
using std::cout;
using std::cin;
using std::getline;

Book GetBookRegistration();
void DrawBook(Book book);
int main()
{
	Book book = GetBookRegistration();
	DrawBook(book);
	system("Pause");
}

Book GetBookRegistration()
{
	Book book;
	
	cout << "**** Book Registration ****\n";
	cout << "Enter the title: ";
	getline(cin, book.title);
	cout << "\nEnter the author: ";
	getline(cin, book.author);
	cout << "\nEnter the publisher name: ";
	getline(cin, book.publisher);
	cout << "\nEnter the publication year: ";
	cin >> book.year;
	system("cls");
	return book;
}

void DrawBook(Book book)
{
	cout << "**** " << book.title << " ****\n";
	cout << "By " << book.author << "\n\n";
	cout << "publihed by " << book.publisher;
	cout << "\n" << book.year << "\n";
}
