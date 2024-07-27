#include<iostream>

using namespace std;

int Partition(int a[10], int left, int right)
{
    int pivot, temp;
    pivot = a[left];
    int pivot_index = left;
    
    while(left < right)
    {
        while((a[right] < pivot) && (left <= right))
        {
            right--;
        }

        while((a[left] >= pivot) && (left <= right))
        {
            left++;
        }

        if(left < right)
        {
            temp = a[right];
            a[right] = a[left];
            a[left] = temp;
        }
    }
    
    if(pivot_index != right)
    {
        a[pivot_index] = a[right];
        a[right] = pivot;
    }

    return right;
}

void QuickSort(int a[10], int left, int right)
{
    int pivot = Partition(a, left, right);
    
    if(left < pivot)
    {
        QuickSort(a, left, pivot - 1);
    }

    if(right > pivot)
    {
        QuickSort(a, pivot + 1, right);
    }
}

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
    
    QuickSort(a, 0, n - 1);

    cout<<"Sorted Array : ";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
}