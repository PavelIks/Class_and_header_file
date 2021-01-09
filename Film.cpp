#include "Film.h"
using namespace std;

Film::Film() : year(0), author("Noname"), title("Nothing") {}
Film::Film(int year, const char* author, const char* title) : year(year), author(author), title(title) {}

ostream& operator<<(ostream& out, const Film& val)
{
	out << val.year << "\t\t\t\t" << val.author << "\t\t\t\t" << val.title;
	return out;
}

Film::~Film()
{
	ofstream in;
}