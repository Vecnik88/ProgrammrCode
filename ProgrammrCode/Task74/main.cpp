/* ### Task 74 ### Created by Vecnik88

Write a program that prompts the user for a name. Then display that name ten times. You must use a loop. If the name given is "Mitchell" or "mitchell" display it only five times.

Input:
gump
Output:
gump
gump
gump
gump
gump
gump
gump
gump
gump
gump


Input:
Mitchell
Output:
Mitchell
Mitchell
Mitchell

*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
string name;
int count = 10;
cout << "\nWhat is your name: ";
getline(cin, name);

if (name!="Mitchell" || name!="mitchell")
    for(int i = 0; i < count; ++i)
        cout << name << endl;
else
    for(int i = 0; i < count/2; ++i)
        cout << name << endl;

return 0;
}
