#include <bits/stdc++.h> 
int findInteger(int n, int k) 
{
    // Write your code here
    vector<int> main;
    for(int i = 1 ; i <= n; i++)
    {
      if (i % 2 == 1) 
      {
        main.push_back(i);
      }
    }
     for(int j = 1 ; j <= n; j++)
     {
         if(j%2==0)
         {
             main.push_back(j);
         }
     }
    int ans;
    ans = main[k-1];
    return ans;

     
}
