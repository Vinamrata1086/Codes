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
        if(head==NULL)
            return head;
        
        map<ListNode*, bool> m;
        m[head]=true;
        ListNode* temp=head->next;
        
        while(temp!=NULL){
            if(m[temp]==true)
                return temp;
            m[temp]=true;
            temp=temp->next;
        }
        return NULL;
        
    }
};