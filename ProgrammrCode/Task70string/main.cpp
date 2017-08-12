/* ### Task 70 ### Created by Vecnik88

Decrypted value of a string can be found out by adding the ASCII value of each character of a given string.
Given a string find its decrypted value?

Input:
Enter the string:
abc
Output:
The decrypted string value is:
294

Input:
Enter the string:
B
Output:
The decrypted string value is:
66

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{

int sum=0;
string s;
cout << "Enter the string:\n";
cin >> s;

for(int i{0}; i <s.length(); ++i)
    sum+=int(s[i]);

cout << "The decrypted string value is:" << sum;

return 0;
}

