/* ### Task 22 ### Created by Vecnik88
 *
As a user ,you can enter any character from the keyboard.So what you need to do is,
Write a program to determine whether the character entered is a capital letter,
a small letter, a digit or a special symbol.

Input1:
G
Output1:
capital letter

Input2:
a
Output2:
small letter

Input3:
$
Output3:
special symbol

Input4:
78
Output4:
digit
Output should print exactly as in sample output.
I.e "capital letter","small letter","digit","special symbol" for respective answers.
*/

#include <iostream>
#include <cctype>

using namespace std;

int main ()
{
char ch;
cout<<"Enter any character:";
cin>>ch;

    if(isalpha(ch) && isupper(ch))
        cout << "capital letter" << endl;

    else if(isalpha(ch) && islower(ch))
        cout << "small letter" << endl;

    else if(isdigit(ch))
        cout << "digit" << endl;

    else
        cout << "special symbol" << endl;

return 0;
}

