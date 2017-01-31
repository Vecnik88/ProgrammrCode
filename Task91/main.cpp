/* ### Task 91 ### Created by Vecnik88

In this exercise you have to overload the function OVERLOAD()
to display either an array of characters or an array of integers or an array of floating numbers.
You have to pass the array and size of array as arguments. OVERLOAD() has no return types.
It prints all the elements inside the array separated by a tab in between them.

Enter 1 for character array, 2 for float point array or 3 for integer array: 3
Enter size of array: 3
Enter value for index 0: 1
Enter value for index 1: 2
Enter value for index 2: 3
1     2     3

Enter 1 for character array, 2 for float point array or 3 for integer array: 1
Enter size of array: 3
Enter value for index 0: a
Enter value for index 1: b
Enter value for index 2: c
a     b     c

*/

#include <iostream>

using namespace std;

void OVERLOAD(char* aryC, int size)
{
    for(int i = 0; i < size; ++i)
        cout << aryC[i] << ' ';
}

void OVERLOAD(int* aryF, int size)
{
    for(int i = 0; i < size; ++i)
        cout << aryF[i] << ' ';
}

void OVERLOAD(float* aryI,int size)
{
    for(int i = 0; i < size; ++i)
        cout << aryI[i] << ' ';
}

int main()
{
    int choice, size;
    char *aryC;
    int *aryI;
    float *aryF;
    cout << "Enter 1 for character array, 2 for float point array or 3 for integer array: ";
    cin >> choice;
    cout << "Enter size of array: ";
    cin >> size;

    switch(choice)
    {
    case 1:
        aryC = new char[size];
        for (int i=0; i<size; i++)
        {
            cout << "Enter value for index " << i << ": ";
            cin >> aryC[i];
        }
        OVERLOAD(aryC, size);
        break;

    case 2:
        aryF = new float[size];
        for (int i=0; i<size; i++)
        {
            cout << "Enter value for index " << i << ": ";
            cin >> aryF[i];
        }
        OVERLOAD(aryF, size);
        break;

    case 3:
        aryI = new int[size];
        for (int i=0; i<size; i++)
        {
            cout << "Enter value for index " << i << ": ";
            cin >> aryI[i];
        }
        OVERLOAD(aryI, size);
        break;
    }

    return 0;
}


