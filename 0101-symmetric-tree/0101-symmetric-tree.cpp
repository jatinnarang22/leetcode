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
    void callleft(TreeNode* root,vector<int>&l){
        if(root==NULL){l.push_back(-1); return;}
        // cout<<root->val;
        l.push_back(root->val);
        callleft(root->left,l);
        callleft(root->right,l);
    }
    void callright(TreeNode* root,vector<int>&l){
        if(root==NULL){l.push_back(-1); return;}
        l.push_back(root->val);
        callright(root->right,l);
        callright(root->left,l);
        
    }
    bool isSymmetric(TreeNode* root) {
      vector<int>right;
        vector<int>left;
        callleft(root->left,left);
        callright(root->right,right);
        if(left.size()!=right.size())return false;
        for(int i=0;i<left.size();i++){
            cout<<right[i];
            if(left[i]!=right[i])return false;
        }
        return true;
    }
};