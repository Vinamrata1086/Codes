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
        
//         if(head==NULL)
//             return false;   
//         if(head->next==NULL)
//             return false;
        
//         unordered_map<ListNode*, bool> m;
//         m[head]=true;
//         ListNode* temp=head->next;
        
//         while(temp!=NULL){
//             if(m[temp]==true)
//                 return true;
//             m[temp]=true;
//             temp=temp->next;
//         }
//         return false;
        
/* using Floyd algo:

*/
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            return true;
        }
        
        
        return false;
        
        
        
        
        
        
        
     }
};