/* ### Task 29 ### Created by Vecnik88

Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered by the user.
A triangle is valid if the sum of all the three angles is equal to 180 degrees.Output should print "YES" for true and "NO" otherwise.

Input1:
Enter the three angles of triangle:
45
90
45
Output1:
YES

Input2:
Enter the three angles of traingle:
36
98
56
Output2:
NO

*/

#include <iostream>

using namespace std;

int main()
{
int angle1, angle2, angle3;
cout << "Enter the three angles of triangle:";
cin >> angle1 >> angle2 >> angle3;

int summa = angle1+angle2+angle3;

if(summa==180)
    cout << "YES" << endl;
else
    cout << "NO" << endl;

return 0;
}





