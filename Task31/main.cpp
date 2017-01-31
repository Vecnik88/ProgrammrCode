/* ### Task 31 ### Created by Vecnik88

Write A Program To Find The Larger Of Two Numbers Using Ternary Operator.
Example 1:
Input:1
2
Output: 2

Input:
0
-33
Output: 0

*/

#include <iostream>

using namespace std;

int main()
{
int a, b, c;
cout << "Enter 1st number:";
cin >> a;
cout << "Enter 2nd number:";
cin >> b;

c = (a>b) ? a : b;

cout << c << endl;

return 0;
}





