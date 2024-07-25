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
void solve(TreeNode* root, TreeNode* newr) {
    if (root == nullptr) return;

    if (root->left != nullptr) {
        newr->right = new TreeNode(root->left->val);
        solve(root->left, newr->right);
    }

    if (root->right != nullptr) {
        newr->left = new TreeNode(root->right->val);
        solve(root->right, newr->left);
    }
}

TreeNode* invertTree(TreeNode* root) {
    if (root == nullptr) return nullptr;

    TreeNode* newr = new TreeNode(root->val);
    solve(root, newr);
    return newr;
}
};
