// Программа работающая с точками, реализован пользовательский класс
// реализованы некоторые операторы, небольшая работа с файлами

// The program works with the points, implemented a custom class
// Implemented by some operators, small work files

// ### Created by Vecnik88 ###

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct Point                                    // <---. создаем простой пользовательский класс
{
    int x, y;
};

istream& operator >>(istream& is, Point& p)     // <---. реализуем поток ввода для него
{
    int a, b;

    is >> a >> b;

    p.x = a;
    p.y = b;

    return is;
}

ostream& operator << (ostream& os, Point& p)    // <---. реализуем поток выводя для него
{
    os << p.x << " " << p.y << endl;
    return os;
}

bool operator ==(Point& a, Point& b)            // <---. оператор сравнения для пользовательского типа
{
    return (a.x==b.x && a.y==b.y);
}

int main()
{
    cout << "\t\t### Enter seven pairs of integer values ###" << endl;

    vector<Point> original_points;

    Point b;

    int check = 1;

    while(cin >> b)                                     // <---. инициализация вектора значения типа Point
    {
        original_points.push_back(b);
        ++check;
        if(check>7)
            break;
    }

    for (int i{0}; i < original_points.size(); ++i)
        cout << original_points[i];

    cout << "Type a file name in which to save data you need" << endl;

        string file_name;                               // <---. имя файла для считывания и сохранения данных
        cin >> file_name;

    ofstream os1{file_name};
        if(os1) cout << "Error1";

    for (int i{0}; i < original_points.size(); ++i)     // <---. считывание данных в файл
        os1 << original_points[i];

    vector<Point>procesed_points(original_points.size());

    ifstream is1{file_name};
    if(!is1) {cout << "Error2";}

    for (int i{0}; i < procesed_points.size(); ++i)     // <---. считывание данных из файла
        is1 >> original_points[i];

    cout << "\n New vector procesed points for display" << endl;

    for (int i{0}; i < procesed_points.size(); ++i)     // <---. вывод вектора на экран
        cout << procesed_points[i];

    return 0;                                           // <---. end
}

