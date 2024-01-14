#include<iostream>
using namespace std;

int Factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        int sp = Factorial(n-1);
        int bp = sp*n;
        return bp;
    }
}
int main()
{
    int n;
    cin>>n;
    int ans = Factorial(n);
    cout<< ans <<endl;
}