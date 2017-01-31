/* ### Task 41 ### Created by Vecnik88

Write a program that prints the n numbers divisible by 2.

Input:
5
Output:
2 4 6 8 10

Input:
7
Output:
2 4 6 8 10 12 14

*/

#include <iostream>

using namespace std;

int main()
{
int n; long k = 0;
cout << "Enter the value of n: ";
cin >> n;

while(n>0)
{
    k+=2;
    cout << k << ' ';
    --n;
}

 return 0;
}

