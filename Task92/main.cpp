/* ### Task 92 ### Created by Vecnik88

Overload the + operator for the class 'temp' to add and return the answer of two objects of class 'temp'.

Enter value for t1: 50
Enter value for t2: 100
Their sum is 150

*/

#include <iostream>

using namespace std;

class temp
{
  int value;

public:
  temp(int v=0) : value(v) { }

  temp operator+(temp& t)
  {
      return t.value + this->value;
  }

  int getVal()
  {
      return value;
  }
};

int main()
{
    int n1, n2;
    cout << "Enter value for t1: ";
    cin >> n1;
    cout << "Enter value for t2: ";
    cin >> n2;
    temp t1(n1), t2(n2), t3;
    t3 = t1+t2;
    cout << "Their sum is " << t3.getVal();
    return 0;
}



