/* ### Task 85 ### Created by Vecnik88

Write a c++ function to find the maximum of any three numbers using multiple return statements in a function definition.

Input:
Enter three numbers: 4
5
6
Output:
Max: 6

Input: Enter three numbers: 0
2
5
Output:
Max: 5

*/

#include <iostream>

using namespace std;

int main()
{
int a, b, max, c = 0;
cout<<"Enter three numbers:";
cin>>a>>b>>c;

int maximum(int a,int b,int c);
max = maximum(a,b,c);
cout << "Max: "<<max;

return 0;
}

int maximum(int a, int b, int c)
{
    int max = (a>b) ? a : b;
    return (max>c) ? max : c;
}
