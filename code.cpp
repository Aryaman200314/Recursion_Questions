#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> result;

        // If N = 1, the valid solution is "1 1".
        if (N == 1) {
            result.push_back(1);
            result.push_back(1);
        } else {
            // For N > 1, create N-1 zeros and two ones
            for (int i = 0; i < N - 1; ++i) {
                result.push_back(0);
            }
            result.push_back(1);
            result.push_back(1);
        }
        
        // Print the result in non-decreasing order.
        sort(result.begin(), result.end());
		
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

