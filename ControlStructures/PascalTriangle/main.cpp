#include<iostream>
using namespace std;

#define WIDTH	8

void main()
{
	setlocale(LC_ALL, "");
	int h;
	cout << "Введите высоту треугольника: "; cin >> h;
	int nf = 1;
	for (int i = 0; i < h; i++)
	{
		cout.width(WIDTH / 2);
		cout << "";
	}
	cout << left;	//задаем выравнивание по левому краю
	cout << 1 << endl;
	for (int n = 1; n <= h; n++)
	{
		nf *= n;
		for (int i = 0; i < h - n; i++)
		{
			cout.width(WIDTH/2);
			cout << "";
		}
		int mf = 1;
		cout.width(WIDTH);
		cout << 1;
		for (int m = 1; m <= n; m++)
		{
			mf *= m;
			int mnf = 1;
			for (int mn = 1; mn <= n - m; mn++)
			{
				mnf *= mn;
			}
			cout.width(WIDTH);	//задаем ширину вывода, а именно, сколько знакопозиций будет занимать выводимое значение.
			//cout.width() воздействует только на одно выводимое значение, для следующего выводимого значения, опять нужно задавать ширину.
			cout << nf / mf / mnf;
		}
		cout << endl;
	}
}