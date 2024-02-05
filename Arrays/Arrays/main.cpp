//Arrays
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Arrays" << endl;

	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8 };
	cout << int() << endl;
	//arr[2] = 2048;			//обращение к элементу массива на запись
	//cout << arr[2] << endl;	//обращение к элементу массива на чтение
	//SIZE - 1
	//	 n - 1

	//Ввод элементов массива с клавиатуры:


	//Вывод массива на экран:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}