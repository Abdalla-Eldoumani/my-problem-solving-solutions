class Solution {
public:
    string toLowerCase(string s) {
        for (char& p : s) {
            p = tolower(p);
        }

        return s;
    }
};