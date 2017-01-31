/* ### Task 78 ### Created by Vecnik88

Write a C++ function to find the max of an integral data set.
The program will ask the user to input the number of data values in the set and each value.
The function will accept an array of data values and its size.
The function returns a pointer that points to the max value.

Enter number of values:3
Enter values in array:
21
12
4
Largest integer value in the array is 21

*/

#include<iostream>

using namespace std;

int *findMax(int arr[],int n);

int main()
{
    int n,i,*p;
    cout << "Enter number of values:";
    cin >> n;
    cout << "Enter values in array:\n";
    int arr[n];

for(i=0;i<n;i++)
{
   cin>>arr[i];
}

p=findMax(arr,n);
cout<<"Largest integer value in the array is "<<*p;

return 0;
}

int *findMax(int arr[], int n)
{
    int max = 0;
    for(int i = 0; i < n; ++i)
        if(arr[i]>max) max = arr[i];

    return &max;
    }
