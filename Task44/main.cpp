/* ### Task 44 ### Created by Vecnik88

Write another program that uses a loop. With the loop, make the variable x go from -10 to 10, counting by 0.5. (This means that x can't be an int. )

Inside the body of the loop, make another variable y become the current value of x squared. Then display the current values of both x and y.

To get your output to line up like mine, use two spaces.

-10  100
-9.5  90.25
-9  81
.
.
.
9  81
9.5  90.25
10  100

*/

#include <iostream>

using namespace std;

int main()
{
double x, y;

for(x=-10; x <=10; x+=0.5)
    cout << x << ' ' << x*x << endl;

return 0;
}

