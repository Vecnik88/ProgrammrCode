/* ### Task 33 ### Created by Vecnik88

Write a program to find the maximum of three numbers using if-else statements.

Input:
12 34 7
Output:
34

Input:
234 345 678
Output:
678

*/

#include <iostream>

using namespace std;

int main()
{
int a, b, c, max;
cout << "Enter Three numbers: \n";
cin >> a >> b >> c;

max = (a>b) ? a : b;
if(max>c)
    cout << max << endl;

else cout << c << endl;

return 0;
}




