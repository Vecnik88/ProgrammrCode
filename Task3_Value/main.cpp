/* ### Task 3 ### Created by Vecnik88

    Write a program to check whether a given number is prime or not?(n>=2)
    If it is a prime number, print "Prime" else print "Not Prime" (do not print the quotes)

    Enter the number:
    100
    Output:
    Not Pime

    Input:
    Enter the number:
    5
    Output:
    Prime

*/

#include <iostream>

using namespace std;

bool is_prime(int n)                    // <---. определяем функцию bool, которое возвращает true
{                                       //       если число простое
for(int i{2}; i<n; ++i)
    {
    if(n%i == 0)
        {return false;}
    }
    return true;
}

int main()
{
int n;
cout<<"Enter the number:\n";
cin>>n;

if(n==1)
    {
        cout << "Not Prime" << endl;
        return 0;
    }

if(is_prime(n))
    cout << "Prime" << endl;

else
    cout << "Not Prime" << endl;

}
