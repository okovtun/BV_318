//FOR
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n = 5;



	for (
		int i = 0; 
		i < n; 
		i++
		)
	{
		cout << i << "\t";
	}
	cout << endl;


}

//for (counter; condition; expression)
//{
//	.....;
//	group - of - statements;
//	.....;
//}
//counter - это счетчик цикла
//condition - это условие прдолжения или звершения цикла
//expression - это выражение, которое изменяет счетчик ++/--