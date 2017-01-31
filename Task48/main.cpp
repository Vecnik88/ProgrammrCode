/* ### Task 48 ### Created by Vecnik88

Write a program using a looping statement that changes the value of variable x from -10 to 10 in intervals of 0.5 .

Output:

x
------
-10
-9.5
-9
-8.5
-8
-7.5
-7
-6.5
-6
-5.5
-5
-4.5
-4
-3.5
-3
-2.5
-2
-1.5
-1
-0.5
0
0.5
1
1.5
2
2.5
3
3.5
4
4.5
5
5.5
6
6.5
7
7.5
8
8.5
9
9.5
10

*/

#include<iostream>

using namespace std;

int main()
{
cout<<"x\n------" << endl;

for(double i{-10}; i<=10; i+=0.5)
    cout << i << endl;

return 0;
}

