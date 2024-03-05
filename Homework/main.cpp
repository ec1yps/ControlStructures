#include <iostream>
using namespace std;

//#define TASK_1
//#define TASK_2

void main() {
	setlocale(LC_ALL, "");

#ifdef TASK_1
	int first_number, second_number;
	char operation;
	cout << "Введите действие число-действие-число: "; cin >>first_number >> operation >> second_number;

	if (operation == '+') {
		cout << first_number << " + " << second_number << " = " << first_number + second_number;
	}
	else if (operation == '-') {
		cout << first_number << " - " << second_number << " = " << first_number - second_number;
	}
	else if (operation == '*') {
		cout << first_number << " * " << second_number << " = " << first_number * second_number;
	}
	else if (operation == '/') {
		cout << first_number << " / " << second_number << " = " << float(first_number) / float(second_number);
	}
#endif // TASK_1

#ifdef TASK_2
	int number, duplicate, reverse_number = 0;

	cout << "Введите число: "; cin >> number;
	duplicate = number;

	do {
		reverse_number *= 10;
		reverse_number += number % 10;
		number = number / 10;
	} while (number != 0);

	if (duplicate == reverse_number)
		cout << "Число является палиндромом";
	else
		cout << "Число не является палиндромом";

#endif // TASK_2


}