class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int max_val = 0;

        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if (abs(nums[i] - nums[j]) <= min(nums[i], nums[j])) {
                    max_val = max(max_val, nums[i] ^ nums[j]);
                } 
            }
        }

        return max_val;
    }
};