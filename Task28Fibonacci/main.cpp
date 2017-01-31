/* ### Task 28 ### Created by Vecnik88

Complete the program to display the Fibonacci Series upto n characters. (n>5)

Input:
7
Output:
0 1 1 2 3 5 8

Input:
8
Output:
0 1 1 2 3 5 8 13

*/

#include <iostream>

using namespace std;

int main()
{
unsigned long first, second, third, n;

first = 0;
second = 1;
cout << "\n How many elements (>5): ";
cin >> n;

for(int i{2}; i < n; ++i)
{
    third = second + first;
    cout << third << ' ';
    first = second; second = third;
}

return 0;
}





