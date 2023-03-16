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
    TreeNode* sol(vector<int>& inorder, vector<int>& postorder,int s,int e,int &n){
        if(s>e)return NULL;
        if(n<0)return NULL;
        TreeNode* root=new TreeNode(postorder[n--]);
        int pos=0;
        for(int i=0;i<=e;i++){
            if(inorder[i]==root->val){
                pos=i;
                break;
            }
        }

        cout<<n;
          root->right=sol(inorder,postorder,pos+1,e,n);
        root->left=sol(inorder,postorder,s,pos-1,n);
      
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
     int n = size(inorder), postIdx = n-1;
        return sol(inorder,postorder,0,postorder.size()-1, postIdx);
    }
};