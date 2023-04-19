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
    int maxlen=0;
    void dfs(TreeNode* root,int val,int s){
    if(!root){
        return;
    }
        maxlen=max(maxlen,s);
        if(val==0){
            dfs(root->left,0,1);
            dfs(root->right,1,s+1);
        }
        else{
            dfs(root->left,0,s+1);
            dfs(root->right,1,1);
            
        }
    }
    int longestZigZag(TreeNode* root) {
        
        int s=0;
        dfs(root,0,s);
        dfs(root,1,s);
        return maxlen;
    }
};