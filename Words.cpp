#include<iostream>
using namespace std;

void Words(int n, string arr[])
{
    if(n==0)
    {
        return;
    }
    
    int Digit = n %10;
    // cout<<arr[Digit]<<endl;
    n = n / 10;
    // cout<<arr[Digit]<<" ";

    Words(n, arr);
    cout<<arr[Digit]<<" ";
}


int main()
{
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", 
                        "Nine"};
    int n;
    cin>>n;
    Words(n, arr);
}