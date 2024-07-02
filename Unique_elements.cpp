class Solution {
    int find_max(map<int, int> mymap){
         int max_value = INT_MIN;
        for (const auto& pair : mymap) {
            if (pair.first > max_value) {
                max_value = pair.first;
            }
        }
        return max_value;
    }
public:
    int minIncrementForUnique(vector<int>& nums) {
        map<int, int> mp;
        int increment = 0;
        for(int i = 0 ;i < nums.size() ;i++){
             while (mp.find(nums[i]) != mp.end()){
                increment++;
                int max = find_max(mp);
                nums[i] = nums[i] + max;
                // mp.insert(newval, 1);
                mp[nums[i]] = 1;
            }
        }
        return increment;
    }
};