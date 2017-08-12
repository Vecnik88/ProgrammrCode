/* ### Task 7 ### Created by Vecnik88

    Complete the program to find out whether a year (entered in 4-digit integer representation) is a leap year.

    Enter year (in 4-digits) :
    1932
    Output :
    Leap year

    Enter year (in 4-digits) :
    1900
    Output:
    Not a leap year.

*/

#include <iostream>

using namespace std;

bool is_LeapYear(int year)              // <---. определяем функцию, проверющую високосный год или нет
{
if(year%4 == 0)
    if(year%100 !=0 || year % 400 == 0)
        return true;

    return false;
}

int main()
{

int year;
cout<<"\n Enter year (in 4-digits) : ";
cin>>year;

    if(is_LeapYear(year))
        cout << "Leap year" << endl;
    else cout << "Not a leap year" << endl;

    return 0;
}
