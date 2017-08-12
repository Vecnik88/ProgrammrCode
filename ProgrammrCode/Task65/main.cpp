/* ### Task 65 ### Created by Vecnik88

Consider a two dimensional array.
Fill the array with values as input from user.
Write a program that displays the row number which has the largest value of all the row elements summed together.

Enter matrix elements:
1
2
3
4
5
6
7
8
9
The row with maximum sum = 2

*/

#include <iostream>

using namespace std;

int main()
{
int ary[3][3], sum, max=0, x;
cout << "Enter matrix elements:\n";

for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
        cin >> ary[i][j];

for(int j = 0; j < 3; ++j)
    sum+=ary[0][j];

max = sum;
sum = 0;
x = 0;
for(int j = 0; j < 3; ++j)
{
    sum+=ary[1][j];
    if(sum>max)
    {
        max = sum;
        x = 1;
    }
}

sum = 0;
for(int j = 0; j < 3; ++j)
{
    sum+=ary[2][j];
    if(sum>max)
    {
        max = sum;
        x = 2;
    }
}

cout << "The row with maximum sum = " << x;
return 0;
}


