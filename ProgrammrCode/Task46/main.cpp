/* ### Task 46 ### Created by Vecnik88

Take any natural number n.

If n is even, divide it by 2 to get n / 2.
If n is odd, multiply it by 3 and add 1 to get 3n + 1.
Repeat the process indefinitely.
In 1937, Lothar Collatz proposed that no matter what number you begin with, the sequence eventually reaches 1.
This is widely believed to be true, but has never been formally proved.

Write a program that inputs a number from the user, and then displays the Collatz Sequence starting from that number.
Stop when you reach 1.

Starting number: 6
6
3
10
5
16
8
4
2
1

*/

#include <iostream>

using namespace std;

int main()
{
int x;
cout << "Start from:";
cin >> x;

while(x!=1)
{
if(x%2==0)
{
    cout << x << endl;
    x /=2;
}
else
{
    cout << x << endl;
    x = (3*x +1);
}
}
cout << x << endl;
}

