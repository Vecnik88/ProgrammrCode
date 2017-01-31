/* ### Task 27 ### Created by Vecnik88

Given a string, determine whether the string has all uppercase alphabets or not.
A string with all alphabets in upper case is valid otherwise it is invalid.
If valid, print "VALID" else print "INVALID".

Input:
asddfAAS
Output:
INVALID

Input:
AASDFWASDD
Output:
VALID

*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool is_upper_string(string& s)         // <---. ф-ция определяет возвращает true,
{                                       //       когда все буквы заглавные
for(int i{0}; i < s.length(); ++i)
{
    if(!isupper(s[i])) return false;
}
    return true;
}
int main()
{
cout<<"Enter the string:\n";
string s;
cin>>s;

if(is_upper_string(s))
    cout << "VALID" << endl;

else cout << "INVALID" << endl;

return 0;
}





