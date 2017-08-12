/* ### Task 76 ### Created by Vecnik88

Take a string as input from the user. Take two words as input; the word which the user wants to replace and its substitute. Your task is to write a function 'replace()' that finds and replaces each occurrence of that word.

Enter a string:
Hello World
Enter a word to replace in the string: World
Enter the word you want to replace it with: Earth
Hello Earth

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void replace(string&, string &, string&);

int main()
{
    string input, org, rep;
    cout << "Enter a string:\n";
    getline(cin, input);
    cout << "Enter a word to replace in the string: ";
    cin >> org;
    cout << "Enter the word you want to replace it with: ";
    cin >> rep;

    replace(input, org, rep);

    return 0;
}

void replace(string &in, string& original, string &replaced)
{
    int pos = 0;
    pos = in.find(original,0);

    in.replace(pos, original.length(), replaced);

    cout << in << endl;
}
