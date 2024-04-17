//Arrays
#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
//#include"FillRand.cpp"	//*.cpp-файлы никогда НЕ подключаются на место вывоза.
#include"Statistics.h"
#include"Shift.h"
#include"Sort.h"
#include"Unique.h"

void main()
{
	setlocale(LC_ALL, "");
	const int I_SIZE = 10;
	int i_arr[I_SIZE];
	//i_arr[-1] = 0;

	/*int minRand, maxRand;
	do
	{
		cout << "Введите минимально возможное случайное число: "; cin >> minRand;
		cout << "Введите максимально возможное случайное число: "; cin >> maxRand;
		if (minRand == maxRand)cout << "Пределы диапазона не должны совпадать" << endl;
	} while (minRand == maxRand);*/

	Unique(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << "Сумма элементов массива: " << Sum(i_arr, I_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr, I_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr, I_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr, I_SIZE) << endl;
	Sort(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftRight(i_arr, I_SIZE, number_of_shifts);
	Print(i_arr, I_SIZE);

	cout << delimiter << endl;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS];
	Unique(i_arr_2, ROWS, COLS);
	//FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве:" << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	//Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << delimiter << endl;
}