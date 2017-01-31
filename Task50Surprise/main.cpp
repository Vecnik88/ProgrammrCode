/* ### Task 50 ### Created by Vecnik88

    Задача без задания на смекалку, без условия найти решение.

    A problem without a job to wit, without conditions to find a solution.

*/

#include <iostream>

using namespace std;

int main()
{
int pin = 12345, input, entries = 1;
int tries = 4;

while(cin>>input)
{
++entries;

if (input == pin)
    cout<<"PIN ACCEPTED. YOU NOW HAVE ACCESS TO YOUR ACCOUNT." << endl;

else if(entries>tries)
    cout << "YOU HAVE RUN OUT OF TRIES. ACCOUNT LOCKED." << endl;

else cout << "INCORRECT PIN. TRY AGAIN." << endl;
}

return 0;
}
