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
        cout << "¬ведене число Ц пал≥ндром!" << endl << endl;
    }
    else
    {
        cout << "¬ведене число Ц не пал≥ндром!" << endl << endl;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string number;

    cout << "*ѕерев≥рка числа на пал≥ндромн≥сть*" << endl;
    cout << "¬вед≥ть число: ";
    cin >> number;
    function1(number);

    return 0;
}