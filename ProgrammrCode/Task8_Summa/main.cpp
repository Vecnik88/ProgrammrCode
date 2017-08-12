/* ### Task 8 ### Created by Vecnik88

    Write a program which takes a number as input from the user and shows the sum of digits as output.

    Input:
    Enter a number:23
    Output:
    Sum of digits:5


    Input:
    Enter a number:12345
    Output:
    Sum of digits:15

*/

#include <iostream>

using namespace std;

int main()
{
int num, sum=0, i;
cout << "Enter a number:";
cin >> num;
i=num;

while(num)
{
    sum += num%10;
    num /= 10;
}

cout << "Sum of digits:" << sum;

return 0;
}

