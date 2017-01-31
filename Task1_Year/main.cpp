/* ### TASK1 ### Created by Vecnik88

Write a program to convert the number of days enterd by you to the number of years and weeks passed respectively.

Input:
Enter days:2
Output:
Years-0Weeks-0

Input:
Enter days:560
Output:
Years-1Weeks-80

*/

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
int days, years, weeks, num1;

    cout << "Enter the number of days : " << endl;
    cin>>days;

if(days>=7)
    weeks = static_cast<int>(days/7);

if (days>=365)
    years = static_cast<int>(days/365);

cout << "Output:\n" << "Years-" << years << ", Weeks-" << weeks;

    return 0;
}
