class Solution {
public:
    int maxDepth(string s) {
        int count = 0, ans = 0;
        for(auto ch : s){
            if(ch == '('){
                count += 1;
            }
            ans = max(count, ans);
            if(ch == ')'){
                count -= 1;
            }
        }
        return ans;
    }
};