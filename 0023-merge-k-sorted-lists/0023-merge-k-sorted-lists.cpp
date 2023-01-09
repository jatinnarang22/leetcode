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
class cmp{
    public:
    bool operator()(ListNode* a, ListNode* b){
        return a->val>b->val;
    } 
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& list) {
        
        priority_queue<ListNode*,vector<ListNode*>,cmp>q;
        ListNode* root=new ListNode(-1);
        ListNode* temp=root;
        for(int i=0;i<list.size();i++){
            if(list[i]!=NULL){
                q.push(list[i]);
            }
        } 
        
        while(!q.empty()){
            ListNode* t= q.top();
            q.pop();
              temp->next=t;
            temp=t;
            if(t->next!=NULL)q.push(t->next);
          
        }
        return root->next;
    }
};