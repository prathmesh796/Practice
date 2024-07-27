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

    cout<<"Enter the number that is to be searched : ";
    cin>>x;

    int high, low, mid, div;
    low = 0;
    high = n - 1;

    
    while(low <= high)
    {
        mid = (low + high) / 2;
        
        if(a[mid] > x)
        {
            high = mid - 1;
        }
        
        else if(a[mid] < x)
        {
            low = mid + 1;
        }
        
        else
        {
            break;
        }
    }

    if(a[mid] == x){
        cout<<"Number found : "<<a[mid]<<endl;
    }

    else{
        cout<<"Unsuccessful search"<<endl;
    }

}