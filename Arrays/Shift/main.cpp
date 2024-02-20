#pragma warning(disable:4326)
#include<Windows.h>
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int number_of_shifts;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shifts;

	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system("CLS");	//Функция system(...) вызывает любую команду Windows
		//Команда 'CLS' - Clear Screen, очищает окно консоли.
		system("calc");
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		Sleep(1000);	//Функция Sleep(...) приостанавливает выполнение программы на заданный промежуток времени
		//Промежуток времени задается в миллисекундах.
	}
}