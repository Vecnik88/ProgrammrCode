/* ########### Created by Vecnik88

Get a Date from user and tell the day .

Year should be greater than 1900.

year:2010
month:11
date:11
Thursday

Программа просит пользователя ввести год, месяц, день.
Сообщает пользователю каким днем неделю является введенная дата.
Этот алгоритм вычисления дня недели - можно использовать в классе Date из книги Страуструпа.

*/

#include <iostream>
#include <string>

using namespace std;

void dayy(int year,int month,int day)           // <---. функция определяет день недели по дате
{
int a, y, m, dd;
a = (14-month)/12;
y = year-a;
m = month+12*a-2;
dd =((day+y+(y/4)-(y/100)+(y/400)+((31*m)/12))%7)+1;    // #####################################

switch(dd)
{
case 1:
    cout << "Sunday" << endl;
    break;

case 2:
    cout << "Monday" << endl;
    break;

case 3:
    cout << "Tuesday" << endl;
    break;

case 4:
    cout << "Wednesday" << endl;
    break;

case 5:
    cout << "Thursday" << endl;
    break;

case 6:
    cout << "Friday" << endl;
    break;

case 7:
    cout << "Saturday" << endl;
    break;

default:
    cout << "Wrong Input" << endl;
    break;
}
}

int main()
{
int day, year, month;

cout << "Enter Year: ";
cin >> year;
cout << "Enter Month: ";
cin >> month;
cout << "Enter Date: ";
cin >> day;

int yy = year;

dayy(year,month,day);

return 0;
}


