/* ### Task 47 ### Created by Vecnik88

Write a program that uses a for loop to display all the numbers from 1 to 20, marking those which are even (divisible by two). It should use modulus by 2: if the remainder is zero, it's divisible by 2.

Enter how many numbers do you want to list: 20
1
2 <
3
4 <
5
6 <
7
8 <
9
10 <
11
12 <
13
14 <
15
16 <
17
18 <
19
20 <
1

*/

#include <iostream>

using namespace std;

int main()
{
int n;
cout << "Enter how many numbers do you want to list: ";
cin >> n;

for(int i{1}; i<=n;++i)
{
    cout << i;
    if(i%2==0) cout << "<" << endl;
    else cout << endl;
}

return 0;
}


