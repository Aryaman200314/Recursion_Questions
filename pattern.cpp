// #include <iostream>

// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     for (int i = n; i > 0; i--) {
//         for (int j = 0; j < i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h> 
// vector<string> printPatt(int n)
// {
//     // Write your code here
//     for(int i = 0 ; i < n ; i++)
//     {
//         for(int j = n ; j < 0 ; j--)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// vector<string> printPatt(int n)
// {
//      vector<string> ans;
//     // Write your code here
//     for(int i = 0 ; i < n ; i++)
   
//     {
//         string star="";
//         for(int j = n ; j > 0 ; j--)
//         {
//             star+= "*";
//         }
//         ans.push_back(star);
//     }
//     return ans;
// }
// int main()
// {
//     string ans = printPatt(5);
//     for(int i  = 0 ; i < 5 ; i++ )
//     {
//         cout<<ans[i]<<" ";
//     }
// }


