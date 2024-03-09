#include<iostream>
using namespace std;
int main()
{
    // int f = 8;
    // int s = 10;
    // int *ptr = &s;
    // cout<<"Before"<<endl;
    // cout<<s<<endl;
    // *ptr = 9 ;
    // cout<<"After"<<endl;
    // cout<<f<<endl;
    // cout<<s<<endl;


   // cout<<"Question2"<<endl;

    // int first = 9;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third+2;
    // cout<<first<<" "<<second<<endl; 

    // cout<<"question 3"<<endl;
    // int arr[5];
    // int *ptr;
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(arr)<<endl;

    // cout<<"question 4"<<endl;
    // int ar[5] = {1, 2, 3, 4};
    // cout<<ar<<endl;
    // cout<<ar+1<<endl;
    // cout<<*ar<<endl;
    // cout<<&ar<<endl;
    // cout<<*(ar+2)<<endl;

    // cout<<"Question 5"<<endl;
    // char a[] = "abcdef";
    // char *p = &a[0];
    // cout<<p<<endl;

    float f = 10.5;
    float p = 2.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p;
}