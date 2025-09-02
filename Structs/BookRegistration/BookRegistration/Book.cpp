#include "Book.h"

Book::Book()
{
	this->ID = 0;
	this->title = "";
	this->author = "";
	this->publisher = "";
	this->year = 0;
}

Book::Book(int ID, string title, string author, string publisher, int year)
{
	this->ID = ID;
	this->title = title;
	this->author = author;
	this->publisher = publisher;
	this->year = year;
}
