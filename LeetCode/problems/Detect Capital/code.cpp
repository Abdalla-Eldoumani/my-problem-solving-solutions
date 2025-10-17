class Solution {
public:
    bool detectCapitalUse(string word) {
        bool isFirstUpper = isupper(word[0]);
        bool isSecondUpper = word.size() > 1 ? isupper(word[1]) : false;

        if (!isFirstUpper && isSecondUpper) return false;

        for (int i = 2; i < word.size(); ++i) {
            if (isFirstUpper && isSecondUpper) {
                if (!isupper(word[i])) return false;
            } else {
                if (isupper(word[i])) return false;
            }
        }

        return true;
    }
};