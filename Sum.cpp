#include<iostream>
using namespace std;

int GetSum(int arr[], int size)
{
    if(size==0)
    {
        return 0;
    }
    if(size == 1)
    {
        return arr[0];
    }
    else
    {
        int RemainingPart = GetSum(arr+1, size-1);
        int sum = arr[0] + RemainingPart;
        return sum;
    }
}


int main()
{   
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }


    int sum = GetSum(arr, size);
    cout<<sum;
}