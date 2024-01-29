#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	/*unsigned short number = 5;
	cout << (unsigned short)number << endl;
	cout << (unsigned short)~number << endl;
	cout << (5 ^ 3) << endl;
	cout << (5 ^ 5) << endl;*/
	int a = 2;
	int b = 3;
	cout << a << "\t" << b << endl;
	/*a ^= b;
	b ^= a;
	a ^= b;*/

	b ^= a ^= b ^= a;
	
	cout << a << "\t" << b << endl;
}