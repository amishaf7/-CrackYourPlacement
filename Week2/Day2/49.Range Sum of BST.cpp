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
    void solve(TreeNode* root, int low, int high,int &count){
        if(root==nullptr)
        return ;
        if(root->val>=low && root->val<=high)
        count=count+root->val;
        solve(root->left,low,high,count);
        // if(root->val>=low && root->val<=high)
        // count=count+root->val;
        solve(root->right,low,high,count);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
      int count=0;
      solve(root,low,high,count);
      return count;  
    }
};
