/* ### Task 75 ### Created by Vecnik88

Given a string as an input from the user, you need to create a function which will return the number of vowels in that particular string.

Enter a string:
abcdefghijklmnopqrstuvwxyz
Number of vowels = 5

*/

#include <iostream>
#include <string>

using namespace std;

int counter(string);

int main()
{

string input;
cout << "Enter a string:\n";
getline(cin, input);
cout << "Number of vowels = " << counter(input);

return 0;
}

int counter(string str)
{
int count=0;
for(int i = 0; i < str.length(); ++i)
{
    switch(tolower(str[i]))
    {
    case 'a': case 'e': case 'y':
    case 'u': case 'o':
        ++count;
        break;
    }
}
    return count;
}
