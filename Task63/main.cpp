/* ### Task 63 ### Created by Vecnik88

Take a string input from user and reverse that array and display.

Enter a string:hello
olleh

*/

#include <iostream>

using namespace std;

int main()
{

int a;
string s,r;

cout << "Enter a string:";
cin >> s;
r = s;

int first = 0;
int last = s.length()-1;

for(int i=0; i < s.length(); ++i)
{
    r[last-i] = s[first+i];
}

cout<<r;
}

