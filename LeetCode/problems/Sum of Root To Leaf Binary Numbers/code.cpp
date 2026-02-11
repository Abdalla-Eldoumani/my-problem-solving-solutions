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
    int sumRootToLeaf(TreeNode* root) {
        int sum = 0;
        traverse(root, sum);
        return sum;
    }

    void traverse(TreeNode* root, int &sum) {
        if (root == nullptr) {
            return;
        }

        if (root->left == nullptr && root->right == nullptr) {
            sum += root->val;
            return;
        }

        if (root->left != nullptr) {
            root->left->val += root->val * 2;
            traverse(root->left, sum);
        }

        if (root->right != nullptr) {
            root->right->val += root->val * 2;
            traverse(root->right, sum);
        }
    }
};