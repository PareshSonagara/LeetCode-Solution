class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        vector<int> ans;
        for(int i = mini + 1; i < maxi; i++){
            if(!s.contains(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};