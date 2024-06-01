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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode *tmp=head;
        int size=1;
        while(tmp->next != NULL)
        {
            size++;
            tmp=tmp->next;
        }
        int mid=(size/2)+1;
        tmp=head;
        for(int i=1;i<mid;i++)
        {
            tmp=tmp->next;
        }
        return tmp;
    }
};