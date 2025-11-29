class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_one = INT_MIN;
        int max_two = INT_MIN;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > max_one) {
                max_two = max_one;
                max_one = nums[i];
            } else if (nums[i] > max_two) {
                max_two = nums[i];
            }
        }

        return (max_one - 1) * (max_two - 1);
    }
};