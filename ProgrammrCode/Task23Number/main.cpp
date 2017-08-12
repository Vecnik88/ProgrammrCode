/* ### Task 23 ### Created by Vecnik88

Check whether a given number is odd or even?

Example1:
Input:
Enter the number:
2
Output:
EVEN

Example2:
Input:
Enter the number:
4521
Output:
ODD

*/

#include <iostream>

using namespace std;

int main()
{
int n;
cout<<"Enter the number:\n";
cin>>n;

    if(n%2==0)
        cout << "EVEN" << endl;

    else cout << "ODD" << endl;

return 0;
}


