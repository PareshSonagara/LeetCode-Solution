class Solution {
public:
    long long countCommas(long long n) {
        if(n <= 999) return 0;

        long long total = 0;
        long long x = 1000;

        while(x <= n){
            total += n - x + 1;
            x *= 1000;
        }
        return total;
    }
};