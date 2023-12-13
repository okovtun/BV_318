//ControlStructures
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TEMPERATURE
//#define CALC_1
#define CALC_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef TEMPERATURE
	cout << "Hello Controls" << endl;
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	cout << "Температура воздуха: " << temperature;

	//Функция abs() возвразщает модуль числа, т.е, число без учета знака.
	if (abs(temperature) % 100 > 10 && abs(temperature) % 100 < 20)cout << " градусов";
	else if (abs(temperature) % 10 == 1)cout << " градус";
	else if (abs(temperature) % 10 >= 5 || abs(temperature) % 10 == 0)cout << " градусов";
	else cout << " градуса\n";
	cout << endl;

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
#endif // TEMPERATURE

#ifdef CALC_1
	double a, b;	//числа, вводимые с клавиатуры
	char s;			//s - Sign (знак операции)
	cout << "Введите выражение: ";
	cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
#endif // CALC_1

	double a, b;
	char s;
	cout << "Введите выражение: ";
	cin >> a >> s >> b;
	switch (s)
	{
	case '+':cout << a << " + " << b << " = " << a + b << endl; break;
	case '-':cout << a << " - " << b << " = " << a - b << endl; break;
	case '*':cout << a << " * " << b << " = " << a * b << endl; break;
	case '/':cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: no operation" << endl;
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