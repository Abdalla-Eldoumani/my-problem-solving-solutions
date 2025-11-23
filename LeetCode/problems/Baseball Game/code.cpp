class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> res;

        for (const string& p : operations) {
            if (p == "+") {
                res.push_back(res[res.size() - 1] + res[res.size() - 2]);
            } else if (p == "D") {
                res.push_back(res.back() * 2);
            } else if (p == "C") {
                res.pop_back();
            } else {
                res.push_back(stoi(p));
            }
        }

        return accumulate(res.begin(), res.end(), 0);
    }
};