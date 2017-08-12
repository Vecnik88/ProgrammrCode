/* ### Task 90 ### Created by Vecnik88

Take two numbers from user and pass them to function which will return their GCD.

Enter value of x:2
Enter value of y:3
The GCD of 2 and 3 is 1

*/

#include <iostream>

using namespace std;

int GCD(int a, int b)
{
while(a && b)
{
if(a>b)
    a%=b;
else b%=a;
}
return a | b;
}

int main()
{
int x, y;
cout<<"Enter value of x:";
cin >> x;
cout<<"Enter value of y:";
cin >> y;

cout << "The GCD of " << x << " and "<< y <<" is "<< GCD(x, y);

return 0;
}


