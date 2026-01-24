class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int maxDuration = releaseTimes[0];
        char resultKey = keysPressed[0];
        
        for (size_t i = 1; i < releaseTimes.size(); ++i) {
            int duration = releaseTimes[i] - releaseTimes[i - 1];
            if (duration > maxDuration || (duration == maxDuration && keysPressed[i] > resultKey)) {
                maxDuration = duration;
                resultKey = keysPressed[i];
            }
        }
        
        return resultKey;      
    }
};