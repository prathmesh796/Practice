#include <iostream>

using namespace std;

template <class T>
class Demo
{
    public:
    T data;

    Demo(T a)
    {
        data = a;
    }

    void func();
    //void func1();
};

template <class T>
void Demo <T> :: func()
{
    cout  << "this is a templatized function" << endl;
    cout << data << endl;
}

void func1(int a)
{
    cout << "this is a normal function" << endl; 
    //cout << data << endl; //this will throw error
}

template <class T>
void func1(T a)
{
    cout  << "this is a templatized function" << endl;
    //cout << data << endl; //this will throw error
}

int main()
{
    Demo <int>obj(4);
    obj.func();

    func1(6); // this will call the normal function
}