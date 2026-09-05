class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> maxVec(n, INT_MIN), minVec(n, INT_MAX);
        int maxi = nums[0], mini = nums[n-1];
        for(int i = 0; i < n; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
            maxVec[i] = maxi;
        }
        for(int i = n-1; i >= 0; i--){
            if(nums[i] < mini){
                mini = nums[i];
            }
            minVec[i] = mini;
        }
        for(int i = 0; i < n; i++){
            if((maxVec[i] - minVec[i]) <= k){
                return i;
            }
        }
        return -1;
    }
};