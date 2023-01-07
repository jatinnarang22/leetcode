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
    vector<int>q;
    void inorder(TreeNode* root){
        if(!root)return;
        inorder(root->left);
        q.push_back(root->val);
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
      if(!root)return true;
        inorder(root);
        for(int i=0;i<q.size()-1;i++){
            if(q[i]>=q[i+1])return false;
        }
        return true;
    }
};