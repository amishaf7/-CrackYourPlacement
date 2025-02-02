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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        return true;
        return match(root->left,root->right);
    }
    bool match(TreeNode* a,TreeNode* b){
       
        if(a==NULL && b==NULL)
        return true;
        if(a==NULL || b==NULL)
        return false;
         if(a->val!=b->val)
        return false;
        return (match(a->left,b->right) && match(a->right,b->left));
    }
};
