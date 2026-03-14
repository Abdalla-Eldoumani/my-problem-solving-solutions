class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> res(2, 0);

        for (int i = 0; n > 0; ++i) {
            if ((n & 1) == 1) {
                ++res[i % 2];
            }
        
            n >>= 1;
        }
        
        return res;      
    }
};