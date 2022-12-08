#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	
	cout << "Введіть: ";
	cin >> n;

	if (n == 0) {
		cout << "нуль,zero" << endl;
	}
	else if (n == 1) {
		cout << "один, one" << endl;
	}
	else if (n == 2) {
		cout << "два,two" << endl;
	}
	else if (n == 3) {
		cout << "три,three" << endl;
	}
	else if (n == 4) {
		cout << "чотири,four" << endl;
	}
	else if (n == 5) {
		cout << "п'ять,five"<< endl;
	}
	else {
		cout << "Таке число не підходить" << endl;
	}
	cout << "Введіть: ";
	cin >> n;

	switch (n) {
	case 0:
		cout << "нуль,zero" << endl;
		break;
	case 1:
		cout << "один, one" << endl;
		break;
	case 2:
		cout << "два,two" << endl;
		break;
	case 3:
		cout << "три,three" << endl;
		break;
	case 4:
		cout << "чотири,four" << endl;
		break;
	case 5 :
		cout << "п'ять,five" << endl;
		break;
	
	default: 
	cout << "Таке число не підходить" << endl;
	break;
	}
		return 0;
}