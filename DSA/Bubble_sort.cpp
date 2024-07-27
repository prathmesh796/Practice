#include<iostream>

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

    cout<<"Unsorted Array : ";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    
    int i, j;

    for(i = 0; i < n - 1; i++)
    {
        for(j = i; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                int t;
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    cout<<"Sorted Array : ";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
}