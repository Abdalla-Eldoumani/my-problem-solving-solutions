// Using Math
class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        return min(n * n, maxWeight / w);
    }
};

// Normal Loop
class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        for (int i = n * n; i >= 0; --i) {
            if (i * w <= maxWeight) return i;
        }
        return 0;
    }
};