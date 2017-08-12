/* ### Task 4 ### Created by Vecnik88

    Write a program that reads in an integer and outputs the number in binary representation

    Input:
    3
    Output:
    BinaryRepresentation :11


    Input:
    7
    Output:
    BinaryRepresentation :111

*/

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int num;
    cout<<"Input:";
    cin>>num;

 cout<< "BinaryRepresentation:" << bitset<sizeof(int)>(num) << endl;
}
