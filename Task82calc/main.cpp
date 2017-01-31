/* ### Task 82 ### Created by Vecnik88

Write a function to calculate the factorial for a number.
This exercise calculates it for 3 numbers in a loop.

Input:
8
9
10
Output:
40320
362880
3628800

Input:
2
5
7
Output :
2
120
5040

*/

#include <iostream>
#include <string>

using namespace std;

int fact(int n)
{
int fact = 1;
for(int i = 1; i <= n; ++i)
    fact*=i;

    return fact;
}

int main(int argc, char* argv[])
{
int n;
long int ans;
for(int i=0;i<3;i++)
{
    cin>>n;
    ans=fact(n);
    cout<<ans<<endl;
}

return 0;
}
