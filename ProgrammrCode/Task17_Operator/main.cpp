/* ### Task 17 ### Created by Vecnik88

Print the remainder of a/b (first number/second number).

Input:
1st Number: 10
2nd Number: 5
Output:
Remainder is: 0

Input:
1st Number: 10
2nd Number: 4
Output:
Remainder is: 2
*/

#include <iostream>

#include <string>

using namespace std;

int main()
{
int a, b, c = 0;

cout << "Enter 1st number:\n";
cin >> a;
cout << "Enter 2nd number:\n";
cin >> b;

c = a%b;

cout << "Remainder is:" << c;
return 0;
}
