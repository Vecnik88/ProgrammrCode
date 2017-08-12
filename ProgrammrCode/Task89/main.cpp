/* ### Task 89 ### Created by Vecnik88

Write a program to calculate the area of four different geometric shapes: triangles, squares, rectangles, and circles.
You must use functions. Your program should present a menu for the user to choose which shape to calculate,
then ask them for the appropriate values (length, width, radius, etc.).
Then it should pass those values to the appropriate function and display the resulting area.

Notice that you must not input the values inside the functions, and you must not display the values inside the functions.
All input and output must be in the main(), and values must be passed to the functions and returned from them.

Shape Area Calculator:

1) Triangle 2) Rectangle 3) Square 4) Circle:

Which shape:1

Base:5

Height:6

The area is 15

Shape Area Calculator:

1) Triangle 2) Rectangle 3) Square 4) Circle:

Which shape:2

Length:10

Width:4

The area is 40

Shape Area Calculator:

1) Triangle 2) Rectangle 3) Square 4) Circle:

Which shape:3

Side:10

The area is 100

Shape Area Calculator:

1) Triangle 2) Rectangle 3) Square 4) Circle:

Which shape:4

Radius:10

The area is 314

*/

#include <iostream>
#include <string>

using namespace std;

double area_triangle(double b, double h)
{
    return (b*h/2);
}
double area_rectangle(double l, double w)
{
    return (l*w);
}
double area_square(double s)
{
    return (s*s);
}

double area_circle(double r)
{
    return (3.14*r*r);
}

int main(int argc, char* argv[])
{
    int x;
    cout<<"Shape Area Calculator:\n";
    cout<<"1) Triangle 2) Rectangle 3) Square 4) Circle:\n";
    cout<<"Which shape:";
    cin>>x;
        switch(x){
        case 1:
            double b,h;
            cout<<"Height:";cin>>h;cout<<"Base:";cin>>b;
            cout<<"The area is "<<area_triangle(b,h);
            break;
        case 2:
            double l,w;
            cout<<"Length:";cin>>l;cout<<"Width:";cin>>w;
            cout<<"The area is "<<area_rectangle(l,w);
            break;
        case 3:
            double s;
            cout<<"Side:";cin>>s;
            cout<<"The area is "<<area_square(s);
            break;
        case 4:
            double r;
            cout<<"Radius:";cin>>r;
            cout<<"The area is "<<area_circle(r);
            break;
        default:
            cout<<"Invalid Option";
        }

return 0;
}


