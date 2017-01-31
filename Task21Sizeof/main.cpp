/* ### Task 21 ### Created by Vecnik88

Find the size in bytes of the type used to store the value input by the user?

*/

#include<iostream>

using namespace std;

int main()
{
int a, b;
cout << "Enter the element:\n";

cin >> a;

b = sizeof(a);

cout << "The value is: " << b << "\n";

return 0;
}

