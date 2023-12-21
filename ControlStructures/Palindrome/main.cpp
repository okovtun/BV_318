#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number;		//число, введенное с клавиатуры
	int reverse = 0;//исходное число, записанное в обратномпорядке (цифры задом наперед)
	cout << "Введите число: "; cin >> number;
	int buffer = number;//копируем введенное число, чтобы данные, введенные пользователем остались неизменными.
	while (buffer)
	{
		reverse *= 10;	//Прежде чем созранить следующий младший разряд, нужно выделить под него место
		reverse += buffer % 10;	//сохраняем младший разряд буфера
		buffer /= 10;	//убираем младший разряд из буфера
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "May be the next time" << endl;
	}
}