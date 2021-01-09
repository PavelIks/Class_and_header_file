#include <iostream>
#include <fstream>
using namespace std;

class Film
{
private:
	int year;
	const char* author;
	const char* title;
public:
	Film();
	Film(int year, const char* author, const char* title);
	friend ostream& operator << (ostream& out, const Film& val);
	~Film();
};