/* ### Task 26 ### Created by Vecnik88

Complete the program to give the user the option of converting
Fahrenheit to Celsius or Celsius to Fahrenheit and depending on user's choice carry out the conversion.

Enter your choice (1-2) :
1
98.4
Output:
Celsius = 36.8889

Enter your choice (1-2) :
2
100
Output:
Fahrenheit = 212

*/

#include <iostream>

using namespace std;

int main()
{
int choice;
double temp, conv_temp;
cout << "\nTemperature Conversion Menu: \n";
cout << "\n1. Fahrenheit to Celsius ";
cout << "\n2. Celsius to Fahrenheit";
cout << "\nEnter your choice (1-2): ";
cin >> choice;

if(choice == 1)
{
    cout << "Enter temperature to Fahrenheit: " << endl;
    cin >> temp;
    conv_temp = (temp-32)*5/9;
    cout << "Celsius = " << conv_temp << endl;
}
if(choice == 2)
{
    cout << "Enter temperature to Celsius: " << endl;
    cin >> temp;
    conv_temp = temp*9/5 + 32;
    cout << "Fahrenheit = " << conv_temp << endl;
}

return 0;
}




