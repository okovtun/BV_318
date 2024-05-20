#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
	cout << typeid(new int[5]).name() << endl;
	double a = 2.5;
	cout << (int)a << endl;
	double *pa = &a;
	cout << *pa << endl;
	cout << pa[0] << endl;
}