/* ### Task 54 ### Created by Vecnik88

Your Task is to read some numbers from the user and print their average value (use arrays).

Input :
first line is the number of numbers user will enter (N)
then, there are N-numbers as input

Output :
The Average value of these numbers

Sample Input :
Enter how many numbers and the numbers:
3
1
5
6
Sample Output :
4

Sample Input :
Enter how many numbers and the numbers:
2
17
19
Sample Output :
18

*/

#include <iostream>

using namespace std;

int main()
{
int n;
cout << "Enter how many numbers and the numbers: \n";
cin>>n;

int *arr=new int [n];
for(int i=0; i<n; i++)
    cin >> arr[i];

int sum=0;

for(int i =0; i < n; ++i)
{
    sum+=arr[i];
}

delete[] arr;
sum /= n;

cout << sum;

return 0;
}
