//ref - https://en.cppreference.com/w/cpp/container/map

#include<iostream>
#include<map>
#include<string>
//map gives way to store the data in a key-value form 

using namespace std;

void display(map<string, int> &m)
{
    map<string, int> :: iterator it;

    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " : " << (*it).second << endl;
    }
}

int main()
{
    map<string, int> m1;
    map<int, int> m2;

    m1["sam"] = 45;
    m1["ram"] = 3;
    m1["jam"] = 67;

    m1.insert({{"wam", 33}, {"pam", 10}});

    display(m1);

    //size of map
    cout << m1.size() << endl;
    
}