class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res(2);
        vector<bool> seen(nums.size() + 1, false);
        
        int duplicate = 0;
        for (int num : nums) {
            if (seen[num]) {
                duplicate = num;
            }
        
            seen[num] = true;
        }
        
        for (int i = 1; i <= nums.size(); ++i) {
            if (!seen[i]) {
                res[0] = duplicate;
                res[1] = i;
                break;
            }
        }
        
        return res;
    }
};