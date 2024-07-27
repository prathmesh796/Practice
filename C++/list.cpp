//ref - https://en.cppreference.com/w/cpp/container/list

#include<iostream>
#include<stdlib.h>
#include<list>
//list is the in-built lib of cpp which is used to create linked list 

using namespace std;

void display(list<int> &l)
{
    list<int> :: iterator it;
    
    //size() function returns the size of the vector
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << "\t";
    }
    cout << endl;

}

int main()
{
    list<int> l1; //zero len list
    list<int> l2;
    list<char> l3; //len 5 list of character type

    for (int i = 0; i < 10; i++)
    {
        //push_back(arg1) member function inserts the arg1 into the list
        l1.push_back(i);
    }
    display(l1);

    //deleting an element from the end of the list
    l1.pop_back();
    display(l1);

    //deleting an element from the start of the list
    l1.pop_front();
    display(l1);

    //deleting an element from the middle of the list
    //note - if the passed element is present more than once in the list then all those elements will be removed
    //as here suppose there are two '3' in the list , then by executing the next line both the '3's will be removed!
    l1.remove(3);
    display(l1);

    l2.push_back(90);
    l2.push_back(20);
    l2.push_back(34);
    l2.push_back(1);
    l2.push_back(67);
    display(l2);

    //sorting the list in ascending order
    l2.sort();
    display(l2);

    //merging two separete list into a single list
    l1.merge(l2);
    display(l1);

    //reversing the list
    l1.reverse();
    display(l1);

}
