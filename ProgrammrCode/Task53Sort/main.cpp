/* ### Task 53 ### Created by Vecnik88

Your task is to read unsorted numbers from the user and sort them.

Input :
First Line is the number of numbers the user will set  (N)
N numbers unsorted

Output :
N numbers Sorted

Sample Input :
Enter how many numbers to sort and then enter them:
3-->how many numbers to sort
3
2
1
Sample Output :
1
2
3

Sample Input :
Enter how many numbers to sort and then enter them:
2-->how many numbers to sort
5
3
Sample Output :
3
5

Sample Input :
Enter how many numbers to sort and then enter them:
6-->how many numbers to sort
13
32
4
2
1
7
Sample Output :
1
2
4
7
13
32


*/
#include <iostream>

using namespace std;

void Sort(int sortarr[],int n)              // <---. InsertionSort
{                                           // <---. сортировка вставками
for(int i{0}; i<n; ++i)
{
    int temp=sortarr[i];
    int j = i-1;

    while(j>=0 && sortarr[j]>temp)
    {
        sortarr[j+1]=sortarr[j];
        --j;
    }
    sortarr[j+1]=temp;
    }
    for(int i =0; i <n; ++i)
       //if(sortarr[i]!=sortarr[i+1])
       cout << sortarr[i] << endl;
}

int main(int argc, char* argv[])
{
  int n;
  cout << "Enter how many numbers to sort and then enter them: \n" ;
  cin >> n;

  int arr[n];
  for(int i=0; i<n; i++)
  {
        cout << "Enter number "<<i<<":";
        cin >> arr[i];
  }

  Sort(arr,n);

  return 0;
}
