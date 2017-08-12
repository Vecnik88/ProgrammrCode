/* ### Task 72 ### Created by Vecnik88

Write a program to input two strings from user and find whether these strings are equal or unequal.

Input:
first string:shubham
second string:shubham
Output:
Equal

Input:
first string:adgk
second string:shkt
Output:
Unequal

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{

string str1, str2;
int flag=0;
cout << "Enter first string:";
cin >> str1;
cout << "Enter second string:";
cin >> str2;

for(int i = 0; i < str1.length(); ++i)
    if (str1[i]==str2[i]) flag = 0;
    else {flag = 1; break;}

if(flag==0) cout << "Equal" << endl;
else cout << "Unequal" << endl;

return 0;
}


