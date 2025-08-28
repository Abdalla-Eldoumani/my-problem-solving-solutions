class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> charCount;
        for (char c : s) {
            charCount[c]++;
        }

        int result = 0;
        bool hasOdd = false;
        for (auto &p : charCount) {
            if (p.second % 2 == 0) {
                result += p.second;
            } else {
                result += p.second - 1;
                hasOdd = true;
            }
        }
        
        return result + (hasOdd ? 1 : 0);
    }
};