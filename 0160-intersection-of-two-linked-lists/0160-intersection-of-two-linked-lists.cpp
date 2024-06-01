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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL;
        
        while(headA!=NULL)
        {
            ListNode *tmp=headB;
            while(tmp!=NULL)
            {
                if(headA==tmp) return tmp;
                
                tmp=tmp->next;
            }
            headA=headA->next;
        }
        return NULL;
    }
};