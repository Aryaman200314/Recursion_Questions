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


    int sum = GetSum(arr, size);
    cout<<sum;
}