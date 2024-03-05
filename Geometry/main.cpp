#include <iostream>
using namespace std;

//#define TASK_0
//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
#define TASK_5
//#define TASK_6

void main() {
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите количество строк: "; cin >> n;

#ifdef TASK_0
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "* ";
		}
		cout << endl;
	}
#endif // TASK_0

#ifdef TASK_1
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
#endif // TASK_1

#ifdef TASK_2
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
#endif // TASK_2


#ifdef TASK_3
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < (n - i); j++)
			cout << "  ";
		for (int j = 0; j < i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
#endif // TASK_3

#ifdef TASK_4
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (n - i - 1); j++)
			cout << "  ";
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
#endif // TASK_4

#ifdef TASK_5
	for (int i = 0; i < n; i++) {
		for (int j = (n / 2); j > i; j--) {
			cout << " ";
		}
		
		cout << endl;
		
	}
#endif // TASK_5


#ifdef TASK_6
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			if (i % 2 == 0) {
				cout << "+ ";
				if (j == 2) break;
				cout << "- ";
			}
			else {
				cout << "- ";
				if (j == 2) break;
				cout << "+ ";
			}
		}
		cout << endl;
	}
#endif // TASK_6

}