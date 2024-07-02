#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(2, -1);
    cout<<sizeof(arr)<<endl;
    cout<<arr[0];
    cout<<arr[1];
    return 0;
}
