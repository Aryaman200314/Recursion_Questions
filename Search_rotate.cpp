#inlcude<iostrea>

int Pivot(vector<int>& arr, int size)
{
    int sum = 0 ; 
    int left_sum = 0;
    for(int i = 0 ;  i < size; i++)
    {
        sum = sum + arr[i];
    }
    for(int i = 0 ; i < size;i++)
    {
        sum = sum - arr[i];
        if(sum==left_sum)
        {
            return i;
        }
        left_sum = left_sum + arr[i];
    }
    return -1;
}

int Searchh(vector<int>& arr, int s, int e, int key)
{
    int mid =  s + (e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot = Pivot(arr, n);
    if(pivot==-1)
    {
        return Searchh(arr,0, n-1,k);
    }
    if(k>=arr[pivot] && k<=arr[n-1])
    {
        return Searchh(arr, pivot, n-1, k);
    }
    else
    {
        return Searchh(arr, 0, pivot-1, k);
    }

}
int main()
{
    search(arr,size,key)
}