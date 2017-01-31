/* ### Task 43 ### Created by Vecnik88

Create a simple program that will print out the summation of the numbers from 1 to the entered number.

Input:Input limit value:5
Output:Summation is:15

Input:Input limit value:7
Output:Summation is:28

*/

#include <iostream>

using namespace std;

int main()
{
int val, sum = 0;
cout << "Input  limit value:";
cin >> val;

for(int i{1}; i<=val; ++i)
{
    sum+=i;
}

cout << "Summation is:" << sum;

return 0;
}

