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
    long ans=0;
    public int sumNumbers(TreeNode root) {
       int sum=0;
        
        rec(root, sum,null);
        // System.out.print(ans);
        return (int)(ans/2);
    }
    public void rec(TreeNode root , int sum , TreeNode t ){
        if( root == null ){
            if( t.left==null && t.right==null ){
                ans+=sum;
                // System.out.print(ans);
                sum=0;
            }
            return;
        }
        if(root!=null)
        sum=sum*10+root.val;
        rec( root.left , sum , root );
        rec( root.right , sum , root );
    }
}