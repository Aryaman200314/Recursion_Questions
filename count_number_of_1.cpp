#include <iostream>
#include <stack>
using namespace std;

int countBinary(int n)
{
    stack<int> myStk;
    int count = 0;
    if (n == 0)
        
    {
        return 1;
    }
    else
    {
        while (n > 0)
        {
            myStk.push(n % 2);
            n = n / 2;
        }
    }

    while (!myStk.empty())
    {
        if (myStk.top() == 1)
        {
            count++;
            myStk.pop();
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int ans = countBinary(n);
    cout<<ans;
    
    return 0;}