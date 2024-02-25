#include <bits/stdc++.h>
using namespace std;
string Test(string S, string A)
{
    int size = S.length();
    string ans = "";
    for(int i = 0 ; i < size ; i++)
    {
        if(S[i] == A[i])
        {
            ans.push_back('G');
        }
        else
        {
            ans.push_back('B');
        }
    }
    return ans;
}
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case>0)
    {
        test_case--;
        string  str1,str2;
        cin>>str1;
        cin>>str2;
        string final = Test(str1 , str2);
        for(int j = 0 ; j < str1.length() ; j++)
        {
            cout<<final[j];
        }
        cout<<endl;
    }
    return 0;
}
