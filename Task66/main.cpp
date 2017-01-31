/* ### Task 66 ### Created by Vecnik88

Write a program to convert odd places in a string to small letters and even places to capital letters.

Remember that string starts from 0.

Input
Hello World
Output
HeLlO WoRlD


Input
Coding World
Output
CoDiNg wOrLd

*/

#include <iostream>
#include <string>

using namespace std;

int main( )
{
string str;
cout<<"Enter a string:";

getline(cin,str);

for(int i{0}; i < str.length(); ++i)
    if(i%2==0) str[i]=toupper(str[i]);
    else str[i]=tolower(str[i]);

cout << str << endl;

return 0;
}

