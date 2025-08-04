class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size();
        int row = 0, col = rows * cols - 1;

        while (row <= col) {
            int mid = (row + col) / 2;

            if (matrix[mid / cols][mid % cols] == target) {
                return true;
            } else if (matrix[mid / cols][mid % cols] < target) {
                row = mid + 1;
            } else {
                col = mid - 1;
            }
        }

        return false;
    }
};