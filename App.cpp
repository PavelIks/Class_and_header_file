#include "Film.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	vector<Film> vec =
	{
		Film(2000,	"���� �����: �����",			"���"),
		Film(1986,	"������-����",					"���"),
		Film(2004,	"����������: �����������-2",	"���"),
		Film(1990,	"������-2",						"������"),
		Film(2003,	"������",						"���")
	};

	vector<Film>::iterator i;
	cout << vec.size() << "\n";
	for (i = vec.begin(); i != vec.end(); i++)
	{
		cout << *i;
		cout << endl;
	}

	system("pause");
}