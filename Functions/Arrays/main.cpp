//Arrays
#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-----------------------------------------------------\n"

const int ROWS = 3;	//количество строк
const int COLS = 4; //количество элементов строки

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int  Sum(const int arr[], const int n);
double Avg(const int arr[], const int n);

int minValueIn(const int arr[], const int n);
int maxValueIn(const int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int I_SIZE = 5;
	int i_arr[I_SIZE];

	/*int minRand, maxRand;
	do
	{
		cout << "Введите минимально возможное случайное число: "; cin >> minRand;
		cout << "Введите максимально возможное случайное число: "; cin >> maxRand;
		if (minRand == maxRand)cout << "Пределы диапазона не должны совпадать" << endl;
	} while (minRand == maxRand);*/

	FillRand(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << "Сумма элементов массива: " << Sum(i_arr, I_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr, I_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr, I_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr, I_SIZE) << endl;

	cout << delimiter << endl;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << delimiter << endl;

	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
		//arr[i] = 50 + rand() % 50;
		//Функция rand() генерирует псевдослучайное число в диапазоне от 0 до 32 767 (RAND_MAX)
		//Это псевдослучайное число можно вывести на экран, сохранить в переменную, или элемент массива.
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	//Заполнение массива случайными числами:
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
		arr[i] /= 100;
		//arr[i] = 50 + rand() % 50;
		//Функция rand() генерирует псевдослучайное число в диапазоне от 0 до 32 767 (RAND_MAX)
		//Это псевдослучайное число можно вывести на экран, сохранить в переменную, или элемент массива.
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	//Заполнение двумерного массива случайными числами:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void Print(const int arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(const double arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//Вывод двумерного массива на экран:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

int  Sum(const int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(const int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int minValueIn(const int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int maxValueIn(const int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}