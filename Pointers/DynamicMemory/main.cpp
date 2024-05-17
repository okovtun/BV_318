//DynamicMemory
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

template<typename T>
T** Allocate(const int rows, const int cols);
void  Clear(int** arr, const int rows);

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n);
void FillRand(int** arr, const int rows, const int cols);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T** arr, const int rows, const int cols);

template<typename T>T* push_back(T arr[], int& n, T value);
template<typename T>T* push_front(T arr[], int& n, T value);
template<typename T>T* pop_back(T arr[], int& n);
//Stack - это модель памяти, из которой последний записанный элемент считывается первым.
//push
//pop

template<typename T>T** push_row_back(T** arr, int& rows, const int cols);
template<typename T>T** pop_row_back(T** arr, int& rows, const int cols);

template<typename T>void push_col_back(T** arr, const int rows, int& cols);

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2
//#define PREFORMANCE_CHECK

void main()
{
	setlocale(LC_ALL, "");
#ifdef DYNAMIC_MEMORY_1
	int n;
	cout << "Введите размер массива: "; cin >> n;
	typedef double DataType;
	DataType* arr = new DataType[n];

	FillRand(arr, n);
	Print(arr, n);

	DataType value;
	cout << "Введите добавляемое значение: "; cin >> value;
	cout << &n << endl;
	arr = push_back(arr, n, value);
	Print(arr, n);
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_front(arr, n, value);
	Print(arr, n);

	arr = pop_back(arr, n);
	Print(arr, n);

	//delete[] buffer;
	delete[] arr;
#endif // DYNAMIC_MEMORY_1

#ifdef DYNAMIC_MEMORY_2
	typedef int DataType;
	int rows;
	int cols;
	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество элементов строки: "; cin >> cols;

	DataType** arr = Allocate<DataType>(rows, cols);

	FillRand(arr, rows, cols);
	Print(arr, rows, cols);

	arr = push_row_back(arr, rows, cols);
	FillRand(arr[rows - 1], cols, 100, 1000);
	Print(arr, rows, cols);

	arr = pop_row_back(arr, rows, cols);
	Print(arr, rows, cols);

	push_col_back(arr, rows, cols);
	Print(arr, rows, cols);

	Clear(arr, rows);
#endif // DYNAMIC_MEMORY_2

#ifdef PREFORMANCE_CHECK
	int rows;
	int cols;
	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество элементов строки: "; cin >> cols;

	int** arr = Allocate(rows, cols);
	cout << "Memory allocated" << endl;
	system("PAUSE");

	arr = push_row_back(arr, rows, cols);
	cout << "Row added" << endl;
	system("PAUSE");

	Clear(arr, rows);
	cout << "Memory clean" << endl;
#endif // PREFORMANCE_CHECK

}

template<typename T>
T** Allocate(const int rows, const int cols)
{
	//1) Создаем массив указателей:
	T** arr = new T*[rows];

	//2) Выделяем память под строки:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new T[cols] {};
	}
	return arr;
}
void  Clear(int** arr, const int rows)
{
	//1) Сначала удаляем строки:
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	//2) Удаляем массив указателей:
	delete[] arr;
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		//Обращение к элементам массива через арифметику указателей 
		//и оператор разыменования:
		*(arr + i) = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		//Обращение к элементам массива через арифметику указателей 
		//и оператор разыменования:
		*(arr + i) = rand() % (maxRand - minRand) + minRand;
		*(arr + i) /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand();
	}
}

void FillRand(int** arr, const int rows, const int cols)

{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}

}

template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Обращение к элементам массива через оператор индексирования - []:
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>void Print(T** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}

template<typename T>T* push_back(T arr[], int& n, T value)
{
	cout << &n << endl;
	//////////////////////////////////////////////
		//1) Создаем буферный массив нужного размера:
	T* buffer = new T[n + 1];
	//2) Копируем значения из исходного массива в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3) Удаляем исходный массив:
	delete[] arr;
	//4) Подменяем адрес исходного массива адресом нового массива:
	arr = buffer;
	//5) Только после этого в конеце массива появляется свободное место,
	//	 куда можно добавить значение:
	arr[n] = value;
	n++;
	//////////////////////////////////////////////
	//Print(arr, n);
	return arr;
}
template<typename T>T* push_front(T arr[], int& n, T value)
{
	T* buffer = new T[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	buffer[0] = value;
	n++;
	return buffer;
}

template<typename T>T* pop_back(T arr[], int& n)
{
	T* buffer = new T[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}

template<typename T>
T** push_row_back(T** arr, int& rows, const int cols)
{
	//1) Создаем буферный массив указателей нужного размера:
	T** buffer = new T*[rows + 1];

	//2) Копируем строки из исходного массива в массив указателей:
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];

	//3) Удаляем исходный массив указателей:
	delete[] arr;

	//4) Создаем строку и добавляем ее в массив:
	buffer[rows] = new T[cols] {};

	//5) После добавления строки в массив, количество его строк увеличивается:
	rows++;

	return buffer;
}

template<typename T>
T** pop_row_back(T** arr, int& rows, const int cols)
{
	T** buffer = new T*[--rows];
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];
	delete[] arr[rows];	//!!! Удаляем удаляемую строку из памяти !!!
	delete[] arr;
	return buffer;
}

template<typename T>
void push_col_back(T** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		//1) Создаем буферную строку:
		T* buffer = new T[cols + 1]{};
		//2) Копируем значения из исходной строки в буферную:
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		//3) Удаляем исходную строку:
		delete[] arr[i];
		//4) Подменяем адрес строки в массиве указателей:
		arr[i] = buffer;
	}
	cols++;
}