#include<iostream>
using namespace std;

//Variable - это именованная область памяти, содержимое которой 
//			 может изменяться в процессе выполнения программы.

//						type name;

/*
type - тип переменной, он определяет 3 вещи:
		1. Сколько памяти переменная будет занимать;
		2. Какие значения она сможет принимать;
		3. Какие операции над ней можно выполнять;

 I) Логические типы: bool (Boolean) 1 Byte 
	true либо false
	true  - 1
	false - 0
	cout << true << endl;
	cout << false << endl;
	0 - это false, а true - это все что НЕ 0

 II) Символьные типы: char (Character - Символ) 1 Byte ASCII
	ASCII - American Standard Code for Information Interchange

III) Числовые типы. Делятся на целочисленные и вещественные.
	 Целочисленные предназначены для хранения целых чисел, 
	 а вещественные - для хранения дробных чисел (чисел с плавающей запятой).
	   signed - занковые, могут хранить как положительные, так и отрицательные целые числа.
	 unsigned - могут хранить только положительные целын числа, включая 0.
	 int a;	//знаковая переменная, может хранить как положительные, так и отрицательные целые числа.
	 unsigned int b;//беззнаковая переменная, может хранить только положительные целые числа.
*/

/*
---------------------------------------------------
			!!!IDENTIFIER - ЭТО ИМЯ!!!
1. ABC...Zabc...z012...9_;
2. Имя переменной НЕ может начинаться символом цифры
	1stPlace;	//compile error
	_1stPlace;	//OK
3. Имена переменных регистрозависимы:
	Price и price - это разные имена;
4. Для именования переменных нельзя использовать ключевые слова языка C++;

Имена переменных должны быть осмысленными, т.е., 
по имени переменной должно становиться понятно что в ней хранится!!!
---------------------------------------------------
*/

//#define INTEGRAL_TYPES

void main()
{
	setlocale(LC_ALL, "");
	cout << "DataTypes" << endl;
	//cout << true << endl;
	//cout << false << endl;
#if defined INTEGRAL_TYPES
	cout << sizeof(long long) << endl;
	//endl - end line (переводит курсор в начало следующей строки)
	//макроопределений
	cout << LLONG_MIN << " ... " << LLONG_MAX << endl;
	cout << 0 << " ... " << ULLONG_MAX << endl;
	USHRT_MAX;
#endif

	cout << "FLOAT:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	
	cout << "\n----------------------------------\n";

	cout << "DOUBLE:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;

	int _1stPlace;
	int _sizeof;

	int a;
	//double price;
	//double priceOfCoffee;	//Camel (Pascal) case style
	//double price_of_coffee;	//snake_case_style
	//cout << price_of_coffee << endl;
	//Инициализация - это присвоение начального значения.
	int b = 3;	//инициализация при объявлении
	int c;
	c = 5;		//Инициализация после объявления

	double price_of_coffee;
	cout << "Введите стоимость кофе: "; 
	cin >> price_of_coffee;	//Инициализация вводом с клавиатуры
	cout << price_of_coffee << endl;
}