#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> BubbleSort(int arr[], int size)
{
    for(int i = 0 ; i < size-1;i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j+1] , arr[j]);
            }
        }
    }
}

int main()
{
    int size;
    cout << "Enter the soze of an array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = BubbleSort(arr, size);
    cout << "The sorted array is: \n";
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
}