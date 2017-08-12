/* ### Task 11 ### Created by Vecnik88

    The body mass index (BMI) is commonly used by health and nutrition professionals to estimate human body fat in populations.
    It is computed by taking the individual's weight (mass) in kilograms and dividing it by the square of their height in meters.

    Your height in m: 1.75
    Your weight in kg: 73
    Your BMI is 23.8

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
double height,weight,bmi;

cout<<"Please Enter Your Height In Meters : ";
cin>>height;

cout<<"Please Enter Your Weight In Kg : ";
cin>>weight;

bmi = weight/(height*height);

cout << "Your height in m: " << height << endl;
cout << "Your weight in kg: " << weight << endl;

// ### Ограничиваем количество знаков после запятой 1, при помощи манипуляторов fixed, setprecision(1)

cout << fixed << setprecision(1) << "Your BMI is " << bmi << endl;

return 0;
}

