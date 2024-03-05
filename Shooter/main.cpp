#include <iostream>
#include <conio.h>
using namespace std;

//#define METOD_1
//#define METOD_2

void main() {
	setlocale(LC_ALL, "");

#ifdef METOD_1
	char key = _getch();
	if (key == 'w')
		cout << "Вперед" << endl;
	else if (key == 's')
		cout << "Назад" << endl;
	else if (key == 'a')
		cout << "Налево" << endl;
	else if (key == 'd')
		cout << "Направо" << endl;
	else if (key == ' ')
		cout << "Прыжок" << endl;
	else if ((int)key == 13)
		cout << "Огонь" << endl;
	else if ((int)key == 27)
		exit(0);
	else
		cout << "Error" << endl;
#endif // METOD_1

#ifdef METOD_2
	switch (_getch()) {
	case 'w': cout << "Прямо" << endl; break;
	case 's': cout << "Назад" << endl; break;
	case 'a': cout << "Налево" << endl; break;
	case 'd': cout << "Направо" << endl; break;
	case ' ': cout << "Прыжок" << endl; break;
	case 13: cout << "Огонь" << endl; break;
	case 27: exit(0); break;
	default: cout << "Error" << endl; break;
	}
#endif // METOD_2

	main();
}