#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	
	cout << "������: ";
	cin >> n;

	if (n == 0) {
		cout << "����,zero" << endl;
	}
	else if (n == 1) {
		cout << "����, one" << endl;
	}
	else if (n == 2) {
		cout << "���,two" << endl;
	}
	else if (n == 3) {
		cout << "���,three" << endl;
	}
	else if (n == 4) {
		cout << "������,four" << endl;
	}
	else if (n == 5) {
		cout << "�'���,five"<< endl;
	}
	else {
		cout << "���� ����� �� ��������" << endl;
	}
	cout << "������: ";
	cin >> n;

	switch (n) {
	case 0:
		cout << "����,zero" << endl;
		break;
	case 1:
		cout << "����, one" << endl;
		break;
	case 2:
		cout << "���,two" << endl;
		break;
	case 3:
		cout << "���,three" << endl;
		break;
	case 4:
		cout << "������,four" << endl;
		break;
	case 5 :
		cout << "�'���,five" << endl;
		break;
	
	default: 
	cout << "���� ����� �� ��������" << endl;
	break;
	}
		return 0;
}