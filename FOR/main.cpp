#include <iostream>
#include <cmath>
#include <conio.h>
#include <ctime>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define WHILE
//#define FOR

//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
//#define TASK_2_V2

//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI_1
//#define FIBONACCI_2

//#define PROSTIE_CHISLA
//#define T_UMNOJENIA
//#define T_PIFAGORA

//#define SIMPLEX_NUMBERS
//#define MULTIPLICATION_TABLE

void main() {
	setlocale(LC_ALL, "");

#ifdef WHILE
	int i = 0;
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n) {
		cout << "Hello\n";
		i++;
	}
#endif // WHILE

#ifdef FOR
	int n;
	cout << "Введите количество итераций:  "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++) {
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR

#ifdef TASK_1
	int chislo;
	double factorial = 1;
	cout << "Введите число, чтобы вычислить его факториал: "; cin >> chislo;

	if (chislo < 0) {
		cout << "ERROR: введено отрицательное число\n\n";
		main();
	}
	else {
		for (int i = 1; i <= chislo; i++) {
			factorial *= i;
		}
		cout << chislo << "! = " << factorial << endl;
	}
#endif // TASK_1

#ifdef TASK_2
	double chislo, stepen;
	cout << "Введите число: "; cin >> chislo;
	cout << "Введите степень: "; cin >> stepen;
	cout << chislo << "^" << stepen << " = " << pow(chislo, stepen);
#endif // TASK_2

#ifdef TASK_3
	for (int i = 33; i < 256; i++) {
		cout << (char) i << " ";
		if (i % 16 == 0) cout << endl;
	}
#endif // TASK_3

#ifdef TASK_4
	int chislo, sum = 0, slog_1 = 0, slog_2 = 1;
	cout << "Введите число, до которого не обходимо вывести ряд Фибоначчи: "; cin >> chislo;
	if (chislo < 0) {
		cout << "ERROR: введено некорректное значение\n\n";
		main();
	}
	else if (chislo == 0) cout << "Ряд Фибоначчи: 0";
	else {
		cout << "Ряд Фибоначчи: " << sum << " " << slog_2;
		while (sum < chislo) {
			sum = slog_1 + slog_2;
			slog_1 = slog_2;
			slog_2 = sum;
			cout << " " << sum;
		}

	}
#endif // TASK_4

#ifdef TASK_5
	int chislo, slog_1 = 0, slog_2 = 1, sum = 0, ryad = 0;
	cout << "Введите число, равное колличеству значения рада Фибоначчи: "; cin >> chislo;
	if (chislo < 0) {
		cout << "ERROR: введено некорректное значение\n\n";
		main();
	}
	else if (chislo == 0) cout << "Ряд Фибоначчи: 0";
	else {
		cout << "Ряд Фибоначчи: " << sum << " " << slog_2;
		for (int i = 2; i < chislo; i++) {
				sum = slog_1 + slog_2;
				slog_1 = slog_2;
				slog_2 = sum;
				cout << " " << sum;
		}
	}
#endif // TASK_5

#ifdef TASK_2_V2
	double chislo, pokazatel, resultat = 1;
	cout << "Введите число: "; cin >> chislo;
	cout << "Введите показатель степени: "; cin >> pokazatel;
	for (int i = 0; i < pokazatel; i++) {
		resultat *= chislo;
	}
	cout << chislo << "^" << pokazatel << " = " << resultat;
#endif // TASK_2_V2

//------------------------------------------------

#ifdef FACTORIAL
	int n;
	cout << "Введите число: "; cin >> n;
	double f = 1;

	for (int i = 1; i <= n; i++) {
		cout << i << "! = ";
		f *= i;
		cout << f << "\n";
	}
	cout << n << "! = " << f;

#endif // FACTORIAL

#ifdef POWER
	double a;
	int n;
	double N = 1;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0) {
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++) {
		N *= a;
	}
	cout << N;
#endif //POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++) {
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII

#ifdef FIBONACCI_1
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b) {
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACCI_1

#ifdef FIBONACCI_2
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 0, a = 0, b = 1, c = a + b; i < n; a = b, b = c, c = a + b, i++) {
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACCI_2

//------------------------------------------------

#ifdef PROSTIE_CHISLA
	int predel;
	cout << "Введите предельное число: "; cin >> predel;
	for (int a = 1, i = 0; i < predel; i++, a++) {
		if (a % 2 != 0 && a % 3 != 0 && a % 5 != 0 && a % 7 != 0) cout << a << "\t";
		if (a == 2 || a == 3 || a == 5 || a == 7) cout << a << "\t";
	}
#endif // PROSTIE_CHISLA

#ifdef T_UMNOJENIA
	for (int i = 2, a = 1; i < 10, a <= 10; i++) {
		if (i < 10) cout << " ";
		cout << i << " * ";
		if (a < 10) cout << " ";
		cout << a << " = ";
		if (i * a < 100) cout << " ";
		if (i * a < 10) cout << " ";
		cout << i * a << "\t";
		if (i == 9) {
			i = 1;
			a++;
			cout << endl;
		}
	}
#endif // T_UMNOJENIA

#ifdef T_PIFAGORA
	for (int i = 1, a = 1; i <= 10, a <= 10; i++) {
		if (a * i < 100) cout << " ";
		if (a * i < 10) cout << " ";
		cout << a * i << "\t";
		if (i == 10) {
			i = 1;
			a++;
			if (a < 10)cout << endl << "  " << a << "\t";
			if (a == 10)cout << endl <<" "<< a << "\t";
		}
	}
	cout << endl;
#endif // T_PIFAGORA

//------------------------------------------------

#ifdef SIMPLEX_NUMBERS
	system("COLOR 0A");
	int n;
	cout << "Введите предельное число: "; cin >> n;
	int simplex_counter = 0;
	time_t start = clock();
	for (int i = 0; i <= n; i++) {
		bool simple = true;
		for (int j = 2; j < sqrt(i); j++) {
			if (i % j == 0) {
				simple = false;
				break;
			}
		}
		if (simple) simplex_counter++;
			//cout << (simplex_counter++, i) << "\t";
	}
	time_t end = clock();
	cout << endl;
	cout << "Amount of simplex numbers: " << simplex_counter << endl;
	cout << "Calculated by " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;
#endif // SIMPLEX_NUMBERS

#ifdef MULTIPLICATION_TABLE
	for (int i = 1; i <= 10; i++) {
		cout << "Таблица умножения на " << i << endl;
		for (int j = 1; j <= 10; j++) {
			if (i < 10) cout << " ";
			cout << i << " * ";
			if (j < 10) cout << " ";
			cout << j << " = ";
			if (i * j < 100) cout << " ";
			if (i * j < 10) cout << " ";
			cout << i * j << endl;
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE

}