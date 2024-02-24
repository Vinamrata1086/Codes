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
    
//     ListNode* middle(ListNode* head){
//         if(head==NULL || head->next==NULL)
//             return head;
//         if(head->next->next==NULL)
//             return head->next;
        
//         ListNode* slow=head;
//         ListNode* fast=head;
        
//         while(fast && fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
        
//         return slow;
//     }
    
    
    
    ListNode* deleteMiddle(ListNode* head) {
//         ListNode* temp=middle(head);
//         ListNode* curr=head;
//         ListNode* prev=NULL;
        
//         if(head->val==temp->val){
//             head=curr->next;
//             curr->next=NULL;
//             delete curr;
            
//         }
//         while(curr && curr->val!=temp->val){
//             prev=curr;
//             curr=curr->next;
//         }
//         prev->next=curr->next;
//         curr->next=NULL;
//         delete curr;
        
//         return head;
        
          if(head==NULL || head->next==NULL)
            return NULL;
//         if(head->next->next==NULL)
//             return head->next;
        
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        slow->next=NULL;
        return head;
    }
};