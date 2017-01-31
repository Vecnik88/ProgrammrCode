/* ### Task 80 ### Created by Vecnik88

This program asks the user to enter how many fibonacci numbers he/she wants to display on the screen.
Your have to make a function called 'fibo' of return type integer pointer
that accepts one integer as an argument (the number the user entered).
The function should have an integer array of size 'n' (the argument of the function).
Calculate the fibonacci numbers and store in the array. At the end, simply return the array.

Enter how many fibonacci numbers you want to print: 5
1 1 2 3 5

*/

#include <iostream>

using namespace std;

int* fibo(int);

int main()
{
    int *fibonacci, n;
    cout << "Enter how many fibonacci numbers you want to print: ";
    cin >> n;
    fibonacci = fibo(n);

    for (int i=0; i<n; i++)
        cout << fibonacci[i] << " ";

delete[] fibonacci;

return 0;
}

int* fibo(int n)
{
int* f = new int[n];
for(int i = 0; i < n; ++i)
{
    if(i==0 || i==1) f[i] = 1;
    else f[i] = f[i-2] +  f[i-1];
}

    return f;
}
