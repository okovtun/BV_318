#include"Sort.h"

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
		//счетчик 'i' выбирает элемент массива, 
		//в который будет помощено минимальное значение из всех перебираемых.
	{
		for (int j = i + 1; j < n; j++)
			//счетчик 'j' перебирает оставшиеся элементы массива.
		{
			//arr[i] - выбранный элемент.
			//arr[j] - перебираемый элемент.
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	int exchanges = 0;
	//Эти два цикла выбирают элемент:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			/*for (int k = j + 1; k < COLS; k++)
			{
				//arr[i][j] - выбранный элемент
				//arr[i][k] - перебираемый элемент
				iterations++;
				if (arr[i][k] < arr[i][j])
				{
					int buffer = arr[i][j];
					arr[i][j] = arr[i][k];
					arr[i][k] = buffer;
					exchanges++;
				}
			}*/
			//Эти два цикла перебираеют оставшиеся элементы в поиске минимального значения:
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//if (k == i && l == 0)l = j + 1;
					//if (l == COLS)break;
					//arr[i][j] - выбранный элемент
					//arr[k][l] - перебираемый элемент
					iterations++;
					if (arr[i][j] > arr[k][l])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchanges++;
					}
				}
			}
		}
	}
	cout << "Массив отсортирован за " << iterations << " итераций.\n";
	cout << "При этом было выполнено " << exchanges << " обменов элементов.\n";
}