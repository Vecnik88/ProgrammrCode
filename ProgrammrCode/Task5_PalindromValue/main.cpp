/* ### Task 5 ### Created by Vecnik88

    Write a program which takes a number as input from the user and displays whether it's palindrome or not. A palindrome number is a number that remains the same when its digits are reversed.

    Input:
    Enter a number:323
    Output:
    The number is a palindrome

    Input:
    Enter number:34
    Output:
    The number is not a palindrome

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
long n, num, rev = 0;

    cout << "Enter a number:";
    cin >> num;
    n = num;

while(num)                                          // <---. идея такая, что пока num = true
{                                                   //       мы переворачиваем число за счет деления остатка
    rev = rev*10 + num%10;                          //       и умножения на 10
    num /=10;
}

    if (n == rev)
        cout << "The number is a palindrome";
    else
        cout << "The number is not a palindrome";
}
