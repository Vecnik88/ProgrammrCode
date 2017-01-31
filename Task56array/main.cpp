/* ### Task 56 ### Created by Vecnik88

Write a program that asks the user to type 4 integers of an array.
The program will then sort the array in ascending order and display it.

Input:
enter an integer:
3
enter an integer:
2
enter an integer:
6
enter an integer:
7
Output:
The sorted array:
a[0] = 2
a[1] = 3
a[2] = 6
a[3] = 7

Input:
enter an integer:
32
enter an integer:
21
enter an integer:
67
enter an integer:
73
Output:
The sorted array:
a[0] = 21
a[1] = 32
a[2] = 67
a[3] = 73

*/

#include <iostream>

using namespace std;

const int N=4;

int main()
{
int a[N],j,tmp;

for (int i = 0;i < N; ++i)
{
    cout << "Please enter an integer: ";
    cin >> a[i];
}

for(int i = 0; i < N; ++i)              // <---... Insertion sort O(n^2), в лучшем случае O(n)
{                                       // <---... Сортировка вставками O(n^2), в лучшем случае O(n)
    tmp = a[i];
    j = i-1;
    while(j>=0 && a[j]>tmp)
    {
    a[j+1] = a[j];
    --j;
}
    a[j+1] = tmp;
}

cout << "The sorted array:" << endl;

for (int i = 0; i < N; ++i)
    cout << "a[" << i << "] = " << a[i] << endl;

return 0;
}
