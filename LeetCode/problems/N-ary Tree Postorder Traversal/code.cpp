/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

// Recursive Solution
class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        
        postOrder(root, res);

        return res;
    }

    void postOrder(Node* root, vector<int>& res) {
        if (root == nullptr) return;

        for (Node* child : root->children) {
            postOrder(child, res);
        }

        res.push_back(root->val);
    }
};

// Iterative Solution
class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        if (root == nullptr) return res;

        stack<Node*> stk;
        stk.push(root);

        while (!stk.empty()) {
            Node* curr = stk.top();
            stk.pop();
            res.push_back(curr->val);

            for (Node* child : curr->children) {
                stk.push(child);
            }
        }

        reverse(res.begin(), res.end());
        return res;
    }
};