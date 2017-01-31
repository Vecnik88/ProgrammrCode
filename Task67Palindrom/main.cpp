/* ### Task 67 ### Created by Vecnik88

Write A Program To Check Whether A String Is Palindrome Or Not
Declare a variable check to store true/false value, and print check in the end.
Input: "madam"
Output: 1

Input: "hello"
Output: 0

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
string str;
int check = 1;
cout<<"\nEnter a string : ";
getline(cin,str);

int last = str.length()-1;
int first = 0;
for(int i{0}; i < str.length(); ++i)
{
    if(str[first+i]==str[last-i]) check = 1;
    else {check = 0; break;}
}

cout<<"\nCheck result : "<<check;
return 0;
}

