/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
// class Solution {
//     ListNode temp=null;
//     public Solution(ListNode head) {
//         temp=head;
//     }
    
//     public int getRandom() {
//         int i=0;
//         int ans=0;
//         ListNode p=temp;
//         while (p != null) {
//             if (Math.random() * i < 1) ans = p.val; // replace ans with i-th node.val with probability 1/i
//             p = p.next;
//             i ++;
//         }
//         return ans;
//     }
// }

class Solution {
    int N = 0;
    ListNode temp = null;
    public Solution(ListNode head) {
        temp = head;
    }
    
    public int getRandom() {
        ListNode p = temp;
        int i = 1, ans = 0;
        while (p != null) {
            if (Math.random() * i < 1) ans = p.val; // replace ans with i-th node.val with probability 1/i
            p = p.next;
            i ++;
        }
        return ans;
    }
}
/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */