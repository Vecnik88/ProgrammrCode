/* ### Task 9 ### Created by Vecnik88

    Write a program to determine whether an year(entered in four digits) is a leap year or not. DO NOT USE % opeartor. Use standard Library function. USE a check variable to store true/false value.
    If the year is found to be leap year, set the value of check as 1, otherwise 0.
    
    Input: 2000
    Output: 1

    Input: 1900
    Output: 0

*/

#include<iostream>
#include<cmath>

using namespace std;

bool is_LeapYear(int ny)                        // <---. определяем високосный год или нет при помощи
{                                               //       стандартной библиотечной функции fmod
if(fmod(ny,4)==0)                               //       которая заменяет оператор %
    if(fmod(ny,100) != 0 || fmod(ny,400) == 0)
        return true;

    return false;
}

using namespace std;

int main()
{
double ny;
int check=0;
cout<<"\n\tEnter 4-digit year no.: ";
cin>>ny;

    if(is_LeapYear(ny))check = 1;

    else check = 0;

cout<<"\n\tCheck value : "<<check;
return 0;
}

