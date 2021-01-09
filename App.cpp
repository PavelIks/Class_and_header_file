#include "Film.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	vector<Film> vec =
	{
		Film(2000,	"Поле битвы: Земля",			"США"),
		Film(1986,	"Говард-утка",					"США"),
		Film(2004,	"Супердетки: Вундеркинды-2",	"США"),
		Film(1990,	"Тролль-2",						"Италия"),
		Film(2003,	"Джильи",						"США")
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