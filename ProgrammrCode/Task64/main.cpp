/* ### Task 64 ### Created by Vecnik88

Given an array X[0..n-1] of integers.
Enter values in the array.
The elements of the array should be sorted in ascending order first.
Then find an array item such that X[i] = i.

Enter value for index 0: 9
Enter value for index 1: 8
Enter value for index 2: 7
Enter value for index 3: 6
Enter value for index 4: 5
Enter value for index 5: 4
Enter value for index 6: 3
Enter value for index 7: 2
Enter value for index 8: 1
Enter value for index 9: 0
The answer is 0

*/

#include <iostream>

using namespace std;

int main()
{
int ary[10], answer;
bool flag=false;

for (int i=0; i<10; i++)
{
    cout << "Enter value for index " << i << ": ";
    cin >> ary[i];
}

for(int i = 0; i < 10; ++i)
    for(int j=0; j<9; ++j)
        if(ary[j]>ary[j+1]) swap (ary[j], ary[j+1]);

for(int i = 0; i < 10; ++i)
    if(ary[i]==i)
    {
        flag = true;
        answer = ary[i];
        break;
    }

if (flag == true)
    cout << "The answer is " << answer;
else cout << "Not found.";

return 0;
}

