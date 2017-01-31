/* ### Task 87 ### Created by Vecnik88

Write a C++ program that finds the factorial of a given number using a function.

Input:
Enter a number:2
Output:
2

Input:
Enter a number:4
Output:
24

*/

#include <iostream>

using namespace std;

int main()
{
   int a, mul;
   cout << "Enter a number:";
   cin >> a;

int fact(int x);
mul = fact(a);
cout << mul;
}

int fact(int x)
{
int fact = 1;
for (int i = 1; i <= x; ++i)
    fact *= i;

return fact;
}

