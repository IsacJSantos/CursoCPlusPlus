#pragma once
#include <string>
using std::string;

struct Book
{
	int ID;
	string title;
	string author;
	string publisher;
	int year;

	Book();
	Book(int id, string title, string author, string publisher, int year);
};
