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
    
    int i;

    for(i = 1; i < n; i++)
    {
        int x;
        int j;
        x = a[i];
        
        for(j = i - 1; j >= 0; j--)
        {
            if(x < a[j])
            {
                a[j + 1] = a[j];
            }

            else
            {
                break;
            }
        } 
        a[j + 1] = x;
    }

    cout<<"Sorted Array : ";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
}