/* ### Task 81 ### Created by Vecnik88

This program has a pre defined structure called 'student' consisting of variables 'name', 'age' and 'cgpa'.
The main function has a pointer to that structure called 'std'.

You have to initialize the variable 'std',
then ask the user to enter values for name, age and CGPA of 'std'.
At the end, display the values on the screen as shown.

Enter name: John Doe
Enter age: 21
Enter CGPA: 3.22
John Doe
21
3.22

*/

#include <iostream>
#include <string>

using namespace std;

struct student
{
    string name;
    int age;
    double cgpa;
};

int main()
{
    student *std = new student;

    cout << "Enter name:";
    getline(cin, std->name);
    cout << "Enter age:";
    cin >> std->age;
    cout << "Enter CGPA:";
    cin >> std->cgpa;

    cout << std->name << endl << std->age << endl << std->cgpa << endl;

    return 0;
}
