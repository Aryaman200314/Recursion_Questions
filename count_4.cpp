#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test>0)
	{
	    int count=0;
	    int x;
	    cin>>x;
	   while(x>0)
	   {
	       int val = x%10;
	       x=x/10;
	       if(val==4)
	       {
	           count++;
	       }
	   }
	      test--;
	    cout<<count<<endl;
	}

}
