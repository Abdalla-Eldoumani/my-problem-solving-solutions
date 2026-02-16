class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> words;

        for (int i = 0; i < s.size(); i++) {
            string word;

            while (i < s.size() && s[i] != ' ') {
                word += s[i];
                i++;
            }

            words.push_back(word);
        }

        string result;
        for (int i = 0; i < k; i++) {
            result += words[i];

            if (i != k - 1) {
                result += ' ';
            }
        }

        return result;
    }
};