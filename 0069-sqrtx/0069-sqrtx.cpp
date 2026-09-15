class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) return x;

        long long left = 1, right = x / 2;
        while(left <= right){
            long long mid = left + (right - left) / 2;
            long long ans = mid * mid;

            if(ans == x){
                return mid;
            }
            else if(ans < x){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return right;        
    }
};