class Solution {
public:
    bool checkRecord(string s) {
        bool late = false;
        bool absent = false;
        int absentCount = 0;
        int lateCount = 0;

        for (const char& c : s) {
            if (c == 'A') {
                absentCount++;
                lateCount = 0;
            } else if (c == 'L') {
                lateCount++;
            } else {
                lateCount = 0;
            }

            if (absentCount >= 2) {
                absent = true;
            }
            
            if (lateCount >= 3) {
                late = true;
            }

            if (absent || late) {
                return false;
            }
        }

        return true;
    }
};