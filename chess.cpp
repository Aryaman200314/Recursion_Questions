#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==y)
        {
            cout<<0<<endl;
        }
        else
        {
            int cnt=0;
            int a = y - x;
            if(a<=8)
            {
                cout<<1<<endl;
            }
            else
            {
                while(a>=8)
                {
                    cnt++;
                    a=a-8;
                }
                cnt++;
                cout<<cnt<<endl;
            }
        }
        
    }
}
