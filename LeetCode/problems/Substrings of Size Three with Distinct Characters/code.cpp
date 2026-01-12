class Solution {
public:
    int countGoodSubstrings(string s) {
        int cnt = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (i + 2 < s.size() && s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2]) {
                cnt++;
            }
        }

        return cnt;
    }
};