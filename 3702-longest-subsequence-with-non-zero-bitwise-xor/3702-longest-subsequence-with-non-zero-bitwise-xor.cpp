class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        bool zero = true;

        for(int x : nums){
            total ^= x;
            if(x > 0){
                zero = false;
            }
        }

        if(total > 0){
            return n;
        }

        return zero ? 0 : n - 1;
    }
};