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
    TreeNode* result(vector<int>v,int s,int e){
        if(s>e){
            return NULL;
        }
        int mid=s+(e-s)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=result(v,s,mid-1);
        root->right=result(v,mid+1,e);
        return root;
    }
    void build_vector(vector<int>&v,TreeNode* root){
        while(!root){
            return;
        }
        build_vector(v,root->left);
        v.push_back(root->val);
        build_vector(v,root->right);
    }
    TreeNode* balanceBST(TreeNode* root) {
        
        vector<int>v;
        build_vector(v,root);
        return result(v,0,v.size()-1);
    }
};