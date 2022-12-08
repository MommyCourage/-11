#include <iostream>
#include <Windows.h>

using namespace std;

void random_fill_array(int array[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            array[i][k] = rand() % 10;
        }
    }
}
void show_array(int array[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            cout << array[i][k] << '\t';
        }

        cout << endl;
    }

    cout << endl;
}
void show_array2(int array[4])
{
    for (int i = 0; i < 4; i++)
    {
        cout << array[i] << '\t';
    }
    cout << endl;
}
void function1()
{
    int array[4][4];

    random_fill_array(array);
    show_array(array);

    int a = 0, maximum = 0, maximums[5];

    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            if (maximum < array[i][k])
            {
                maximum = array[i][k];
            }
        }

        maximums[i] = maximum;
        maximum = 0;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << maximums[i] << '\t';
    }

    cout << endl << endl;
}
void function2()
{
    int array[4][4];

    random_fill_array(array);
    show_array(array);

    int number = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            if (array[i][k] < 0)
            {
                number = number + 1;
            }
        }
    }

    cout << "Кількість від'ємних елементів: " << number << endl << endl;
}
void function3()
{
    int array[4][4], ar[4];

    random_fill_array(array);
    show_array(array);

    int minimum = 0, maximum = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            if (array[i][k] > maximum)
            {
                maximum = array[i][k];
            }
            
            if (array[i][k] < minimum)
            {
                minimum = array[i][k];
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
        {
            ar[i] = minimum;
        }
        else{
            ar[i] = maximum;
        }
    }

    show_array2(ar);
}

int main()
{
    function1();
    function2();
    function3();

    return 0;
}