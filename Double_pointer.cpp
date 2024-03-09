#include<iostream>
using namespace std;
int main()
{
    int i =5;
    int *p = &i;
    int  **pp = &p;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**pp<<endl;

}