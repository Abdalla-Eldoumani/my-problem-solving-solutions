class Solution {
public:
    bool hasAlternatingBits(int n) {
        int curr;
        if (n % 2 == 0) {
            curr = 1;
        } else {
            curr = 0;
        }

        while (n) {
            if ((n & 1) == curr) {
                return false;
            }

            n >>= 1;
            curr ^= 1;
        }

        return true;
    }
};