/* ### Task 10 ### Created by Vecnik88

    Find the factorial of a number n.

    Input:
    Enter the value of n:
    1
    Output:
    Value of factorial is: 1


    Input:
    Enter the value of n:
    4
    Output:
    Value of factorial is:
    24

*/

#include <iostream>

using namespace std;

int main()
{
int n, fact=1;
cout << "Enter the value of n:\n";
cin >> n;

for(int i{1}; i <= n; ++i)
    fact *= i;

cout<< "Value of factorial is :\n" << fact;

return 0;
}

