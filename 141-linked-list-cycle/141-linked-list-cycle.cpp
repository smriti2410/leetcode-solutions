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
    bool hasCycle(ListNode *head) {
       bool ans; 
        if(head==NULL||head->next==NULL)// if 0 or 1 element in linked list 
            return false;
        
        ListNode* slow=head;//moves 1 step
        ListNode* fast=head;//moves 2 steps
        
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
                return true;  
                
        }
        
        return false;
    
    }
};