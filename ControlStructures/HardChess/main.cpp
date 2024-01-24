//HardChess
#include<iostream>
using namespace std;

//#define HARDCORE_1
#define HARDCORE_2

void main()
{
	setlocale(LC_ALL, "");
	int i;
	//cin >> i;
	int j = i;
	//i = i / 5 & 1;
	cout << i << endl;
	int n;
	cout << "Введите размер доски: "; cin >> n;
	//int k = i / n & 1 == j / n & 1;
	//cout << k << endl;

#ifdef HARDCORE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					cout << (i % 2 == k % 2 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}
#endif // HARDCORE_1
	//bool, char, short ... long long int
	for (int i = 0; i < n*n; i++)
	{
		for (int j = 0; j < n*n; j++)
		{
			cout << (i / n & 1 ^ j / n & 1 ? "* " : "  ");
			//cout << ((i / n + j / n) % 2 ? "* " : "  ");
			//cout << ((i / n) % 2 == (j / n) % 2 ? "* " : "  ");
		}
		cout << endl;
	}
}