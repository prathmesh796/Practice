#include <iostream>

using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>

class Demo
{
    public:
        T1 var1;
        T2 var2;
        T3 var3;

        Demo(T1 a, T2 b, T3 c)
        {
            var1 = a;
            var2 = b;
            var3 = c;

        }

        void display()
        {
            cout << var1 << endl;
            cout << var2 << endl;
            cout << var3 << endl;
        }
};

int main()
{
    Demo <> obj1(4, 1.8, 'F'); //using the default parameters
    Demo <int, char, double> obj2(2, 'E', 45.0009); //overwriting the default parameters with the custom one's.
    Demo <int, int, double> obj3(2, 'E', 42); //overwriting the default parameters with improper parameters value

    obj1.display();
    cout << endl;

    obj2.display();
    cout << endl;

    obj3.display();//here for int having a char value will show its appropriate ASCII value 
    cout << endl;
}