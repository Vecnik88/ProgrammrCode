/* ### Task 79 ### Created by Vecnik88

This program asks the user to enter 2 integers.
There is another variable 'ans' that stores their sum.
The sum is to be calulated in a function called sum() which takes three arguments:

two integers and one integer pointer.

In the main function, the reference of the variable 'ans' has been passed to sum().
You need to save the sum of the two numbers inside the third argument.

3
3
Sum is 6

*/

#include <iostream>

using namespace std;

void sum(int n1, int n2, int *ans)
{
    *ans = n1+n2;
}

int main()
{
    int ans, n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    sum(n1, n2, &ans);
    cout << "Sum is " << ans;
    return 0;
}
