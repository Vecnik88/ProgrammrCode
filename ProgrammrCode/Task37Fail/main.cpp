/* ### Task 37 ### Created by Vecnik88

Using if statements with compound conditions (like &&), make a guessing game of two questions.

Try to accomplish it using if statements with compound conditions.

Question 1: Does it belong inside or outside or both?
Question 2: Is it alive?
Here are some sample responses:

inside	outside	both
alive	houseplant	bison	dog
not alive	shower curtain	billboard	cell phone

 For any mismatch in input, display "Incorrect Input"

Examples:

Input:

outside

yes

Output:

Then what else could you be thinking of besides a bison?!?


Input:

both

no

Output:

Then what else could you be thinking of besides a cell phone?!?

*/

#include<iostream>
#include<string>

using namespace std;

int main()
{

    string inORout, alive;
    cout << "\nTWO MORE QUESTIONS, BABY!Think of something and I'll try to guess it!:\n";
    cout << "\nQuestion 1) Does it stay inside or outside or both?:";
    cin >> inORout;
    cout << "\nQuestion 2) Is it a living thing?:";
    cin >> alive;

if(inORout == "inside" && alive == "yes")
{
    cout << "Then what else could you be thinking of besides a houseplant?!?" << endl;
    return 0;
}

if(inORout == "outside" && alive == "yes")
{
    cout << "Then what else could you be thinking of besides a bison?!?" << endl;
    return 0;
}

if(inORout == "both" && alive == "yes")
{
    cout << "Then what else could you be thinking of besides a dog?!?" << endl;
    return 0;
}

if(inORout == "inside" && alive == "no")
{
    cout << "Then what else could you be thinking of besides a shower curtain?!?" << endl;
    return 0;
}

if(inORout == "outside" && alive == "no")
{
    cout << "Then what else could you be thinking of besides a billboard?!?" << endl;
    return 0;
}

if(inORout == "both" && alive == "no")
{
    cout << "Then what else could you be thinking of besides a cell phone?!?" << endl;
    return 0;
}

cout << "Incorrect Input" << endl;

return 0;
}


