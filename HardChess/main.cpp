#include <iostream>
using namespace std;

//#define HARD_CHESS_1
#define HARD_CHESS_2

void main() {
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер доски: "; cin >> n;

#ifdef HARD_CHESS_1
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				for (int l = 0; l < n; l++) {
					cout << (k % 2 == i % 2 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}
#endif // HAED_CHESS_1

#ifdef HARD_CHESS_2
	int k = 0, l = 0;
	for (int i = 0; i < n * n; i++) {
		for (int j = 0; j < n * n; j++) {
			if (k < j % n && l) cout << "* ";
			else {
				cout << "  ";
				k++;
			}
		}
		cout << endl;
	}
#endif // HARD_CHESS_2

}