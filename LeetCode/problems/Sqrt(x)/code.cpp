class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;

        int low = 0, high = x;

        while (low <= high) {
            int mid = (low + high) / 2;

            if ((long long) mid * mid == x) {
                return mid;
            } else if ((long long) mid * mid > x) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return high;
    }
};