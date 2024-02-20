#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int decimal;	//десятичное число
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 32;
	bool bin[n] = {};	//Этот массив будет хранить разряды двоичного числа
#ifdef VAR_1
	int i = 0;
	while (decimal > 0)
	{
		bin[i] = decimal % 2;	//получаем младший разряд двоичного числа
		i++;	//переходим к следующему разряду
		decimal /= 2;		//убираем младший двоичный разряд из числа
	}
#endif // VAR_1

	int i = 0;
	//for(start;stop;step);
	for (; decimal; bin[i++] = decimal % 2, decimal /= 2);

	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
}