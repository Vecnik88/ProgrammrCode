/* ### Task 57 ### Created by Vecnik88

Write a program that asks the user to type 4 integers in an array.
The program must insert 3 at the index position 1 , and then shift each element down and drop off the last element.
The program must then write the final array.

Input:
enter 4 integer values:
1
3
4
5
Output:
Resultant array is;
1
3
3
4

Input:
enter 4 integer values:
11
32
43
54
Output:
Resultant array is
11
3
32
43

*/

#include <iostream>

using namespace std;

int main()
{
int insert1=3;
int index1=1;
int array1[5];

cout << "Enter the 4 integer values:"<<endl;
for(int i = 0;i < 4; ++i)
cin >> array1[i];

for(int i = 0; i < 4; ++i)
    for(int j=0; j<3; ++j)
        if(array1[j]>array1[j+1]) swap(array1[j], array1[j+1]);

for(int i = 4; i >= 1; --i)
{
    array1[i] = array1[i-1];
}
array1[index1] = insert1;

cout<<"Resultant array is: \n";

for(int i = 0; i <= 3; ++i)
    cout << array1[i] << endl;
}

