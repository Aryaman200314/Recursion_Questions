#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minelementIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minelementIndex])
            {
                minelementIndex = j; // update the index of minimum element in the unsorted array
            }
        }
        swap(arr[i], arr[minelementIndex]); // swap the found minimum element
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

    vector<int> ans = selectionSort(arr, size);
    cout << "The sorted array is: \n";
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
}