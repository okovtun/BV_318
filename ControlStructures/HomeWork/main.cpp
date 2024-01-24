#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;

	cout << "Введите число паскаля ";  cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int j = 1; cout.width(j - i);
		for (int x = 0; x <= i; x++)
		{
			cout << j << " ";
			j = j * (i - x) / (x + 1);
		}
		cout << endl;
	}
	cout << endl;
}