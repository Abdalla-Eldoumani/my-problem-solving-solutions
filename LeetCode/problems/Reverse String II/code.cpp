#include <string>
#include <algorithm>

class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2 * k) {
            int left = i;
            int right = min(i + k - 1, s.size() - 1);

            while (left < right) {
                swap(s[left++], s[right--]);
            }
        }
        
        return s;
    }
};