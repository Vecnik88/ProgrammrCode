/* ### Task 77 ### Created by Vecnik88

This program asks the user to enter integers as inputs to be stored in the variables 'a' and 'b' respectively. There are also two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.

Enter value of A: 1
Enter value of B: 2
Value of ptrA is 1
Value of ptrB is 2

*/

#include <iostream>

using namespace std;

int main()
{
    int *ptrA, *ptrB, a, b;
    cout << "Enter value of A: ";
    cin >> a;
    cout << "Enter value of B: ";
    cin >> b;


    ptrA = &a;
    ptrB = &b;

    cout << "Value of ptrA is " << *ptrA << endl;
    cout << "Value of ptrB is " << *ptrB;

    return 0;
}
