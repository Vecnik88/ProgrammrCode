/* ### Task 35 ### Created by Vecnik88

Make a program which displays a different message depending on the age given. Here are the possible responses:

age is less than 16, say "You can't drive."
age is less than 18, say "You can't vote."
age is less than 25, say "You can't rent a car."
age is 25 or over, say "You can do anything that's legal."
Here's a sample run. Notice that a person who is under 16 will display three messages,
one for being under 16, one for also being under 18, and one for also being under 25.

Hey what's your name?: Billy_Corgan
Okay Billy_Corgan how old are you?: 17

You can't vote Billy_Corgan
You can't rent a car Billy_Corgan

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
int age;
string name;
cout << "Hey what's your name?:";
getline(cin, name);
cout << "Okay "<<name<<" how old are you?:";
cin >> age;

if(age<16)
    cout << "You can't drive " << name << endl;
if(age<18)
    cout << "You can't vote " << name << endl;
if(age<25)
    cout << "You can't rent a car " << name << endl;
if(age>=25)
    cout << "You can do anything that's legal " << name << endl;

return 0;
}



