/* ### Task 69 ### Created by Vecnik88

Write a program to find a substring withing a string.If found display it's starting position,Else print "Substring not found".

Input
Qwertyuiop
yuiop
Output
6

Input:
Coding is fun
fundamental
Output:
Substring not found

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main( )
{
string str1, str2;
cout<<"Enter first string :";
getline(cin, str1);

cout<<"Enter second string :";
getline(cin, str2);

int a = str1.find(str2) +1;

if(!a) cout << "Substring not found" << endl;
else cout << a;

return 0;
}

