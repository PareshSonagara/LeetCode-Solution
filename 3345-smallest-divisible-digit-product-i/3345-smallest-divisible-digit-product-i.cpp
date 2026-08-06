class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int x = n;
            int ans = 1;

            while(x){
                ans *= x % 10;
                x /= 10;
            }
            if (ans % t == 0)
                return n;
            n++;
        }
        return -1;
    }
};