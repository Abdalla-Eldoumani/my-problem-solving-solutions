class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int cnt = 0;

        for (auto &c : operations) {
            if (c == "X--" || c == "--X") cnt--;
            else cnt++;
        }

        return cnt;
    }
};