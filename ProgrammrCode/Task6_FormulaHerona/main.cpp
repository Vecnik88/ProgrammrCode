/* ### Task 6 ### Created by Vecnik88

    Calculate the area of a triangle using Heron's formula. Take the three sides of a triangle as inputs.

    HERON'S FORMULA: Area= √s(s-a)(s-b)(s-c)
    where s= semi-perimeter; a,b,c are sides of the triangle

    Input:
    7
    8
    9
    Ouput:
    26.8328


    Input:
    4
    5
    6
    Output:
    6.48074

*/

#include <iostream>
#include<cmath>

using namespace std;

int main()
{
int a,b,c;
double area;
cout << "Enter the three sides :";
cin >> a >> b >> c;

    /// ### формула Герона Area = кв.к.(p*(p-a)*(p-b)*(p-c)) <---. пл. треугольника
    /// ### p = (a+b+c)/2 - полупериметр

double p = (a+b+c)/2;
area = sqrt(p*(p-a)*(p-b)*(p-c));

cout << "\nArea is : " << area;
return 0;
}
