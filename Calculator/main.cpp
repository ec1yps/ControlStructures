#include <iostream>
using namespace std;

//#define CALC_1

void main() {
	setlocale(LC_ALL, "");
	double a, b;
	char s;
	
	cout << "¬ведите выражение: "; cin >> a >> s >> b;

#ifdef CALC_1
	if (s == '+') {
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-') {
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*') {
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/') {
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else {
		cout << "Error: no operation" << endl;
	}
#endif // CALC_1

	switch (s) {
	case '+': cout << a << "+" << b << " = " << a + b << endl; break;
	case '-': cout << a << "-" << b << " = " << a - b << endl; break;
	case '*': cout << a << "*" << b << " = " << a * b << endl; break;
	case '/': 
		if (b != 0) cout << a << "/" << b << " = " << a / b << endl;
		else cout << "Error: divizion by zero" << endl;
		break;
	default: cout << "Error: no operation" << endl;
	}
	main();

}