/* ### Task 32 ### Created by Vecnik88

Complete the program to take user input for no. of week's day
(1-7 and translate to it's equivalent name of the day of the week. (1 for Sunday, 2 for Monday, ........so on)

Enter no. of week's day (1-7) :
2
Output:
Monday

Enter no. of week's day (1-7) :
9
Output:
Wrong Input

*/

#include <iostream>

using namespace std;

int main()
{
int d_o_w;
cout << "\nEnter no. of week's day (1-7) : ";
cin >> d_o_w;

switch(d_o_w)
{
    case 1:
    cout << "Sunday" << endl;
    break;

    case 2:
    cout << "Monday" << endl;
    break;

    case 3:
    cout << "Tuesday" << endl;
    break;

    case 4:
    cout << "Wednesday" << endl;
    break;

    case 5:
    cout << "Thursday" << endl;
    break;

    case 6:
    cout << "Friday" << endl;
    break;

    case 7:
    cout << "Saturday" << endl;
    break;

    default:
    cout << "Wrong Input" << endl;
    break;
}
    return 0;
}



