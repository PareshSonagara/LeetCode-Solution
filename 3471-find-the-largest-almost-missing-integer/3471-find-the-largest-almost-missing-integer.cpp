class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        if(k == nums.size()){
            return *max_element(nums.begin(), nums.end());
        }

        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }
        
        if(k == 1){
            int maxValue = -1;
            for(int i = 0; i < n; i++){
                if (mp[nums[i]] == 1 && nums[i] > maxValue) {
                    maxValue = nums[i];
                }
            }
            return maxValue;
        }

        int ans = -1;
        if(mp[nums[0]] == 1){
            ans = max(ans, nums[0]);
        }

        if(mp[nums[n - 1]] == 1){
            ans = max(ans, nums[n - 1]);
        }

        return ans;
    }
};