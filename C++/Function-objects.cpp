//ref - https://en.cppreference.com/w/cpp/utility/functional
//ref - https://en.cppreference.com/w/cpp/algorithm

#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

void display(int a[])
{
    for (int i = 0; i < 9; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int a[] = {4, 7, 2, 8, 4, 10, 18, 5, 11};
    int b[] = {1, 9, 2, 8, 4, 10, 18, 5, 11};
    int c[] = {1, 9, 2, 8, 3, 12, 15, 5, 11};

    //sorting all the elements of the array of size 10
    sort(a, a + 10);
    display(a);

    //sorting first 5 elements of the array of size 10
    sort(b, b + 5);
    display(b);

    //sorting all the elements of the array of size 10
    sort(c, c + 10, greater<int>());
    display(c);
}