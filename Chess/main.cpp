#include <iostream>
using namespace std;

#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define LOWER_LEFT_ANGLE (char)192
#define LOWER_RIGHT_ANGLE (char)217
#define VERTICAL_LINE (char)179
#define HORIZONTAL_LINE (char)196 << (char)196
#define BLOCK "\xDB\xDB" //(char)219 << (char)219
#define PROBEL "\x20\x20"

//#define ASCII
//#define CHESSBOARD
//#define HARD_CHESS
#define PASCALS_TRIANGLE

void main() {
#ifdef ASCII
	for (int i = 176; i < 224; i++) {
		/*if(i%16)
		cout << (char)i << " ";*/
		cout << i << "\t" << (char)i;
	}
#endif // ASCII

	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер доски: "; cin >> n; 
#ifdef CHESSBOARD
	n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0) cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n) cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n) cout << VERTICAL_LINE;
			/*else if (i % 2 == j % 2) cout << BLOCK;
			else cout << PROBEL;*/
			else cout << (i % 2 == j % 2 ? BLOCK : PROBEL);
		}
		cout << endl;
	}
#endif // CHESSBOARD

#ifdef HARD_CHESS
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				for (int m = 0; m < n; m++) {
					/*if (k % 2 == i % 2) cout << "* ";
					else cout << "  ";*/
					cout << (k % 2 == i % 2 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}
#endif // HARD_CHESS

#ifdef PASCALS_TRIANGLE
	for (int i = 0, f_1 = 1; i <= n; i++) {
		if (i > 0) f_1 *= i;
		for (int j = 0, r, f_2 = 1, f_3; j <= i; j++) {
			f_3 = 1;
			r = i - j;
			if (j > 0) f_2 *= j;
			for (int k = 1; k <= r; k++) {
				f_3 *= k;
			}
			cout << f_1 / (f_2 * f_3) << "  ";
		}
		cout << endl;
	}
#endif // PASCALS_TRIANGLE

}