class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
    
    ListNode *res = new ListNode(-1);
    ListNode* temp = res; 
    ListNode* l1=head1;
    ListNode* l2=head2;

   while(l1 && l2){
       if(l1->val<l2->val){
           temp->next=l1;
           l1=l1->next;
       }
       else{
           temp->next=l2;
           l2=l2->next;
       }
       temp=temp->next;
   }
   if(l1) temp->next=l1;
   else temp->next=l2;
    return res->next;
    }
};