/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void sumLeft(TreeNode* root, int &sum, bool left) {
        if (root == nullptr) {
            return;
        }

        if (root->left == nullptr && root->right == nullptr && left) {
            sum += root->val;
            return;
        }

        sumLeft(root->left, sum, true);
        sumLeft(root->right, sum, false);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        bool left = false;
        sumLeft(root, sum, left);
        return sum;
    }
};