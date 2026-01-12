class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int minNum = *min_element(nums.begin(), nums.end());
        int maxNum = *max_element(nums.begin(), nums.end());
        vector<int> missingElements;

        for (int i = minNum; i <= maxNum; ++i) {
            if (numSet.find(i) == numSet.end()) {
                missingElements.push_back(i);
            }
        }

        return missingElements;
    }
};