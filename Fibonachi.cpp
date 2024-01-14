#include<iostream>
using namespace std;

int Fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    int ans = Fib(n-2) + Fib(n-1);

    return ans;
       
    
}

int main()
{
    int n;
    cin>>n;

 int sol = Fib(n);
  cout<<sol;
    return 0;

}