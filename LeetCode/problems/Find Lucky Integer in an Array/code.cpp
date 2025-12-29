class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;

        for (const auto& n : arr) {
            mp[n]++;
        }
        
        int res = -1;
        for (const auto& p : mp) {
            if (p.first == p.second) {
                res = max(res, p.first);
            }
        }

        return res;
    }
};