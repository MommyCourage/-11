#include <iostream>
#include <string>
#include <math.h>
#include <Windows.h>

using namespace std;

void function1(string number)
{
    char ch;
    string save = number;

    for (int i = 0; i < number.length() - (int)(number.length() / 2); i++)
    {
        ch = number[i];
        number[i] = number[number.length() - 1 - i]; 
        number[number.length() - 1 - i] = ch;
    }

    if (number == save)
    {
        cout << "������� ����� � ��������!" << endl << endl;
    }
    else
    {
        cout << "������� ����� � �� ��������!" << endl << endl;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string number;

    cout << "*�������� ����� �� ������������*" << endl;
    cout << "������ �����: ";
    cin >> number;
    function1(number);

    return 0;
}