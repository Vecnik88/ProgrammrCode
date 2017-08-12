// Created Vecnik88

/*
    Реализуйте интеллектуальный указатель.

    Implement smart pointer

*/

#include <iostream>

using namespace std;

template <typename T>
class pointer1
{
public:
    // конструктор
    pointer1(T* a):p(a){cout << "Initialization smartpointer ";}

    // деструктор
    ~pointer1()
    {
        delete p;
    }
    T& operator*() const
    {
        return p;
    }
    T* operator->() const
    {
        return p;
    }
private:
    T* p;
};

class Simple
{
public:
    int* sz = new int[20];
    void print()
    {
        for(size_t i = 0; i < 20; ++i)
        {
            sz[i] = i;
            cout <<  sz[i] << ' ';
        }
    }
    ~Simple()
    {
        delete[] sz;
    }
};
int main()
{
    pointer1<int> point(new int(5));
    pointer1<Simple> arr (new Simple{});

    arr->print();

    return 0;
}

