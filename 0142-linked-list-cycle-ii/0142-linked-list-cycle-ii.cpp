/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
            if(slow==fast){
                slow=head;
                break;
            }
        }
        
        while(slow!=fast && fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        return fast;
    }
};