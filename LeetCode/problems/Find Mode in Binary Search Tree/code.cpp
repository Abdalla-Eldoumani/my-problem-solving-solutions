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
    vector<int> findMode(TreeNode* root) {
        int maxCount = 0, count = 0, prev = INT_MIN;
        vector<int> modes;
        inorder(root, prev, count, maxCount, modes);
        return modes;      
    }

    void inorder(TreeNode* node, int& prev, int& count, int& maxCount, vector<int>& modes) {
        if (!node) return;

        inorder(node->left, prev, count, maxCount, modes);

        if (node->val == prev) {
            count++;
        } else {
            count = 1;
            prev = node->val;
        }

        if (count > maxCount) {
            maxCount = count;
            modes.clear();
            modes.push_back(node->val);
        } else if (count == maxCount) {
            modes.push_back(node->val);
        }

        inorder(node->right, prev, count, maxCount, modes);
    }
};