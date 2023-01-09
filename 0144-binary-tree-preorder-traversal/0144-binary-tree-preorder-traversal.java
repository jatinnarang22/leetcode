/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
        ArrayList<Integer>v=new ArrayList<>();
       sol(root,v);
        return v;
    }
    void sol(TreeNode root,ArrayList v){
        if(root==null)return;
        
        v.add(root.val);
        sol(root.left,v);
        sol(root.right,v);
    }
}