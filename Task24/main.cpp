/* ### Task 24 ### Created by Vecnik88

Write a program that receives inputs from the user and prints the output according to the following conditions.

Condition                        Output

cars>people             We should take the cars

cars<people             We should not take the cars

cars==people           We cannot decide

buses>cars              That is too many buses

buses<cars              Maybe we could take the buses

buses==cars        We still cannot decide

people>buses          All right let us just take the buses

people<=buses      Fine let us stay home then

Enter number of people: 30
Enter number of cars: 40
Enter number of buses: 15
We should take the cars
Maybe we could take the buses
Fine lets stay home then

*/

#include <iostream>

using namespace std;

int main()
{
int people, cars, buses;
cout << "Enter number of people: ";
cin >> people;
cout << "Enter number of cars: ";
cin >> cars;
cout << "Enter number of buses: ";
cin >> buses;

    if(cars>people)
        cout << "We should take the cars" << endl;
    else if(cars<people)
        cout << "We should not take the cars" << endl;
    else
        cout << "We cannot decide" << endl;

    if(buses>cars)
        cout << "That is too many buses" << endl;
    else if(buses<cars)
        cout << "Maybe we could take the buses" << endl;
    else
        cout << "We still cannot decide" << endl;

    if(people>buses)
        cout << "All right let us just take the buses" << endl;
    else
        cout << "Fine let us stay home then" << endl;

    return 0;
}


