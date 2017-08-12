/* ### Task 18 ### Created by Vecnik88

Write a program to print the resultant value after adding a++(post-increment) and ++a(pre-increment).

Input:
value of a:
12
Output:
Addition is:25

Input:
value of a:
5
Output:
Addition is:11
*/

#include <iostream>

using namespace std;

int main()
{
int a, b = 0;

cout << "Enter value of a: ";
cin >> a;

b=a+(a++);

cout << "Addition is: " << b;

return 0;
}
