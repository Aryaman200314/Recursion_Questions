#include<iostream>
using namespace std;

bool Binary(int arr[], int s, int e, int k)
{
    if(s>e)
    {
        return false;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==k)
    {
        return true;
    }

    if(arr[mid]<k)
    {
        Binary(arr, mid+1, e, k);
    }
    else
    {
        Binary(arr, s, mid-1, k);
    }
}

int main()
{   
    int size;
    int key;
    cout<<"Enter the size of the aRray"<<endl;
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element want to search"<<endl;
    cin>>key;

    cout<<Binary(arr, 0, arr[size-1],key);


}