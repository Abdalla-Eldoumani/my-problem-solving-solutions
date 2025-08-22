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
// O(n) time complexity
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};

// O(log^2 n) time complexity
class Solution {
public:
    int getHeight(TreeNode* root) {
        if (root == nullptr) {
            return -1;
        }
        
        int height = 0;
        while (root->left != nullptr) {
            height++;
            root = root->left;
        }
        return height;
    }

    int countNodes(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int height = getHeight(root);
        if (height == 0) {
            return 1;
        }

        if (getHeight(root->right) == height - 1) {
            return (1 << height) + countNodes(root->right);
        } else {
            return (1 << (height - 1)) + countNodes(root->left);
        }
    }
};