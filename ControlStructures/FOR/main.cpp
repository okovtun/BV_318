//FOR
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FOR_BASICS
//#define FOR_DEBUG
//#define FACTORIAL
//#define POWER
//#define FIBONACCI
//#define SIMPLE_NUMBERS
#define MULTIPLICATION_TABLE
#define PYTHAGORAS_TABLE

void main()
{
	setlocale(LC_ALL, "");

#ifdef FOR_BASICS
	//int i = 0;	//Счетчик цикла
	//int n;
	//cout << "Введите количество итераций: "; cin >> n;
	//while (i < n)
	//{
	//	cout << i << " Hello" << endl;;
	//	i++;
	//}

	;	//Счетчик цикла
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "Hello" << endl;;
		;
	}
#endif // FOR_BASICS

#ifdef FOR_DEBUG
	int n = 5;

	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_DEBUG

#ifdef FACTORIAL
	int n;
	cout << "Введите число для вычисления факториала: "; cin >> n;
	int f = 1;	//Факториал
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;		//основание степени
	int n;		//показатель степени
	double N = 1;	//степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени:"; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef FIBONACCI
	//int a, b, c;
	int n;
	cout << "Введите предельное число:"; cin >> n;
	//for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	for (int a = 0, b = 1, c = a + b; a < n; c = (a = b) + (b = c))
	{
		cout << a << "\t";
		//Оператор "запятая" (coma operator) - позволяет в том месте где ожидается одно выражение написать несколько выражений.
		//Эти выражения будут выполняться последовательно слева направо, и оператор "запятая" вернет значение последнего выражения.
	}
	cout << endl;
	for (int a = 0, b = 1; a < n; b = a + b, a = b - a)
		cout << a << "\t";
	cout << endl;
#endif // FIBONACCI

#ifdef SIMPLE_NUMBERS
	int n;
	cout << "Введите предел: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;	//Предполагаем что число простое,
		//но это нужно проветрить:
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;	//ключевое слово 'break' прерывает текущую итерцию, и все последующие.
			}
		}
		if (simple)cout << i << "\t";
	}
	cout << endl;
#endif // SIMPLE_NUMBERS

#ifdef MULTIPLICATION_TABLE
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
#endif // MULTIPLICATION_TABLE

}

//for (counter; condition; expression)
//{
//	.....;
//	group - of - statements;
//	.....;
//}
//counter - это счетчик цикла
//condition - это условие прдолжения или звершения цикла
//expression - это выражение, которое изменяет счетчик ++/--