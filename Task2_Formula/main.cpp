/* ### Task 2 ### Created by Vecnik88

    Find the distance between two points A (x1, y1) and B (x2, y2) using distance formula.

 */

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
double x1, x2, y1, y2, distance;

cout <<"Enter x1:"<<endl;
    cin>>x1;
cout <<"Enter y1:"<<endl;
    cin>>y1;
cout <<"Enter x2:"<<endl;
    cin>>x2;
cout <<"Enter y2:"<<endl;
    cin>>y2;

    distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

cout<< "distance :"<< distance << endl;

return 0;
}
