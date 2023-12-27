//Loops
#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define WHILE_1
//#define WHILE_2
//#define FACTORIAL
//#define POWER
#define ASCII

void main()
{
	setlocale(LC_ALL, "");

#ifdef WHILE_1
	int i = 0;	//счетчик цикла
	int n;		//количество итераций
	cout << "Введите количество итерций: "; cin >> n;
	while (i < n)
	{
		cout << "Hello World!";
		cout << "Сам привет";
		cout << i++ << endl;
		//i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	char key;
	do
	{
		key = _getch();
		//Функция '_getch()' ожидает нажатие клавиши и возвращае ASCII-код нажатой клавиши.
		//Функция '_getch()' объявлениа в библиотеке <conio.h>
		cout << (int)key << "\t" << key << endl;
		//(int)key - это явное преобразование переменной 'key' в тип данных 'int' 
		//для того чтобы увидеть ASCII-код сивола, хранящегося в переменной 'key'
	} while (key != 27);
#endif // WHILE_2

#ifdef FACTORIAL
	//5! = 1*2*3*4*5
	int n;		//число для вычисления факториала
	int i = 1;	//счетчик 1 2 3 .....
	double f = 1;	//факториал
	cout << "Введите число для вычисления факториала: "; cin >> n;
	while (i <= n)
	{
		cout << i << "! = ";
		f *= i++;
		cout << f << "\n";
	}
#endif // FACTORIAL

#ifdef POWER
	double a;		//основание степени
	int n;		//показатель степени
	double N = 1;	//степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	int i = 0;
	while (i++ < n)N *= a;
	cout << N << endl;
#endif // POWER

	cout << "Таблица ASCII-символов:\n";
	setlocale(LC_ALL, "C");	//включаем кодировку по умолчанию
	int i = 0;
	int n = 256;
	while (i<n)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i++ << " ";
	}
	cout << endl;
	setlocale(LC_ALL, "");
	cout << "Вот и сказочке конец" << endl;
}

/*
--------------------------
(Loop - Петля) - это управляющая структура, которая позволяет многократно выполнить
(зациклить) определенный код.

while		- цикл с предусловием;
do...while	- цикл с постусловием;
for(...)... - цикл на заданное количество итераций;

Итерация - это однократное выполнение тела цикла.
Тело цикла - это код, который нужно закилить (многократно выполнить).
--------------------------
*/