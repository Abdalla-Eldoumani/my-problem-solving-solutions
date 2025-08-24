class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> st;

        for (auto &p : nums) {
            st.insert(p);
        }

        int num = -1;
        for (int i = 0; i <= nums.size(); ++i) {
            if (st.find(i) == st.end()) {
                num = i;
            }
        }

        return num;
    }
};