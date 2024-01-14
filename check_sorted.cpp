#include<iostream>
using namespace std;

bool IsSorted(int arr[], int size)
{
    if(size == 1 || size == 0)
    {
        return true;
    }
    if(arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool s = IsSorted(arr+1, size-1);
        return s;
    }
}


int main()
{
    int arr[5] = {1,2,1,4,5};
    int size  = 5;
    bool ans = IsSorted(arr, size);
    if(ans)
    {
        cout<<"Sorted";
    }
    else
    {
        cout<<"Not sorted";
    }
    
}