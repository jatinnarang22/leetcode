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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0 ||k==1 && head->next==NULL)return head;
        vector<int>v;
        vector<int>ans;
        ListNode* temp=head;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        
        while(k>v.size()){
            k=k-v.size();
        }
         k=v.size()-k;
        // if(k<0)k=-k;
        // cout<<k;
        if(k==0){
            return temp;
        }
        // cout<<k;
        for(int i=k;i<v.size();i++){
            ans.push_back(v[i]);
        }
        if(k==v.size())k=k-1;
        for(int i=0;i<k;i++){
            ans.push_back(v[i]);
        }

        head=temp;
        for(int i=0;i<ans.size();i++){
            cout<<head->val;
            head->val=ans[i];
            head=head->next;
        }
        head=temp;
        return head;
    }
};