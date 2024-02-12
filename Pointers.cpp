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
    cout<<*w;

}