/* ### Task 39 ### Created by Vecnik88

Using a while or a do-while loop, make a program that asks the user to enter numbers
and keeps adding them together until the user enters the number 0.

The total so far is 0.
Number: 6
The total so far is 6.
Number: 9
The total so far is 15.
Number: -3
The total so far is 12.
Number: 2
The total so far is 14.
Number: 0

The total is 14.

*/

#include <iostream>

using namespace std;

int main()
{
int sum = 0, entry=1;

while(entry!=0)
{
    cin >> entry;
    sum+=entry;
    if(entry==0) break;
    cout << "The total so far is " << sum<<"." << endl;
}

cout << "The total is " << sum<<".";
return 0;
}


