class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int leftSum = 0, rightSum = 0;

        for (int num : nums) {
            rightSum += num;
        }

        vector<int> result;
        
        for (int num : nums) {
            rightSum -= num;
            result.push_back(abs(leftSum - rightSum));
            leftSum += num;
        }

        return result;
    }
};