// .---> Сортировка слиянием на примере двух векторов
// .---> MergeSort 24.01.2017
// .---> Created by Vecnik88

#include <vector>
#include <iostream>

template <typename T>
inline void swap( T & arg1, T & arg2)                           // .---> переставляем значениям местами
{
    T temp = arg1;
    arg1 = arg2;
    arg2 = temp;
}

template <typename T>
inline void merge( std::vector<T> & vArray, std::vector<T> & vTemp, int head, int middle, int tail)
{
    int tmp = 0, lower = head, upper = middle+1;

    while (lower <= middle && upper <= tail)
    {
        if (vArray[lower] < vArray[upper])
        {   vTemp[tmp++] = vArray[lower++]; }
        else
        {   vTemp[tmp++] = vArray[upper++]; }
    }

    if (lower <= middle)
    {
        for(; lower <= middle; vTemp[tmp++] = vArray[lower++]);
    }
    else
    {
        for(; upper <= tail; vTemp[tmp++] = vArray[upper++]);
    }

    int arrayPointer = head;
    for (tmp = 0; arrayPointer <= tail; vArray[arrayPointer++] = vTemp[tmp++]);
}
template <typename T>
inline void merge_sort_helper( std::vector<T> & vArray, std::vector<T> & vTemp, int head, int tail)
{
    if(head == tail)
    {   return; }

    int middle = (head+tail)/2;

    merge_sort_helper( vArray, vTemp, head, middle);
    merge_sort_helper( vArray, vTemp, middle+1, tail);

    merge( vArray, vTemp, head, middle, tail);
}

template <typename T>
void merge_sort( std::vector<T> & vArray)                       // .---> ф-ция сортировки
{
    std::vector<T> v(vArray.size(), 0);                         // .---> создаем копию, инициализируем 0
    merge_sort_helper( vArray, v, 0, vArray.size()-1);
}

int main()
{
    std::vector<int>xxx;                                        // .---> создаем пустой вектор
    for(int i{0}; i < 20; ++i)
        xxx.push_back(rand());                                  // .---> инициализируем его случайными значениями
    for(int i{0}; i < xxx.size(); ++i)
        std::cout << xxx[i] << ' ';                             // .---> выводим значения до сортировки
    std::cout << std::endl;

    merge_sort(xxx);                                            // .---> сортируем вектор ххх слиянием

    for(int i{0}; i < xxx.size(); ++i)
        std::cout << xxx[i] << ' ';                             // .---> выводим значения после сортировки
    std::cout << std::endl;

    return 0;
}
