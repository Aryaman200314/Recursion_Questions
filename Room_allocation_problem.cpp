#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int test;
    cin >> test;
    while (test > 0)
    {
        test--;
        int number;
        int number_rooms = 0;
        cin >> number;

        int arr[number];
        for (int i = 0; i < number; i++)
        {
            cin >> arr[i];
            
            
                number_rooms += (arr[i] + 1) / 2;
            

        }
        cout<<number_rooms<<endl;
    }

}