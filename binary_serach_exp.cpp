#include<iostream>
using namespace std;

int Binary(int arr[], int s, int e, int k)
{
    if(s>e)
    {
        return 0;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==k)
    {
        
        return mid;
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
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element want to search"<<endl;
    cin>>key;

    int ans = Binary(arr, 0, arr[size-1],key);

    if(ans == 0)
    {
        cout<<key<<" is not in the array"<<endl;
    }
    else
    {
        cout<<key<<" is at the "<<ans<<" Index "<<endl;
    }
   

}