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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        stack<int> st;
        ListNode* ptr1=head;
        ListNode* ptr2=head;
        while(ptr2!=NULL)
        {
                for(int i=1;i<=k;i++) 
                {
                    if(ptr2==NULL) return head;
                    st.push(ptr2->val);
                    ptr2=ptr2->next;                    
                }
                while(ptr1!=ptr2)
                {
                    ptr1->val=st.top();
                    st.pop();
                    ptr1=ptr1->next;
                }
        }
        return head;
    }
};