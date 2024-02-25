#include<iostream>
using namespace std;
int main()
{   int i  = 5;
    int *ptr = &i;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;


    int j = 6;
    int *x = 0 ; 
    x = &j;
    cout<<*x<<endl;
    cout<<x<<endl;

    (*x)++;
    cout<<j;


    int v = 4;
    int *w = &v;
    cout<<w<<endl;
    w=w+1;
    cout<<w<<endl;
    cout<<*w<<endl;
    
    cout<<"arrays"<<endl;

    int arr[10] = {1,69,3,4};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;

    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<endl;
    
    int *p  = &arr[0];
    cout<<*p<<endl;
    cout<<p<<endl;

    //& opeartor will always gives the address of the given  variable.
    ///* opeartor will always gives the value  of the variable pointed by that address.
    
    
    



}