/* ### Task 60 ### Created by Vecnik88

The array ary[10] can hold 10 integers.
Enter 10 values in that array.
Find the largest integer inside the array and display it on the screen.

Enter 10 values in array:45
87
39
32
93
86
12
44
75
50
The largest value is 93

*/

#include <iostream>

using namespace std;

int main()
{

int max = 0, ary[10];
cout << "Enter 10 values in array:";

for (int i=0; i<10; i++)                        // <---. ввод массива
{
    cin >> ary[i];
}

for (int i = 0; i < 10; ++i)                    // <---. находим максимальное значение
    if(ary[i]>max) max = ary[i];

cout << "The largest value is " << max;

return 0;
}

