#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

void random_fill_array(int array[10])
{
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 20 - 10;
    }
    for (int i = 0; i < 2; i++)
    {
        array[rand() % 10] = 0;
    }
}
void show_array(int array[10]) 
{
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << '\t';
    }
    cout << endl;
}
void function1() 
{
    int array[10];

    random_fill_array(array);
    show_array(array);

    int position = -1;
    
    for (int i = 0; i < 10; ++i) 
    {
        if (array[i] == 0) 
        {
            position = i;
            break;
        }
    }

    if (position == -1) 
    {
        cout << "У масиві немає нулів!\n";
    }
    else 
    {
        cout << "Номер першого нуля у масиві: " << position << endl;
    }

    cout << endl;
}
void function2() 
{
    int array[10];

    random_fill_array(array);
    show_array(array);

    for (int i = 0; i < 10; ++i) 
    {
        if (i != 0 && i != 9) 
        {
            array[i] = array[i - 1] + array[i + 1];
        }
    }

    show_array(array);

    cout << endl;
}
void function3() 
{
    int array[10];

    random_fill_array(array);
    show_array(array);

    int minimum;

    minimum = array[0];
    for (int i = 0; i < 10; i++) 
    {
        if (minimum > array[i]) 
        {
            minimum = array[i];
        }
    }

    cout << "Найменший елемент масиву: " << minimum << endl;

    int position1 = 0, position2 = 0, sum = 0;
    for (int i = 0; i < 10; i++) 
    {
        if (array[i] >= 0) {
            if (position1 != 0) 
            { 
                position1 = i; 
            }
            else 
            {
                position2 = i;
            }
        }
    }

    for (int i = position1; i < position2; i++) 
    {
        sum = sum + array[i];
    }

    cout << "Сума елементів, розташованих між першим і останнім додатним елементами: " << sum << endl;

    int k = 0;
    for (int i = 0; i < 10; i++) 
    {
        if (array[i] == 0) 
        {
            array[i] = array[k];
            array[k] = 0;
            k++;
        }
    }

    show_array(array);

    cout << endl;
}
void function4() 
{
    int array[10];

    random_fill_array(array);
    show_array(array);
    
    int max = 0, max_position = 0, dobutok = 1;

    max_position = 0;
    max = array[0];
    for (int i = 0; i < 10; i++) 
    {
        if (max < array[i]) 
        {
            max = array[i];
            max_position = i;
        }
    }

    cout << "Номер максильного елемента: " << max_position << endl;

    int position1 = 0, position2 = 0;
    for (int i = 0; i < 10; i++) 
    {
        if (array[i] == 0 && position1 == 0) 
        {
            position1 = i;
        }
        else if (array[i] == 0 && position1 != 0) 
        {
            position2 = i;
            break;
        }
    }

    for (int i = position1 + 1; i < position2; i++) 
    {
         dobutok = dobutok * array[i];
    }

    cout << "Добуток елементів масиву, розташованих між першим та другим нулями: " << dobutok << endl;

    int savingArray1[5], savingArray2[5], k1 = 0, k2 = 0;
    for (int i = 0; i < 10; i++) 
    {
        if (i % 2 == 0) 
        {
            savingArray1[k1] = array[i];
            k1 = k1 + 1;
        }
        else if (i % 2 != 0) 
        {
            savingArray2[k2] = array[i];
            k2 = k2 + 1;
        }
    }

    k1 = 0, k2 = 0;
    for (int i = 0; i < 10; i++) 
    {
        if (i < 5) 
        {
            array[i] = savingArray1[k1];
            k1 = k1 + 1;
        }
        else if (i >= 5) 
        {
            array[i] = savingArray2[k2];
            k2 = k2 + 1;
        }
    }

    show_array(array);

    cout << endl;
}
void function5() 
{
    int array[10];

    random_fill_array(array);
    show_array(array);

    int dobutok = 1;
    for (int i = 0; i < 10; i++) 
    {
        if (array[i] > 0)
        {
            dobutok = dobutok * array[i];
        }
    }

    cout << "Добуток додатних елементів масиву: " << dobutok << endl;

    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (array[i] >= 0) 
        {
            sum = sum + array[i];
        }
        else 
        {
            break;
        }
    }

    cout << "Сума елементів масиву, розташованих до першого від'ємного елемента: " << sum << endl << endl;
}
void function6()
{
    int array[10];

    random_fill_array(array);
    show_array(array);

    int sum1 = 0;
    for (int i = 0; i < 10; i++)
    {
        if (array[i] >= 11 && array[i] <= 18)
        {
            sum1 = sum1 + array[i];
        }
    }

    cout << "Сума елементів, що знаходяться на проміжку [11; 18]: " << sum1 << endl;

    int max = array[0], max_position = 0;
    for (int i = 0; i < 10; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            max_position = i;
        }
    }

    int sum2 = 0;
    for (int i = max; i < 10; i++) 
    {  
        sum2 = sum2 + array[i];
    }

    cout << "Сума елементів масиву, розташованих після максимального елемента: " << sum2 << endl;

    int minimum, elem, savingArray[10];
    for (int i = 0; i < 9; ++i) 
    {
        minimum = i;

        for (int j = i + 1; j < 10; ++j) 
        {
            if (abs(array[j]) > abs(array[minimum])) 
            {
                minimum = j;
            }
        }

        elem = array[i];
        array[i] = array[minimum];
        array[minimum] = elem;
    }

    show_array(array);
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    function1();
    function2();
    function3();
    function4();
    function5();
    function6();

    return 0;
}