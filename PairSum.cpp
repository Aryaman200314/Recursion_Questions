#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s) {
  // Write your code here.

  vector<vector<int>> finala;
  int n = arr.size();

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == s) {
        vector<int> ans;

        ans.push_back(min(arr[i], arr[j]));

        ans.push_back(max(arr[i], arr[j]));

        finala.push_back(ans);
      }
    }
  }
  sort(finala.begin(), finala.end());
  return finala;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<vector<int>> result = pairSum(arr, 5);
    for (vector<int> v : result) {
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }

}