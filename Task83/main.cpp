/* ### Task 83 ### Created by Vecnik88

Write a program that asks the user for an integer number and find the sum of all natural numbers upto that number

i.e. 1+2+3+...+n

Input:
Enter a number:3
Output:
6

Input:
Enter a number:2
Output:
3

*/

#include <iostream>

using namespace std;

int main()
{
int a,sum=0;
cout<<"Enter a number:";
cin>>a;

int func(int x);
sum=func(a);

cout<<"\n"<<sum;

return 0;
}

int func(int x)
{
int s = 0;
for(int i = x; i >= 0; --i)
    s +=(x-i);

return s;
}
