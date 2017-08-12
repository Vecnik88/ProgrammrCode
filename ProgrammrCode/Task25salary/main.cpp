/* ### Task 25 ### Created by Vecnik88

In a company an employee is paid as under:

If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary
and DA = 90% of basic salary.

If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500
and DA = 98% of basic salary.

If the employee's salary is input by the user

Write a program to find his gross salary.

Gross salary= basic salary+HRA+DA

Input1:
2678
Output1:
5802.44

Input2:
2500
Output2:
5450

*/

#include <iostream>

using namespace std;

int main ()
{
int salary;
double val_salary;
cout << "Enter any character:";
cin >> salary;

    if(salary < 1500)
        val_salary = salary+0.1*salary+0.9*salary;
    else
        val_salary = salary+500+0.98*salary;

cout << val_salary << endl;

return 0;
}



