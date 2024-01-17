#include<iostream>
using namespace std;
void merge(int *arr, int s,int e)
{
    int mid  = (s+e)/2;
    int arr1 = mid - s + 1;
    int arr2 = e - mid;
    int *first = new int[arr1];
    int *second = new int[arr2];
    int k = s;
    for (int  i = 0; i < arr1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid+1;
    for (int i = 0; i < arr2; i++)
    {
        second[i] = arr[k++]; 
    }
    int index1 = 0;
    int index2 = 0;
    k = s;
    while (index1 < arr1 && index2 < arr2){
        if (first[index1]<second[index2])
        {
            arr[k++]=first[index1++];
        }
        else
        {
            arr[k++]=second[index2++];
        }
        
    }
    while (index1<arr1)
    {
        arr[k++]=first[index1++];
    }
    while (index2<arr2)
    {
        arr[k++]=second[index2++];
    }
    
    
}

void mergeSort(int *arr, int s,int e)
{
    if(s>=e)
    {
        return ;
    }
    int mid = (s+e)/2;
    //left
    mergeSort(arr, s, mid);
    //right
    mergeSort(arr, mid+1,e);

    merge(arr, s, e);
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


    mergeSort(arr, 0, size-1);
    for(int i = 0 ;i < size;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}