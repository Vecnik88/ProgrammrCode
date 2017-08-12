// Created Vecnik88 ---> 23.01.2017
// простая сортировка вставками - O(n^2), в лучшем случае О(n)

#include <iostream>
#include <vector>

using namespace std;

void sort_array(int array[], int value)                          // .---> ### ф-ция сортировки вставками
{                                                                // .---> ### для массива целых чисел
    for(int i{0}; i<value; ++i)
    {
        int term = array[i];
        int j=i-1;
        while(j>=0 && array[j]>term)
        {
            array[j+1]=array[j];
            --j;
        }
        array[j+1] = term;
    }
}

int main()
{
    vector<int>a{12,1,1,1,3,323,4,35,32,1,31,31,23,13,432,42,354,3254,25,23,4532,4,1};

    for (int i{0}; i<a.size(); ++i)              //     .---> сортировка класса вектор вставками
    {
       int temp = a[i];                          //     .---> запомним i-тый элемент
       int j = i-1;                              //     .---> будем идти с i-того элемента
       while(j>=0 && a[j]>temp)
       {
           a[j+1]= a[j];                         //     .---> проталкиваем элемент вверх
           j--;
       }
       a[j+1] = temp;
    }

    // вывод значений класса вектор на экран

    for(int i{0}; i<a.size(); ++i)
        cout << a[i] << ' ';

    // 555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555

    // код сортировки вставками для массива созданного в динамической памяти

    cout << "\t### Enter elements in int array ###" << endl;
    int value;
    cin >> value;

    int* array = new int[value];

    cout << "\t### Enter " << value << " numbers int in array ###" << endl;

    for(int i{0}; i < value; ++i)
    {
        cin >> array[i];
    }

    cout << "\t### Print number array before sort ###" << endl;

    for(int i{0}; i<value; ++i)

        cout << array[i] << ' ';
    cout << endl;

    sort_array(array, value);

    cout << "\t### Print number array later sort ###" << endl;

    for(int i{0}; i<value; ++i)
        cout << array[i] << ' ';
    cout << endl;

    return 0;
}

