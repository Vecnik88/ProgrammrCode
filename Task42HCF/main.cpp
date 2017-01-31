/* ### Task 42 ### Created by Vecnik88

Program to calculate the HCF of two given numbers.

Input:
654
546
Output:
6

Input:
66
88
Output:
22

*/

#include <iostream>

using namespace std;

int main()
{
int dividend, divisor, rem, hcf;
cout<<"Enter two numbers : ";
cin>>dividend>>divisor;

while(divisor)
{
    rem = dividend%divisor;
    dividend = divisor;
    divisor=rem;
}
hcf = dividend;
cout<<hcf;

return 0;
}

