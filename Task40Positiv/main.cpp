/* ### Task 40 ### Created by Vecnik88

Write a program that requests the user to type positive numbers, or to stop by typing a number smaller than 1.
Print the average.Use do-while loop.

Input:
enter a number:3
enter a number:5
enter a number:11
enter a number:1
enter a number:0
Output:
the average is:5

Input:
enter a number:31
enter a number:4
enter a number:4
enter a number: -12
Output:
the average is:13

*/

#include <iostream>

using namespace std;

int main()
{
int n, sum = 0, nums = 0;

cout << "Enter positive numbers, or to stop by typing a number smaller than 1" << endl;

while(cin >> n && n>1)
{
    sum+=n;
    if(n>0)
    ++nums;
}

if( nums > 0 )
    cout << "The average is:" << sum / nums;
else
    cout << "No average";

return 0;
}

