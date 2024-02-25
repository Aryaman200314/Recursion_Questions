#include<iostream>
#include<vector>
using namespace std;
void plusMinus(vector<int> arr)
{
    int pos= 0;
    int neg = 0;
    int z = 0;
    int s = arr.size();
    for(int i = 0; i < s; i++) {
        if(arr[i] < 0) {
            neg++;
        } else if(arr[i] > 0) {
            pos++;
        } else {
            z++;
        }
    }
    double rp = static_cast<double>(pos) / s;
    double np = static_cast<double>(neg) / s;
    double zp = static_cast<double>(z) / s;
    cout << rp << endl;
    cout << np << endl;
    cout << zp << endl;
}

int main() {
    vector<int> arr = {-4, 3, -9, 0, 4, 1};
    plusMinus(arr);
    return 0;
}