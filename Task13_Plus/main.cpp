/* ### Task 13 ### Created by Vecnik88

Your Task is to read the three values of the sides of a triangle and print the result of their summations.

Sample Input :
Enter 1st number:
12
Enter 2nd number:
13
Enter 3rd number:
14
Sample Output :
39

sample Input :
Enter 1st number:
3.2
Enter 2nd number:
5.3
Enter 3rd number:
10.9
Sample Output :
19.4

*/

#include <iostream>

using namespace std;

int main()
{
   double a,x,b,c=0;

   cout<<"Enter 1st number:";
   cin>>a;
   cout<<"Enter 2nd number:";
   cin>>b;
   cout<<"Enter 3rd number:";
   cin>>x;


c = a + b + x;

   cout << c;

   return 0;
}

