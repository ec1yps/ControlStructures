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
		cout << "������" << endl;
	else if (key == 's')
		cout << "�����" << endl;
	else if (key == 'a')
		cout << "������" << endl;
	else if (key == 'd')
		cout << "�������" << endl;
	else if (key == ' ')
		cout << "������" << endl;
	else if ((int)key == 13)
		cout << "�����" << endl;
	else if ((int)key == 27)
		exit(0);
	else
		cout << "Error" << endl;
#endif // METOD_1

#ifdef METOD_2
	switch (_getch()) {
	case 'w': cout << "�����" << endl; break;
	case 's': cout << "�����" << endl; break;
	case 'a': cout << "������" << endl; break;
	case 'd': cout << "�������" << endl; break;
	case ' ': cout << "������" << endl; break;
	case 13: cout << "�����" << endl; break;
	case 27: exit(0); break;
	default: cout << "Error" << endl; break;
	}
#endif // METOD_2

	main();
}