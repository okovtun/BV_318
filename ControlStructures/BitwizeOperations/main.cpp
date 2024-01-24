#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	unsigned short number = 5;
	cout << (unsigned short)number << endl;
	cout << (unsigned short)~number << endl;
	cout << (5 ^ 3) << endl;
	cout << (5 ^ 5) << endl;
}