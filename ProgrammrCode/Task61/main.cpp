/* ### Task 61 ### Created by Vecnik88

Create an array that can hold ten integers, and get input from user.Prompt the user for an integer. Search through the array, and if the item is present, say so. If the value is not in the array, display a single message saying so

Enter 10 values in Array:45
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
Value to find:43
43 is not in the array.3

*/

#include <iostream>

using namespace std;

int main()
{
int a[10], x, c = 0;
cout<<"Enter 10 values in Array:";

for(int i = 0; i < 10; ++i)
    cin >> a[i];

cout << "Value to find:";
cin >> x;

for(int i = 0; i < 10; ++i)
    if(a[i]==x) c=1;

for(int j = 0; j < 10; ++j)
    cout << a[j] << ' ';

cout << endl;

if(c==1)
    cout<<x<<" is in the array.";
else
    cout<<x<<" is not in the array.";

return 0;
}

