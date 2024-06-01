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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode *tmp1=head;
//         int size=0;
//         while(tmp1!=NULL)
//         {
//             size++;
//             tmp1=tmp1->next;
//         }
        
//         if(size==n)
//         {
//             ListNode *newHead=head->next;
//             delete head;
//             return newHead;
//         }
        
//         int index=size-n+1;

//         ListNode *tmp2=head;
//         for(int i=1;i<index;i++)
//         {
//             tmp1=tmp2;
//             tmp2=tmp2->next;
//         }
        
//         tmp1->next=tmp2->next;
//         delete tmp2;
//         return head;
        
        ListNode *slow=head;
        ListNode *fast=head;
        
        for(int i=0;i<n;i++) fast=fast->next;
        
        if(fast==NULL) return head->next;
        
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        ListNode *tmp=slow->next;
        slow->next=slow->next->next;
        delete(tmp);
        return head;
        
        
    }
};