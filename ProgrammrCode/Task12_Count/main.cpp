/* ### Task 12 ### Created by Vecnik88

Given an input 'n' from the user, you need to find all lucky numbers from 1 to n.
Lucky numbers are those which have either 4 or 7 or both as their digits.

Enter upper limit: 10
Number of lucky numbers in given range is 2

*/

#include<iostream>

using namespace std;

int main()
{
int n, count=0;
cout << "Enter upper limit: ";
cin >> n;

for(int i{0}; i <= n; ++i)
    if(i%10==4 || i%10==7)
    {
        ++count;
    }

cout << "Number of lucky numbers in given range is " << count;

return 0;
}

