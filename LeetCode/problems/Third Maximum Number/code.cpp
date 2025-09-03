class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st;

        for (auto &p : nums) {
            st.insert(p);
        }

        if (st.size() >= 3) {
            int idx = st.size() - 3;
            return *next(st.begin(), idx);
        } else {
            return *--st.end();
        }
    }
};