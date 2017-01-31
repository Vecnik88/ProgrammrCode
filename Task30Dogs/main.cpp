/* ### Task 30 ### Created by Vecnik88

In this program, three integer type variables have been given and are used to take input from the user.

You have to make the program display the following messages based on the given conditions:

CONDITION                 MESSAGE

people<cats       Too many cats! The world is doomed!

people>cats       Not many cats! The world is saved!

people<dogs      The world is drooled on!

people>dogs      The world is dry!

After programming the above conditions, before programming the conditions below, add 5 into the current value of the variable 'dogs'

people>=dogs    People are greater than or equal to dogs

people<=dogs    People are less than or equal to dogs

people==dogs    People are equal to dogs

Enter number of people: 20
Enter number of cats: 30
Enter number of dogs: 15
Too many cats! The world is doomed!
The world is dry!
People are greater than equal to dogs.
People are less than equal to dogs.
People are equal to dogs.

*/

#include <iostream>

using namespace std;

int main()
{
int people, cats, dogs;
cout << "Enter number of people: ";
cin >> people;
cout << "Enter number of cats: ";
cin >> cats;
cout << "Enter number of dogs: ";
cin >> dogs;

if(people<cats)
    cout << "Too many cats! The world is doomed!" << endl;

if(people>cats)
    cout << "Not many cats! The world is saved!" << endl;

if(people<dogs)
    cout << "The world is drooled on!" << endl;

if(people>dogs)
    cout << "The world is dry!" << endl;

dogs +=5;

if(people>=dogs) cout << "People are greater than or equal to dogs" << endl;

if(people<=dogs) cout << "People are less than or equal to dogs" << endl;

if(people==dogs) cout << "People are equal to dogs" << endl;

return 0;
}





