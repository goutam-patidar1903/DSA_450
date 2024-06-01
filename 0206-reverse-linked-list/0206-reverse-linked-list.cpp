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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        vector<ListNode *> ptrs;
        ListNode *tmp=head;
        while(tmp != NULL)
        {
            ptrs.push_back(tmp);
            tmp=tmp->next;
        }
        int left=0;
        int right=ptrs.size()-1;
        int k;
        while(left<right)
        {
            k=ptrs[left]->val;
            ptrs[left]->val=ptrs[right]->val;
            ptrs[right]->val=k;
            left++;
            right--;
        }
        return head;
    }
};