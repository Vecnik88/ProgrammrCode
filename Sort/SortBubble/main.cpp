// ### Простейшая пузырьковая сортировка на примере контейнера VECTOR###

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void SimpleSort(T& a)
{
    for(int i{0}; i < a.size(); ++i)
    {
        for(int j{0}; j < a.size()-1; ++j)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
    }
}

template<typename T>
void print(T& a)
{
    for(auto i = a.begin(); i!=a.end(); ++i)
        cout << *i << ' ';
    cout << endl;
}

int main()
{
    vector<int>x{12,12341,14,1,521,12,4,1,31,4,12,3,2,31,112,45,55543,2112,2123,45};

    cout << "\t\t### Print vector X before ###" << endl << "\n\t";
    for(int i{0}; i<x.size(); ++i)
        cout << x[i] << ' ';

    cout << endl << endl;

    for(int i{0}; i<x.size(); ++i)
    {
        for(int j{0}; j<x.size()-1; ++j)
        {
            if(x[j]>x[j+1])
                swap(x[j],x[j+1]);
        }
    }

    cout << "\t\t### Print vector X later ###" << endl << "\n\t";
    for(int i{0}; i<x.size(); ++i)
        cout << x[i] << ' ';

    cout << endl;

    vector<int>xxx{2,243,23,1,1,4,12,412,41,41,24,124,1,41,41,4,1,24,2,412,4,14,1,412,4,12,412,41,24,14,1,41,24,14,1,41,41};

    cout << "\t### Vector xxx before sort ###" << "\n\n\t";
    print(xxx);

    SimpleSort(xxx);

    cout << "\t### Vector xxx later sort ###" << "\n\n\t";
    print(xxx);
}
