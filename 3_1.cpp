#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    int array[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            array[i][k] = rand() % 10;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            cout << array[i][k] << '\t';
        }

        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            for (int l = 1; l < 4; l++)
            {
                for (int g = 1; g < 4; g++)
                {
                    if (array[i][k] == array[l][g])
                    {
                        array[i][k] = 0;
                        array[l][g] = 0;
                    }
                }
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            cout << array[i][k] << '\t';
        }

        cout << endl;
    }

    return 0;
}