#include<iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int k)
{
    if(size==0)
    {
        return false;
    }
    if(arr[0]==k)
    {
        return true;
    }

    else
    {
        int ans = LinearSearch(arr+1, size-1, k);
        return ans;
        
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

    int Searched = LinearSearch(arr, size, key);
    if(Searched){
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Not found";
    }

}