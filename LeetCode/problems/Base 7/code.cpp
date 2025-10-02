class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) {
            return "0";
        }

        bool negative = false;

        if (num < 0) {
            negative = true;
            num = -num;
        }

        string res = "";
        while (num > 0) {
            res += to_string(num % 7);
            num /= 7;
        }

        if (negative) {
            res += "-";
        }

        reverse(res.begin(), res.end());
        return res;
    }
};