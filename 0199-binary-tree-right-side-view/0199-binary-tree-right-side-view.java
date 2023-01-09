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
    public List<Integer> rightSideView(TreeNode root) {
        ArrayList<Integer>result=new ArrayList<Integer>();
        rightview(root,result,0);
        return result;
    }
    public void rightview(TreeNode curr,List<Integer>result,int value){
        if(curr==null)return;
        
        if(value==result.size())result.add(curr.val);
        
        rightview(curr.right,result,value+1);
        rightview(curr.left,result,value+1);
    }
}