/* ### Task 73 ### Created by Vecnik88

This program will ask the user to enter a string which will be store in a character array of size 32. You need to display the string in such a way that each word is displayed on a separate line.

Enter a string: Hello World!
Hello
World!

Enter a string: My name is John Doe
My
name
is
John
Doe

*/

#include <iostream>
#include <string>
#include <sstream>;

using namespace std;

int main()
{
string str;
cout << "Enter a string: ";
getline(cin,str);

istringstream is{str};

for(string a; is >> a;)
    cout << a << endl;

return 0;
}


