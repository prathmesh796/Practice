// ref - https://en.cppreference.com/w/cpp/container/priority_queue

//The priority queue is a container adaptor that provides constant time lookup of the largest (by default) element, at the expense of logarithmic insertion and extraction.

#include <iostream>
#include <queue>
#include <vector>
// #include <functional>
// #include <string_view>

using namespace std;

int main(){
    priority_queue<int> q1; //normal max heap(elements sorted in descending order)
    priority_queue<int, vector<int>, greater<int>> q2; //min heap(elements sorted in ascending order)

    //inserting an element
    q1.push(10);
    q1.push(9);

    q2.push(3);
    q2.push(5);
    q2.push(1);

    //deletinng(poping an element)
    q1.pop();
    q2.pop();

    //accessing the top element
    cout << q1.top() << endl;
    cout << q2.top() << endl;

    //check if empty
    cout << q1.empty() << endl;
    cout << q2.empty() << endl;
}
