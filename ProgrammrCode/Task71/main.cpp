/* ### Task 71 ### Created by Vecnik88

Write a program that takes a string as input from the user and increments all characters of the string by 1.

Input:
enter a string:abcd
Output:
resultant string is:bcde

Input:
enter a string:aman
Output:
resultant string is:bnbo

*/

#include <iostream>

using namespace std;

int main()
{
string str1;

cout << "Enter a string:";
cin >> str1;

for(int i{0}; i <str1.length(); ++i)
    str1[i] = char(str1[i]+1);

cout << "Resultant string is:";
cout << str1;

return 0;
}

