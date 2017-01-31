/* ### Task 20 ### Created by Vecnik88

Write a program that evaluates the following things for two int numbers:

Sum,Diff,Product,Quotient,Remainder,Increment first no, Decrement Second no.,takes a third num-
Checks if first no is greater than second then assign third no 1.
If not, assign third no 0 (use conditional operator for last task)

Enter 1st number:
20
Enter 2nd number:
10
Output:
30
10
200
2
0
21
9
1

Enter 1st number:
20
Enter 2nd number:
5
Output:
25
15
100
4
0
21
4
1
*/

#include <iostream>

using namespace std;

int main()
{
int num1, num2, sum, diff, product, quotient, remainder, num3=0;

cout << "Enter 1st number: ";
cin>>num1;
cout<<"Enter 2nd number: ";
cin>>num2;

sum = num1 + num2;
diff = num1 - num2;
product = num1*num2;
quotient = num1/num2;
remainder = num1%num2;

++num1;
--num2;
num3 = num1>num2 ? ++num3: num3;

cout << "" << sum;
cout << "\n" << diff;
cout << "\n" << product;
cout << "\n" << quotient;
cout << "\n" << remainder;
cout << "\n" << num1;
cout << "\n" << num2;
cout << "\n" << num3;

return 0;
}
