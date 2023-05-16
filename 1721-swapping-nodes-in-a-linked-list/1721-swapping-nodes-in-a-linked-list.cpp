/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* pre=temp;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            pre=temp;
            temp=temp->next;
        }
        int start=1;
        int end=cnt-k+1;
        int val=1;
        ListNode* s;
        ListNode* e=head;
        
        int flag=1;
        int f=0;
        if(k==cnt){
            int t=head->val;
            head->val=pre->val;
            pre->val=t;
            f=1;
        }
        int g=0;
        temp=head;
        if(f==0){
        while(temp!=NULL){
            if(start==k){
                if(flag==1){
                    s=temp;
                    flag=0;
                }
                // cout<<1;
                // cout<<s->val;
            }
            
            if(start==k && val==end){
                cout<<s->val<<e->val<<endl;
                int t;
                t=s->val;
                s->val=e->val;
                e->val=t;
                break;
            }
          
            if(val==end && start!=k){
                if(g==0){
                    e=temp;
                    g=1;
                }
                cout<<e->val;
                val--;
                // cout<<start;
            }
            temp=temp->next;
             if(flag==1)
            start++;
              val++;
            if(g==0)
            e=temp;
            // cout<<val;
            
        }
        }
        temp=head;
        return temp;
        
        
    }
};