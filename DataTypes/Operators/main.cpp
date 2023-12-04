#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define ARITHMETICAL_OPERATORS	//1)Арифметические операторы
//#define ASSIGNMENT_OPERATOR		//2) Оператор присваивания
//#define INCREMENT_DECREMENT		//3)Increment/Decrement (++/--)
#define COMPOUND_ASSIGNMENTS	//4) Составные присваивания

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Operators" << endl;
	+3;
	-3;		//Unary minus
	8 - 3;	//Binary minus
	8 * 3;	//Binary multiplication
	//*3;	//Оператор '*' только бинарный

#ifdef ARITHMETICAL_OPERATORS
	//Unary:	+, -;
	//Binary:	+, -, *, /, % - остаток от деления (modulo);
	cout << 17 / 3 << endl;
	cout << 17 % 3 << endl;
	cout << 3 / 17 << endl;
	cout << 3 % 17 << endl;
	//cout << 3. % 17 << endl;
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	//		l-value = r-value;
	//l-value - переменная слева
	//r-value - выражение справа
	//const double PI = 3.14;
	//PI = 3.1415;

	//a = b + c * d - e / f;

	int a, b, c;
	a = b = c = 7;
	cout << a << "\t" << b << "\t" << c << endl;

#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	//Increment (++) - это унарный оператор, который увеличивает значение переменной на 1.
	//Decrement (--) - это унарный оператор, который уменьшает значение переменной на 1.
	//Префиксная и постфиксная (суфиксная)
	int i = 0;
	//++i;	//Prefix increment
	//i++;	//Postfix increment
	//--i;	//Prefix decrement
	//i--;	//Postfixo (suffixo) decremento
	//cout << i << endl;
	//cout << "\n----------------------\n";
	
	int j = ++i;
	

	cout << i << "\t" << j << endl;
#endif // INCREMENT_DECREMENT

#ifdef COMPOUND_ASSIGNMENTS
	int a = 2;
	int b = 3;
	a = a + b;	a += b;
	a = a - b;	a -= b;
	a = a * b;	a *= b;
	a = a / b;	a /= b;
	a = a % b;	a %= b;
#endif // COMPOUND_ASSIGNMENTS

}