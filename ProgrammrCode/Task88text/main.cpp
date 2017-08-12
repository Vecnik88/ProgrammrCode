/* ### Task 88 ### Created by Vecnik88

Write a program that pulls up a menu with 4 options. It should look something like...

You will need to create functions for each of the 4 menu options. Entering the number will call the correct function.
This assignment does not require you to complete ANY of the functionality except for the working menu system.
There is no need for you to program the ability to add keychains, remove keychains, view orders or checkout.
The functions should be named add_keychains(), rem_keychains(), view_order() and checkout().
Each function should print a message that it has been called.
The user should be able to keep putting in choices until the checkout() function is called.
When checkout() is finished, the program should end.

1. Add Keychains to Order
2. Remove Keychains from Order
3. View Current Order
4. Checkout
Please enter your choice:1
ADD KEYCHAINS
1. Add Keychains to Order
2. Remove Keychains from Order
3. View Current Order
4. Checkout
Please enter your choice:3
VIEW ORDER
1. Add Keychains to Order
2. Remove Keychains from Order
3. View Current Order
4. Checkout
Please enter your choice:4
CHECKOUT

*/

#include <iostream>
#include <string>

using namespace std;

void add()
{
cout << "ADD KEYCHAINS" << endl;
}
void view()
{
    cout << "VIEW ORDER" << endl;
}
void checkout()
{
    cout << "CHECKOUT" << endl;
}
void rem()
{
    cout << "REMOVE KEYCHAINS" << endl;
}

int main()
{

int choice = 1;
cout << "Welcome to keychain shop:\n";

while(choice!=4)
{
cout << "1. Add Keychains to Order:\n2. Remove Keychains from Order:\n3. View Current Order:\n4. Checkout:\n";
cout << "Please enter your choice:";
cin >> choice;

switch(choice)
{

case 1:
    add();
    break;

case 2:
    rem();
    break;

case 3:
    view();
    break;

case 4:
    checkout();
    break;

default:
    cout << "Wrong choice\n";
}
}

return 0;
}



