#include <iostream>
#include <conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define IF_ELSE
//#define WHILE_1
//#define WHILE_2

void main() {
	setlocale(LC_ALL, "");

#ifdef IF_ELSE
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature > 0) {
		cout << "�� ����� �����" << endl;
	}
	else {
		cout << "�� ����� �������" << endl;
	}
#endif // IF_ELSE

#ifdef WHILE_1
	int i = 0; //������� �����
	int n; //���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (++i < n) {
		cout << i << " Hello world\n";
		//i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << " ������� ���������� ��������: "; cin >> n;
	while (n--) {
		cout << n << " Hello world" << endl;
	}
	cout << n << endl;
#endif // WHILE_2

	char key;
	do {
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (true);
}