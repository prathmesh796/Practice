#include<iostream>

using namespace std;

template <class T>

class Vectors
{
    public:
        T * arr;
        int size;

        Vectors(int m)
        {
            size = m;
            arr = new T[size];
        }

        Vectors dotproduct(Vectors &v)
        {
            T d = 0;

            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i]; 
            }
            
            cout << d << endl;
        }
};

int main()
{
    Vectors <int>v1(3);
    Vectors <int>v2(3);
    v1.arr[0] = 3;
    v1.arr[1] = 7;
    v1.arr[2] = 4;
    v2.arr[0] = 1;
    v2.arr[1] = 9;
    v2.arr[2] = 4;
    v1.dotproduct(v2);
    
    return 0;
}