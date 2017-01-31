/* ### Task 51 ### Created by Vecnik88

Write a program that gets three integers from the user. Count from the first number to the second number in increments of the third number. Use a for loop to do it.

Examples

Input:

4

13

3

Output:

4 7 10 13

Input:

25

20

5

Output:

1st number should be smaller

Input:

4

13

2

Output:

Counting with given interval not possible

*/

#include<iostream>

using namespace std;

int main()
{
int num1, num2, num3;

cout << "Count from: ";
cin >> num1;
cout << "Count to: ";
cin >> num2;
cout << "Count by: ";
cin >> num3;

int k;

if(num1<num2)
{
for(int i = num1; i<=num2; i+=num3)
    k=i;
if (k==num2)
{
    for(int i = num1; i<=num2; i+=num3)
    cout << i << ' ';
}
else cout << "Counting with given interval not possible" << endl;
}

else cout << "1st number should be smaller" << endl;

return 0;
}
