/* ### Task 68 ### Created by Vecnik88

write a program that reads a sting and print the reverse version of it
Input :
sample
Output:
elpmas

Input :
ramadan
Output:
nadamar

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
string buffer;
string reversedbuffer;
cout<<"Enter a string to be reversed :"<<endl;
cin>>buffer;
reversedbuffer=buffer;

int last = buffer.length()-1;
for(int i = 0; i < buffer.length();++i)
    reversedbuffer[i] = buffer[last-i];

cout<<"reversed string :"<<reversedbuffer<<endl;

return 0;
}

