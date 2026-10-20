
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        if (root == nullptr) {
            return ans;
        }

        inorder(root, ans);
        return ans;
    }

    void inorder(TreeNode* root, vector<int>& ans) {
        if (root == nullptr) {
            return;
        }

        inorder(root->left, ans);  // 1. Left
        ans.push_back(root->val); // 2. Root
        inorder(root->right, ans); // 3. Right
    }
};
