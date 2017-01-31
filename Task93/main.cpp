/* ### Task 93 ### Created by Vecnik88

Create a class with two variables as data members and create a member function to multiply it?

Input
Enter 1st number
5
Enter 2nd number
10
Output
Product is 50

Input
Enter 1st number
0
Enter 2nd number
1000
Output
Product is 0

*/

#include <iostream>
#include <string>

using namespace std;

class abc
{
public:
    int a,b;

int square()
{
    return a*b;
}
};

int main()
{
abc obj;
cout<<"Enter 1st number:\n";
cin>>obj.a;
cout<<"Enter 2nd number:\n";
cin >> obj.b;

cout << obj.square() << endl;

return 0;
}



