class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, int> mp;
        for(auto r : reservedSeats){
            int row = r[0], seat = r[1];
            if(seat < 2 || seat > 9) continue;
            mp[row] |= (1 << (seat - 2));
        }

        int left = (1<<0)|(1<<1)|(1<<2)|(1<<3);
        int mid   = (1<<2)|(1<<3)|(1<<4)|(1<<5);
        int right = (1<<4)|(1<<5)|(1<<6)|(1<<7);

        int total = 2 * n;
        for(auto [row, mask] : mp){
            total -= 2;
            if((mask & left) == 0 && (mask & right) == 0){
                total += 2;
            }
            else if((mask & left) == 0 || (mask & mid) == 0 || (mask & right) == 0){
                total += 1;
            }
        }
        return total;
    }
};