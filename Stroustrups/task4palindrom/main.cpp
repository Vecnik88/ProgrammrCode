/* Task4 Strau ### Created by Vecnik88

    -   Напишите функции, проверяющию слова и цифры на палиндромность.

    -   Write function, checking the words and numbers on Palindrome.

*/

#include <iostream>
#include <string>

using namespace std;

bool is_palindrom_int(int n)                    // <---. ф-ция определяющая числа на палиндромность
{                                               // <---. возвращает true если числа палиндром
    int cpy, prototip = 0;
    cpy = n;
    while(n)
    {
        prototip = prototip*10+n%10;
        n/=10;
    }
    if(cpy==prototip) return true;

    else return false;
}
bool is_palindrom_string(const string& str)      // <---. ф-ция определяет строку на зеркальность
{                                                // <---. возвращает true когда строка палиндром
    for(int i = 0; i < str.length(); ++i)
        if(tolower(str[i])==tolower(str[str.length()-1-i]))     // ### сравниваем без учета регистра
        continue;

        else return false;

    return true;
}
int main()
{
    int value = 909;
    string str = "AToyoTA";

    cout << "Enter string: " << endl;

    while(cin>>str)
    {
        if(is_palindrom_string(str)) cout << "String \"" << str << "\" is Palindrom" << endl;

        else cout << "String \"" << str << "\" is not palindrom" << endl;
    }

    cout << "Enter int number" << endl;

    while(cin>>value)
    {
        if(is_palindrom_int(value)) cout << "Value \"" << value << "\" is Palindrom" << endl;

        else cout << "Value \"" << value << "\" is not palindrom" << endl;
    }

    return 0;
}

