/* ### Task 49 ### Created by Vecnik88

Use nested for loops to find numbers whose sum is 45, and such that the first plus 2, the second minus 2,
the third multiplied by 2 and the fourth divided by 2 are equal.
Your output should be four numbers separated by spaces between them.

*/

#include <iostream>

using namespace std;

int main()
{
for (int i=1; i<=45; i++)
 for (int j=1; j<=45; j++)
  for (int k=1; k<=45; k++)
   for (int p=1; p<=45; p++)
    if(i+j+k+p == 45)
     if(i+2==j-2 && k*2==p/2 && i+2==k*2 && j-2==p/2)
      cout << i << ' ' << j << ' ' << k << ' ' << p << endl;

return 0;
}
