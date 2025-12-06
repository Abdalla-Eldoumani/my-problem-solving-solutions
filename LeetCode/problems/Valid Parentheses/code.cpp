class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> parentheses = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        
        stack<char> stk;
        for (char c : s) {
            if (parentheses.count(c)) {
                if (stk.empty() || stk.top() != parentheses[c]) {
                    return false;
                }
                stk.pop();
            } else {
                stk.push(c);
            }
        }
        return stk.empty();
    }
};