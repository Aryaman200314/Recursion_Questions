#include<iostream>
using namespace std;
int Search(int arr[], int size, int key)
{
    int start = 0 , end = size -1;
    int mid = (start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if (key>arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end  =  mid -1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int key;
    int arr[n];
   
    for(int i = 0 ; i <  n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to want to search: ";
    cin>>key;
    int ans = Search(arr,  n , key);
    cout<<ans;
}