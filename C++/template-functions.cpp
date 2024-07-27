#include <iostream>

using namespace std;

template <class T1, class T2>

void average(T1 a, T2 b)
{
    cout << ((a + b) / 2) << endl;
}

int main()
{
    average(2, 3);

    average(3.4, 6);
}