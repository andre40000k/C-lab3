#include<iostream>
#include<string>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
	int proverca = 0;
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char Mass[7] = {'q','w','e','r','e','w','q'} /*= {'q','t','e','r','p','w','q'}*/;

	/*for (int i = 0; i < 7; i++)
	{
		cin >> Mass[i];
	}*/

	cout << endl;

	for (int i = 0; i < 7; i++)
	{
		if (Mass[i] == Mass[6 - i])
		{
			++proverca;
		}
	}
	if (proverca == 7)
	{
		cout << "Массив симетричен";
	}
	else
	{
		cout << "Массив не симетричен";
	}
}

