class Solution {
public:
    int findComplement(int num) {
        if (num == 0) return 1;

        int mask = 0, temp = num;
        while (temp) {
            mask = (mask << 1) | 1;
            temp >>= 1;
        }
        
        return num ^ mask;
    }
};