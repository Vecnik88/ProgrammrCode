/* ### Task 59 ### Created by Vecnik88

Create an array that can hold ten integers, and get input from user.
Display those values on the screen, and then prompt the user for an integer.
Search through the array, and count the number of times the item is found.

Enter 10 values in array:45
39
32
12
44
50
26
42
16
20
Array:45 39 32 12 44 50 26 42 16 20
Value to find: 42
42 was found 1 times.

*/

#include <iostream>

using namespace std;

int main()
{

cout<<"Enter 10 values in array:";
int a[10];

for(int i = 0; i < 10; ++i)
    cin >> a[i];

cout << "Value to find:";
int n,j = 0;
cin >> n;

for(int i = 0; i < 10; ++i)
{
    if(a[i]==n) ++j;
}

cout << "Array:";
for(int i = 0; i < 10; ++i)
    cout << a[i] << ' ';

cout << endl << n << " was found " << j << " times.";

return 0;
}

