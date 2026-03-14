class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> count1(26, 0), count2(26, 0);
        
        for (char c : word1) {
            count1[c - 'a']++;
        }
        
        for (char c : word2) {
            count2[c - 'a']++;
        }
        
        for (int i = 0; i < 26; i++) {
            if (abs(count1[i] - count2[i]) > 3) {
                return false;
            }
        }
        
        return true;
    }
};