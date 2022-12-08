#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x, y, r;
	cout << "Введіть x: ";
	cin >> x;
	
	cout << "Введіть y: ";
	cin >> y;

	cout << "Введіть r: ";
	cin >> r;

	if ((x >= 0 && sqrt(pow(x, 2) + pow(y, 2))<=r) || (x <= 0 && abs(y) <= x * tan(0.78539816339))) {
		cout << "Точка в області визначення" << endl;
	
	}
	else {
		cout<< "Точка не в області визначення" << endl; 
	}
	return 0;
}

