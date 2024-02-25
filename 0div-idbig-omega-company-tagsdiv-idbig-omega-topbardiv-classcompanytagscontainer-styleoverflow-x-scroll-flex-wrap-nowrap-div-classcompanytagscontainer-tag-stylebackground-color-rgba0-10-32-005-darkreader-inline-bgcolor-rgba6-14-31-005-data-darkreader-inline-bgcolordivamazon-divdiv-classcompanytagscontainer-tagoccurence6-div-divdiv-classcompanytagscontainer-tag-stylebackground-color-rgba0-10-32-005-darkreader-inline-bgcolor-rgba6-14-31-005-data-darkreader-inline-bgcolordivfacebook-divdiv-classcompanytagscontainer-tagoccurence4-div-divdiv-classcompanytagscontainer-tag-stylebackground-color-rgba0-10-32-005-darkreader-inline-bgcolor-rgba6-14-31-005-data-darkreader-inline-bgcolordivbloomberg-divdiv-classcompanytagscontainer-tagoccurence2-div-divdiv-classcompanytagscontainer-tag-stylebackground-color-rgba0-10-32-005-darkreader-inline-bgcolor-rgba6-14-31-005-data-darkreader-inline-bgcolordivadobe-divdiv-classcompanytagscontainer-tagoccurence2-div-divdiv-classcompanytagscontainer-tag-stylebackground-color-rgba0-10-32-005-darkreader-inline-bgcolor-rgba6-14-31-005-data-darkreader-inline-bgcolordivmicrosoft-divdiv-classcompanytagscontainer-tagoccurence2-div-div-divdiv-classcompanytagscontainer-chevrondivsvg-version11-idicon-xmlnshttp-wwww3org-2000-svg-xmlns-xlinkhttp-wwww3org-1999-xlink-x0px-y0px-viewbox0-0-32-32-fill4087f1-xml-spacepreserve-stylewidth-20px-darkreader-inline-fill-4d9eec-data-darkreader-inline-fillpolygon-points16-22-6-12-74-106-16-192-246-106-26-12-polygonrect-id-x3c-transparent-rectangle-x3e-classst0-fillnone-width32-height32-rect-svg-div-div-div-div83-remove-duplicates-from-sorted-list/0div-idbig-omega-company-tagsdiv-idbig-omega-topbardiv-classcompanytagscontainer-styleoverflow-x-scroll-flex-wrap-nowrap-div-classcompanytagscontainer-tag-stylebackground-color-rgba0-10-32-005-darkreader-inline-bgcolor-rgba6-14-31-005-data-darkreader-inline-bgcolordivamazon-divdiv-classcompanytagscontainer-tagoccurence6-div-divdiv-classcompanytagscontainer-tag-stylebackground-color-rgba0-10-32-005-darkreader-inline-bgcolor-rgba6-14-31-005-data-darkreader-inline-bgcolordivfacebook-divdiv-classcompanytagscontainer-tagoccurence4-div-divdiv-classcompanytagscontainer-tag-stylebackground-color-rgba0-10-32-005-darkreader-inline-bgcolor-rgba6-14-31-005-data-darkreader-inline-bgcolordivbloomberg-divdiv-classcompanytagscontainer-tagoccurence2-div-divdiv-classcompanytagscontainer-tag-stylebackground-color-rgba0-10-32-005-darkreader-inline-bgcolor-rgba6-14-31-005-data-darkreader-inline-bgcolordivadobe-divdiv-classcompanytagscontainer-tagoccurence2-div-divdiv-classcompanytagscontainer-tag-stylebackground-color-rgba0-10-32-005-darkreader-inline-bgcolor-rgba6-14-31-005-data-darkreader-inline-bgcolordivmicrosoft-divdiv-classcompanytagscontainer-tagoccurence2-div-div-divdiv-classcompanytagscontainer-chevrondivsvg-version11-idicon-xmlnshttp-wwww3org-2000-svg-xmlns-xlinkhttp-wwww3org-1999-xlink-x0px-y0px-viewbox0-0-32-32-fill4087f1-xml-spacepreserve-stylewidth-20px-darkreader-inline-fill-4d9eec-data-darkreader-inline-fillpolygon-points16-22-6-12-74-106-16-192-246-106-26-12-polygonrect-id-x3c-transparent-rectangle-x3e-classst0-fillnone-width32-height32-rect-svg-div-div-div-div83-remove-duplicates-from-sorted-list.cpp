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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL)
            return head;
        
        ListNode* curr=head;
        ListNode* temp=NULL;
        
        while(curr && curr->next){
            if(curr->val!=curr->next->val)
                curr=curr->next;
            
            else{
                temp=curr->next;
                curr->next=curr->next->next;
                temp->next=NULL;
                delete temp;
            }
        }
        return head;
        
    }
};