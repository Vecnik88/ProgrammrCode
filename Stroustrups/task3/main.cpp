/* Task3 Strau ### Created by Vecnik88

    -   Напишите функцию catdog, возвращающую С строку размещенную в динамической памяти.

    -   Write Catdog function returns with a string placed on the heap

*/

#include <iostream>
//#include <cstring>

using namespace std;

int strlen(char* pos)                   // <---. ф-ция проверки длины массива
{
    int count = 0;
    while(pos[count])
    {++count;}
    return count;
}

char* catdog(char* a, int length)       // <---. ф-ция принимающая указатель на строку
{                                       // <---. и размещающая ее в динамической памяти
    char* dog = new char[length];
    for(int i{0}; i < length; ++i)
    {
        dog[i]=a[i];
    }
    a=dog;

    return a;
}

int main()
{
    char* cat = "Hello Hello";

    cout << catdog(cat,strlen(cat)) << endl;

    delete[] cat;

    return 0;
}

