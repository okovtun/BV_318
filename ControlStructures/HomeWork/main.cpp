#include <iostream>

using namespace std;

#define TASK 2


int main() {
	int sizeTable;

#if TASK == 1
	setlocale(LC_ALL, "Russian");
	int sizeSquare;
	cout << "Укажите размер шахматной доски: ";
	cin >> sizeTable;
	sizeTable -= 2; // Для корректной визуализации
	cout << "Укажите размер клетки: ";
	cin >> sizeSquare;
	// Вывод доски
	for (int i = 0; i < sizeTable; i++) {
		// Вывод строки, где первым является закрашеный квадрат
		for (int i = 0; i < sizeSquare; i++) {
			for (int i = 0; i < sizeTable; i++) {
				for (int j = 0; j < sizeSquare; j++) {
					cout << '*';
				}
				for (int j = 0; j < sizeSquare; j++) {
					cout << ' ';
				}
			}
			cout << endl;
		}
		if (i == sizeTable - 1) {
			break;
		}
		// Вывод строки, где первым является пустой квадрат
		for (int i = 0; i < sizeSquare; i++) {
			for (int i = 0; i < sizeTable - 1; i++) {
				for (int j = 0; j < sizeSquare; j++) {
					cout << ' ';
				}
				for (int j = 0; j < sizeSquare; j++) {
					cout << '*';
				}
			}
			cout << endl;
		}
	}

#elif TASK == 2
	std::cout << "Please write size of table: ";
	std::cin >> sizeTable;
	char symbolLT = char(218), symbolRT = char(191), symbolRB = char(217),
		symbolLB = char(192), symbolTB = char(196), symbolRL = char(179);
	char symbolSquare = char(178), symbolEmpty = char(176);
	// Вывод доски
	std::cout << symbolLT;
	for (int i = 0; i < sizeTable; i++) {
		std::cout << symbolTB;
	}
	std::cout << symbolRT << endl;
	for (int i = 0; i < sizeTable; i++) {
		std::cout << symbolRL;
		// Вывод строки, где первым является закрашен
		for (int j = 0; j < sizeTable; j++) {
			if ((i + j) % 2 == 0) {
				std::cout << symbolSquare;
			}
			else {
				std::cout << symbolEmpty;
			}
		}
		std::cout << symbolRL << endl;
	}
	std::cout << symbolLB;
	for (int i = 0; i < sizeTable; i++) {
		std::cout << symbolTB;
	}
	std::cout << symbolRB << endl;
#elif
	cout << "Неизвестная задача" << endl;
#endif

	return 0;
}