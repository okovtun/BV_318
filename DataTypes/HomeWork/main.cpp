#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	double money;
	cout << "������� ���������: ";
	cin >> money;
	cout << money << endl;
	money += .000000001;

	int grn = money;
	cout << grn << " ���.\t";

	int cop = (money - grn) * 100;
	cout << cop << " ���.\n";
}