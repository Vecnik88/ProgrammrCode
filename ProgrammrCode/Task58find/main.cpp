/* ### Task 58 ### Created by Vecnik88

Create an array that can hold ten integers, and fill each slot with a different random value from 1-50. Display those values on the screen, and then prompt the user for an integer. Search through the array, and if the item is present, give the slot number where it is located. If the value is not in the array, display a single message saying so. If the value is present more than once, display the message as many times as necessary.

Enter 10 values in array:45
39
32
35
28
20
28
18
28
5
Array: 45 39 32 35 28 20 28 18 28 5
Value to find: 28
28 is in slot 4
28 is in slot 6
28 is in slot 8

Enter 10 values in array:45
29
12
38
98
0
78
16
28
9
Array: 45 29 12 38 98 0 78 16 28 9
Value to find: 28
5 is not in the array.

*/

#include <iostream>

using namespace std;

int main()
{
int ary[10], n,flag =0;
cout << "Enter 10 values in array:";

for (int i=0; i<10; i++)
{
    cin >> ary[i];
}
cout << "Array:";
for (int i=0; i<10; i++)
    cout << ary[i] << " ";

cout << "\nValue to find:";
cin >> n;

for(int i = 0; i < 10; ++i)
    if(ary[i] == n)
    {
        cout << n << " is in slot " << i << endl;
        ++flag;
    }

if(flag==0)
    cout << n << " is not in the array." << endl;

return 0;
}
