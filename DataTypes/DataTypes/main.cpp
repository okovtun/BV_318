#include<iostream>
using namespace std;

//Variable - это именованна€ область пам€ти, содержимое которой 
//			 может измен€тьс€ в процессе выполнени€ программы.

//						type name;

/*
type - тип переменной, он определ€ет 3 вещи:
		1. —колько пам€ти переменна€ будет занимать;
		2.  акие значени€ она сможет принимать;
		3.  акие операции над ней можно выполн€ть;

I) Ћогические типы: bool (Boolean) 1 Byte 
	true либо false
	true  - 1
	false - 0
	cout << true << endl;
	cout << false << endl;
	0 - это false, а true - это все что Ќ≈ 0
*/

void main()
{
	setlocale(LC_ALL, "");
	cout << "DataTypes" << endl;
	cout << true << endl;
	cout << false << endl;
}