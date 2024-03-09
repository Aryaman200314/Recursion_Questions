#include<iostream>
using namespace std;

vector<int> Rotate(vector<int> arr, int size)
{
    int temp = arr[0];
    for(int j = 0 ; j < size-1 ; j++)
    {
        arr[j] = arr[j+1];
    }
    arr[size - 1] = temp;
    return arr;
}

int main()
{
    int size;
    vector<int> arr;
    cout << "Enter the number of elements: ";
    cin>>size;
    cout<<"Enter elements: ";
    for(int i  = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    } 
    vector<int> ans = Rotate(arr, size);
    for(int i  = 0 ; i < size ; i++)
    {
        cout<<ans[i]<<" ";
    } 
    return 0;
}