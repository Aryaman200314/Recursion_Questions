#include<iostream>
using namespace std;
void bubblesort(int arr[], int s)
{
    if(s==0||s==1)
    {
        return;
    }
    else
    {
        for(int i = 0 ; i < s-1 ; i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
    }
    bubblesort(arr,s-1);
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
    

    bubblesort(arr, size );
    for(int i  = 0 ; i < size; i++)
    {
        cout<<"Sorter array is: "<<arr[i]<<" ";
    }
}