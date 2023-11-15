#include<iostream>
using namespace std;

#define offset "\t\t\t\t\t"
//Директива #define (определить) создает макроопределение (макрос),
//т.е., показывает компилятору, что заменить и чем заменить
#define NAME value
#define ИМЯ_МАКРОСА  значение_макроса

///////////////////////////////////////////////////
//#define ELOCHKA

//Строчный комментарий

/*
	Блочный комментарий
*/

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined ELOCHKA
	cout << "\t\t\t\t\t\t\"Ёлочка\"\n\n";

	cout << offset << "В лесу родилась ёлочка,\n";
	cout << offset << "В лесу она росла.\n";
	cout << offset << "Зимой и летом стройная,\n";
	cout << offset << "Зеленая была.\n\n";

	cout << offset << "Метель ей пела песенку :\n";
	cout << offset << "\"Спи, ёлочка, бай - бай!\"\n";
	cout << offset << "Мороз снежком укутывал :\n";
	cout << offset << "\"Смотри, не замерзай!\"\n\n";

	cout << offset << "Трусишка зайка серенький\n";
	cout << offset << "Под ёлочкой скакал.\n";
	cout << offset << "Порою волк, сердитый волк,\n";
	cout << offset << "Рысцою пробегал.\n\n";

	cout << offset << "Чу! Снег по лесу частому\n";
	cout << offset << "Под полозом скрипит\n";
	cout << offset << "Лошадка мохноногая\n";
	cout << offset << "Торопится, бежит.\n\n";

	cout << offset << "Везёт лошадка дровенки\n";
	cout << offset << "А в дровнях мужичок\n";
	cout << offset << "Срубил он нашу ёлочку\n";
	cout << offset << "Под самый корешок.\n\n";

	cout << offset << "Теперь она, нарядная,\n";
	cout << offset << "На праздник к нам пришла,\n";
	cout << offset << "И много, много радости\n";
	cout << offset << "Детишкам принесла.\n\n";
#endif

}

/*
	Ctrl+F - Поиск по тексту
	Ctrl+H - Замена
*/