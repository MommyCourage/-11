#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int difPairs, array[100];

    for (int i = 0; i < 100; i++)
    {
        array[i] = rand() % 200 - 100;
    }

    for (int i = 0; i < 99; i++)
    {
        if (array[i] != array[i + 1])
        {
            difPairs = difPairs + 1;
        }
    }

    cout << "Кількість різних пар сусідніх елементів: " << difPairs << endl;

    return 0;
}