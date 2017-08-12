/* ### Task 14 ### Created by Vecnik88

Complete the program taking input choice (1 or 2).

If choice is 1, print the are of a circle otherwise print the perimeter of circle.

Input:
1
10
Output:
Area = 314


Input:
2
10
Output:
Perimeter = 62.8
*/

#include <iostream>

using namespace std;

int main()
{
int choice;
double radius, area, perimetr;
cout << "\n 1. Area of circle :";
cout << "\n 2. Perimeter of circle :";
cout << "\n Enter choice :";
cin >> choice;
cout << "\n Enter radius of cirle :";
cin >> radius;

    if(choice==1)
    {
        area = 3.14*radius*radius;
        cout << " Area = " << area << endl;
    }
    if(choice==2)
    {
        perimetr = 2*3.14*radius;
        cout << "Perimeter = " << perimetr << endl;
    }

return 0;
}
