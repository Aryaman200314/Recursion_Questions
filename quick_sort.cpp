#include<iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0 ;
    for(int i = s+1 ; i <=e;i++)
    {
        if (arr[i] <= pivot )
        {
            count++;
        }
    }
    int pivotIndex = s+count;
    swap(arr[pivotIndex], arr[s]);

    // now putiing elements which are less than pivot on left and greater than on right 
    int i = s ;
    int j = e;

    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;;
        }
        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
}
void quickSort(int arr[], int s, int e) // arr[] means passing the array by value 
{
    if(s>=e)
    {
        return ;
    }
    else
    {
        int p = partition(arr, s, e);
        quickSort(arr, s, p-1); //Left part
        quickSort(arr, p+1, e); //Roght part
        
    }
}

int main() {
     int size;
   
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }

    quickSort(arr, 0, size-1);
    for(int i = 0 ;i < size;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}