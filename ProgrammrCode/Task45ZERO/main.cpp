/* ### Task 45 ### Created by Vecnik88

Given an array of positive and negative integers.
Find three numbers such that they sum to zero, else indicate that no such triplets exist.

Enter value for index 0: 5
Enter value for index 1: -3
Enter value for index 2: 8
Enter value for index 3: 12
Enter value for index 4: -2
Enter value for index 5: 4
Enter value for index 6: 10
Enter value for index 7: 12
Enter value for index 8: 15
Enter value for index 9: 11
The three numbers are -2 -3 and 5

*/

#include <iostream>

using namespace std;

int main()
{

int ary[10], n1, n2, n3;
bool flag = false;

for (int i=0; i<10; i++)
{
    cout << "Enter value for index "<< i << ": ";
    cin >> ary[i];
}

for(int i=0; i<10; i++)
    for(int j=0; j<10; j++)
        for(int k=0; k<10; k++)
            if (ary[i] + ary[j] + ary[k] == 0)
                {
                flag = true;
                n1 = ary[i];
                n2 = ary[j];
                n3 = ary[k];
                break;
                }

if (flag == true)
    cout << "The three numbers are " << n1 << " " << n2 << " and " << n3;

else cout << "Not found.";

return 0;
}

