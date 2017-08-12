/* ### Task 62 ### Created by Vecnik88

This program will ask the user for entering a size for an array.
You need to allocate memory for that array at runtime (Hence the name "Dynamic Arrays").
Then, take input from the user into that array and print the array.

Enter the size of the array: 4
Enter element 0: 1
Enter element 1: 2
Enter element 2: 3
Enter element 3: 4
1 2 3 4

*/

#include <iostream>

using namespace std;

int main()
{
int size, *ary;

cout << "Enter the size of the array: ";
cin >> size;

ary = new int[size];
for (int i{0}; i<size; ++i)
{
    cout << "Enter element " << i << ": ";
    cin >> ary[i];
}

for (int i=0; i<size; i++)
    cout << ary[i] << " ";

return 0;
}
