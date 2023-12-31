﻿#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "\t\t\t\t\tHello World\n";
	cout << "Привет \"Мир\"!\n";
	cout << "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Enterprise\\VC\\Tools\\MSVC\\14.16.27023";
}

//Ctrl + F7 - Компиляция
//Ctrl + F5 - Запуск

/*
-----------------------------------------
#include<iostream>
# - показывает что #include - это директива.
Директива - это указание компилятору на выполнение некоторых действий.
Директива #include указывает компилятору на то, что к нашему исходному файлу
нужно подключить другой файл, в данном случае <iostream>.
include - включить (в состав), подключить.
<> - компилятор будет искать его в сисемных каталогах Visual Studio.
"" - компилятор будет искать его сначала в каталоге с проектом, 
	 а потом в системных каталогах Visual Studio.

Библиотека <iostream> содержит потоки ввода/вывода cin/cout.

-----------------------------------------
using namespace std; говорит компилятору неявно использовать пространство имен std;
В этом именном пространстве находятся потоки ввода/вывода cin/cout.
-----------------------------------------
void main()
main() - это главная функция, которая является точкой входа,
поскольку с нее начинается выполнение любой программы.
Функция main() обязательно должна быть в любом проекте, но только одна.

Ключевое слово 'void' (пустота) показывает, что функция main() ничего не возвращает по заврешении.

() - показывают что main() - это функция, а не переменная.
{} - показывают тело и область видимости функции main()
-----------------------------------------
cout << "Hello World";
cout (Console Out) - это поток вывода на экран, выводит любые значения в окно консоли.
<< - оператор перенаправления в поток.
"Hello World" - это строковая константа.
-----------------------------------------
; - конец выражения на языке C++
-----------------------------------------
*/

/*
-----------------------------------------
				Escape-последовательности:
\@ - бкува 'a' экранирована символом '\'
\ - Backslash - это символ отмены специального значения другого символа

\" - вывод кавычек в консоль.
\\ - вывод символа '\' в консоль.

\n - newline, переводит курсор в начало следующей строки
\t - tab, выводит в консоль символ табуляции
\a - alarm, вывод звукового сигнала
-----------------------------------------
*/