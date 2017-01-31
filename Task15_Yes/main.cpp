/* ### Task 15 ### Created by Vecnik88

Write a program to see whether a number is an even multiple of 3

Input:
6
Output:
yes


Input:
9
Output:
no
*/

#include<iostream>

using namespace std;

int main()
{
int a;
cin>>a;

if(a%3 == 0)
    cout << "yes" << endl;

else cout << "no" << endl;

    return 0;
}


