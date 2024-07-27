/*
    In any Data structure, if we want to search any element, the we use this algorithm
    Step 1: 
*/

#include<stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n, x;

    cout<<"Enter the number of elements in the array : ";
    cin>>n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the number that is to be searched : ";
    cin>>x;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            cout<<"Number found! : "<<a[i];
            break;
        }

        else
        {
            cout<<"Unsuccessful search!";
            break;
        }
    }
}