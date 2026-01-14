// Set Approach
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> numSet;
        
        for (int num : nums1) {
            numSet.insert(num);
        }

        for (int num : nums2) {
            if (numSet.count(num)) {
                return num;
            }
     }

        return -1;
    }
};

// Two-pointer Approach
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int left = 0, right = 0;

        while (left < nums1.size() && right < nums2.size()) {
            if (nums1[left] == nums2[right]) {
                return nums1[left];
            } else if (nums1[left] < nums2[right]) {
                left++;
            } else {
                right++;
            }
        }

        return -1;
    }
};