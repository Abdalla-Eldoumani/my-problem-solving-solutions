class Solution {
public:
    bool isSubstringPresent(string s) {
        for (int i = 0; i < s.size() - 1; i++) {
            for (int j = s.size() - 1; j > i; j--) {
                if (s[i] == s[j] && s[i + 1] == s[j - 1]) {
                    return true;
                }
            }
        }
        
        return false;
    }
};