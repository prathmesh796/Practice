#include <iostream>

using namespace std;

/*
templets with multiple parameters :
templets <class T1, clss T2, ...>
class Classname{};
*/

template <class T1, class T2>

class Demo
{
    public:
        T1 var1;
        T2 var2;

        Demo(T1 a, T2 b)
        {
            var1 = a;
            var2 = b;
        }

        void display()
        {
            cout << this->var1 << endl;
            cout << this->var2 << endl;
        }
};

int main()
{
    Demo <char, int> obj1('A', 4);
    Demo <float, long> obj2(3.3, 1234567890);

    obj1.display();
    obj2.display();
}