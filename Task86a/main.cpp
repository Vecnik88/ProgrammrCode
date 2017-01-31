/* ### Task 86 ### Created by Vecnik88

Define the functions sum() and product() to print the sum and product of 2 numbers entered by the user.

INPUT:
23
45
OUTPUT:
68
1035

INPUT:
12
12
OUTPUT:
24
144

*/

#include <iostream>
#include <string>

using namespace std;

int sum(int a, int b)
{
    return a+b;
}

int product(int a, int b)
{
    return a*b;
}

int main(int argc, char* argv[])
{
   int a,b,answer1,answer2;
   cout<<"Enter 1st number:";
   cin>>a;
   cout<<"Enter 2nd number:";
   cin>>b;

   answer1 = sum(a,b);
   answer2 = product(a,b);

   cout<<answer1 <<endl;
   cout<<answer2;

   return 0;
}
