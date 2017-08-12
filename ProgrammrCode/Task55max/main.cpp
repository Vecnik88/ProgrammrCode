/* ### Task 55 ### Created by Vecnik88

Write a program that reads from user a sequence of N integers and return min and max values.

Input :
3
1
2
3
Output :
min :1
max :3

Input :
4
0
2
9
-1
Output :
min :-1
max :9

*/

#include <iostream>

using namespace std;

int main()
{
int N;
int minvalue, maxvalue;
cout << "Enter N (number of elements) :" << endl;
cin >> N;
int *Arr = new int [N];
cout << "Enter the elements :"<<endl;
for (int i = 0; i < N; i++)
{
    cin>>Arr[i];
}

maxvalue = Arr[0];
minvalue = Arr[0];

for(int i = 0; i < N; ++i)
{
    if(maxvalue < Arr[i]) maxvalue = Arr[i];
    if(minvalue>Arr[i]) minvalue = Arr[i];
}
delete[] Arr;
cout << "Min : "<< minvalue<<endl;
cout << "Max :" << maxvalue<<endl;

return 0;
}
