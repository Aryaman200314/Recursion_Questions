#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        long long target_sum = pow(2, N);
        vector<long long> result;

        // Generate the first N-2 numbers as powers of 2 starting from 1 (2^0, 2^1, ..., 2^(N-2))
        long long current_sum = 0;
        for (int i = 0; i < N - 2; ++i) {
            result.push_back(pow(2, i));
            current_sum += pow(2, i);
        }

        // Calculate the remaining sum needed to reach the target
        long long remaining_sum = target_sum - current_sum;

        // The last two numbers should be chosen such that their sum equals remaining_sum and one of them is repeated
        long long last_num = remaining_sum / 2;
        result.push_back(last_num);
        result.push_back(last_num);

        // Print the result in non-decreasing order
        sort(result.begin(), result.end());
        
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

