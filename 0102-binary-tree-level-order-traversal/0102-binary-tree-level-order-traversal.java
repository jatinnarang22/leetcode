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
    public List<List<Integer>> levelOrder(TreeNode root) {
        
        List<List<Integer>> val=new ArrayList<>();
        if(root==null)return val;
        Queue<TreeNode>q=new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            int size=q.size();
            List<Integer> g=new ArrayList<>();
            for(int i=0;i<size;i++){
                TreeNode temp=q.poll();
                // q.remove();
                g.add(temp.val);
                // System.out.print(temp.val);
                if(temp.left!=null){
                    q.add(temp.left);
                }
                if(temp.right!=null){
                    q.add(temp.right);
                }
            }
            System.out.print(g);
            val.add(g);
        }
        return val;
    }
}