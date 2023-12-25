#include<iostream>
#include<conio.h>
using namespace std;

//Arrow - Стрелка
#define UP_ARROW		72	//Up - Вверх	
#define DOWN_ARROW		80	//Down - Вниз
#define	LEFT_ARROW		75	//Left - Влево
#define RIGHT_ARROW		77	//Right - Вправо
#define Enter			13
#define Escape			27

void main()
{
	setlocale(LC_ALL, "");
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
			 /*if (key == 'w' || key == 'W' || key == UP_ARROW)	cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)	cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)	cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)cout << "Вправо" << endl;
		else if (key == ' ')cout << "Прыжок" << endl;
		else if (key == 13) cout << "Огонь" << endl;
		else if (key != 27 && key != -32)cout << "Error" << endl;*/

		switch (key)
		{
		case 'W':case 'w':case UP_ARROW:	cout << "Вперед" << endl;	break;
		case 'S':case 's':case DOWN_ARROW:	cout << "Назад" << endl;	break;
		case 'A':case 'a':case LEFT_ARROW:	cout << "Влево" << endl;	break;
		case 'D':case 'd':case RIGHT_ARROW:	cout << "Вправо" << endl;	break;
		case Escape:cout << "Выход" << endl;
		case -32:break;
		default:	cout << "Error" << endl;
		}
	} while (key != 27);
}