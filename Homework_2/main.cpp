#include <iostream>
#include <conio.h>
using namespace std;

//#define FIGURE_SIZE
//#define RHOMB_1
//#define PLUS_MINUS_SQUARE
//#define RHOMB_2
//#define RHOMB_3
//#define REPLACE_THE_VARIABLES

//#define CHESSBOARD
//#define HARD_CHESS

#define UP_L_CORNER (char)218
#define UP_R_CORNER (char)191
#define D_L_CORNER (char)192
#define D_R_CORNER (char)217
#define V_LINE (char)179
#define H_LINE (char)196
#define BLOCK (char)219

void main() {
	setlocale(LC_ALL, "");

#ifdef FIGURE_SIZE
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
#endif // FIGURE_SIZE

#ifdef RHOMB_1
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n - 1; j++)
			cout << " ";
		cout << "/";
		for (int j = 0; j < i; j++)
			cout << "  ";
		cout << "\\" << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++)
			cout << " ";
		cout << "\\";
		for (int j = i; j < n - 1; j++)
			cout << "  ";
		cout << "/" << endl;
	}
#endif // RHOMB_1

#ifdef PLUS_MINUS_SQUARE
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i % 2 == j % 2) cout << "+ ";
			else cout << "- ";
		}
		cout << endl;
	}
#endif // PLUS_MINUS_SQUARE

#ifdef RHOMB_2
	for (int i = 0; i < n; i++) {
		if (i < n / 2) {
			for (int j = i; j < (n / 2 - 1); j++)
				cout << " ";
			cout << "/";
			for (int j = 0; j < i; j++)
				cout << "  ";
			cout << "\\";
		}
		else {
			for (int j = n/2; j < i; j++) 
				cout << " ";
			cout << "\\";
			for (int j = i; j < n-1; j++)
				cout << "  ";
			cout << "/";
		}
		cout << endl;
	}
#endif // RHOMB_2

#ifdef RHOMB_3
	for (int i = 0; i < n * 2; i++) {
		for (int j = 0; j < n * 2; j++) {
			if (i + n == j || j + n == i) cout << "\\";
			else if (n - j % n - 1 == i % n && i + j != n * 2 - 1) cout << "/";
			//else if (n - 1 - j == i || n * 2 + n - i - 1 == j) cout << "/";
			else cout << " ";
		}
		cout << endl;
	}
#endif // RHOMB_3

#ifdef REPLACE_THE_VARIABLES
	int a, b;
	cout << "Введите переменную a: "; cin >> a;
	cout << "Введите переменную b: "; cin >> b;
	a += b;
	b = a - b;
	a = a - b;
	cout << "Переменная a = " << a << endl;
	cout << "Переменная b = " << b << endl;
#endif // REPLACE_THE_VARIABLES


#ifdef CHESSBOARD
	setlocale(LC_ALL, ".866");
	for (int i = 0; i <= n + 1; i++) {
		for (int j = 0; j <= n + 1; j++) {
			if (i == 0 && j == 0) cout << UP_L_CORNER;
			else if (i == 0 && j == n + 1) cout << UP_R_CORNER;
			else if (i == n + 1 && j == 0) cout << D_L_CORNER;
			else if (i == n + 1 && j == n + 1) cout << D_R_CORNER;
			else if (i == 0 || i == n + 1) cout << H_LINE << H_LINE;
			else if (j == 0 || j == n + 1) cout << V_LINE;
			else if (j % 2 == i % 2) cout << BLOCK << BLOCK;
			else cout << "  ";
		}
		cout << endl;
	}
#endif // CHESSBOARD


#ifdef HARD_CHESS
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				for (int m = 0; m < n; m++) {
					if (k % 2 == i % 2) cout << "* ";
					else cout << "  ";
				}
			}
			cout << endl;
		}
	}
#endif // HARD_CHESS

}