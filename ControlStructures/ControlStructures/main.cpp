//ControlStructures
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Controls" << endl;
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	cout << "Температура воздуха: " << temperature << " градусов\n";
	if (temperature > 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 40)
	{
		cout << "Вы в пустыне" << endl;
	}
	else if (temperature > 33)
	{
		cout << "Очень жарко" << endl;
	}
	else if (temperature > 25)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 18)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -30)
	{
		cout << "Сильный мороз" << endl;
	}
	else 
	{
		cout << "На улице холодно" << endl;
	}
}

/*
if (condition)
{
	.....;
	code1;
	.....;
}
else
{
	.....;
	code2;
	.....;
}


condition - это условие.
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!!! УСЛОВИЕ - ЭТО СРАВНЕНИЕ !!!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/