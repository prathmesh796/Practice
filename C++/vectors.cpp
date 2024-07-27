//ref - https://en.cppreference.com/w/cpp/container/vector

#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

//Inorder to pass a vector as an argument to any function we have give its object reference
void display(vector<int> &v)
{
    //size() function returns the size of the vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    cout << endl;

}

int main()
{
    //Definition of a vector
    vector<int> v1; //zero len vector
    vector<char> v2(5); //len 5 vector of character type
    vector<char> v3(v2); //len 5 vector of character type with elements of v2
    vector<int> v4(6, 10); //len 6 vector of all elements as "10"

    for (int i = 0; i < 5; i++)
    {
        //push_back(arg1) member function inserts the arg1 into the vector
        v1.push_back(i);
    }
    
    display(v1);

    //access 1st element
    cout << v1.front() << endl;

    //access last element
    cout << v1.back() << endl;

    //pop_back() member function deletes the last element from the vector
    v1.pop_back();

    display(v1);

    //Creating the iterator that will iterate(from start) throughout the given vector
    vector<int> :: iterator it = v1.begin();

    //Creating the iterator that will iterate(from end) throughout the given vector
    vector<int> :: iterator it2 = v1.end();

    //insert(iterator, element) wil by default will insert new element at the beginning
    v1.insert(it, 10);

    display(v1);

    //Insert at 2nd postion
    v1.insert(it + 1, 10);

    display(v1);

    //inserting multiple copies of the given element
    v1.insert(it + 1, 5, 10);

    display(v1);

}