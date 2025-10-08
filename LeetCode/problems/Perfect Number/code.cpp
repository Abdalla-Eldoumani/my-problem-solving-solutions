class Solution {
public:
    bool checkPerfectNumber(int num) {
        bool isPerfect = false;

        int sum = 1;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                sum += i;
                if (i != (num / i)) {
                    sum += (num / i);
                }
            }
        }
    
        if (sum == num) {
            isPerfect = true;
        }
        
        return isPerfect;
    }
};