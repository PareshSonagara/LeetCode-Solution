class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec(n);
        vec[0] = nums[0];
        vec[n - 1] = nums[1];
        int idx = 0, rev = n - 1;
        for(int i = 2; i < n; i++){
            if(vec[idx] > vec[rev]){
                vec[++idx] = nums[i];
            }
            else{
                vec[--rev] = nums[i];
            }
        }
        reverse(vec.begin() + rev, vec.end());
        return vec;
    }
};