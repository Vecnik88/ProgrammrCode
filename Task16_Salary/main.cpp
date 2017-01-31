/* ### Task 16 ### Created by Vecnik88

Take input of experience and age of a person.

If the person is experienced and his age is equal to or more than 35 the slary of the person is 6000.
Otherwise, if the person is experienced and his age is equal to or more than 28 but less than 35, then the salary should be 4800.
For experienced person below 28 yr of age the salary should be 3000 and for inexperienced person the salary should be 2000.

Input:
1
26
Output:
3000

Input:
0
28
Output:
2000
*/

#include <iostream>

using namespace std;

int main()
{
int salary, exp, age;
cout << "\n Is the person experienced ? Enter 1 for yes, 0 for no : ";
cin >> exp;
cout << "\n Enter age of the person : ";
cin >> age;

    if(age>=35 && exp == 1)
        salary = 6000;
    if(exp==1 && age>=28 && age<35)
        salary = 4800;
    if(exp==1 && age<28)
        salary = 3000;
    if(exp==0)
        salary = 2000;

cout<<"\n The salary of the person is "<<salary;

return 0;
}
