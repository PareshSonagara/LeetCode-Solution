class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int total = 0, ans = nums[0];

        for(int i = 0; i < n; i++){
            if(total < 0){
                total = 0;
            }

            total += nums[i];
            ans = max(ans, total);
        }
        return ans;        
    }
};