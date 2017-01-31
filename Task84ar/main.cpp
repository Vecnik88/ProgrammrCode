/* ### Task 84 ### Created by Vecnik88

Write a C++ program to print the square of all integers upto a number entered by the user, using a function.

Input:
Enter a number:3
Output:
0
1
4
9

Input:
Enter a number:5
Output:
0
1
4
9
16
25

*/

#include <iostream>

using namespace std;

int main()
{
int a;
cout << "Enter a number:";
cin >> a;

void square(int x);

for(int i=0;i<=a;i++)
    square(i);

return 0;
}

 void square(int x)
 {
     cout << x*x << endl;
 }
