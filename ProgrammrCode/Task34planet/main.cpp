/* ### Task 34 ### Created by Vecnik88

Julio Cesar Chavez Mark VII is an interplanetary space boxer, who currently holds the championship belts
for various weight categories on many different planets within our solar system.
However, it is often difficult for him to recall what his "target weight" needs to be on earth in order to make the weight class on other planets.
Write a program to help him keep track of this.

It should ask him what his earth weight is, and to enter a number for the planet he wants to fight on.
It should then compute his weight on the destination planet based on the table below:

#	Planet	Relative gravity
1	Venus	0.78
2	Mars	0.39
3	Jupiter	2.65
4	Saturn	1.17
5	Uranus	1.05
6	Neptune	1.23

So, for example, if Julio weighs 128 lbs. on earth, then he would weigh just under 50 lbs. on Mars, since Mars' gravity is 0.39 times earth's gravity. (128 * 0.39 is 49.92)

Please enter your Earth weight in pounds:128
I have information on the following planets:
1. Venus              2. Mars                3. Jupiter:
4. Saturn             5. Uranus              6. Neptune:
Which planet are you visiting?:2
Your weight would be 49.92 on that planet.

*/

#include <iostream>

using namespace std;

int main()
{
    double earthWeight, newWeight;
    int planet;
    cout << "Please enter your current earth weight:";
    cin >> earthWeight;
    cout << "I have information on the following planets:\n";
    cout << "\t 1. Venus \t 2. Mars \t 3. Jupiter:\n\t 4. Saturn \t 5. Uranus \t 6. Neptune:\n";
    cout << "Which planet are you visiting?:";
    cin >> planet;

switch(planet)
{
case 1:
    newWeight = earthWeight*0.78;
    break;

case 2:
    newWeight = earthWeight*0.39;
    break;

case 3:
    newWeight = earthWeight*2.65;
    break;

case 4:
    newWeight = earthWeight*1.17;
    break;

case 5:
    newWeight = earthWeight*1.05;
    break;

case 6:
    newWeight = earthWeight*1.23;
    break;
    }

cout <<"Your weight would be "<<newWeight<<" on that planet.";

return 0;
}




