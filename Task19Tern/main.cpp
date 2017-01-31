/* ### Task 19 ### Created by Vecnik88

Print the greater value between two variables by only using ternary operators(?:). If equal is just prints that value.

Input:
value of a:
12
value of b:
17
Output:
greater value is: 17

Input:
value of a:
5
value of b:
1
Output:
greater value is: 5
*/

#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

int main()
{
int a, b, c=0;
cout << "Enter 1st number:";
cin >> a;
cout << "Enter 2nd number:";
cin >> b;

c = a > b ? a : b;

cout << "Greater value is:" << c;

return 0;
}
