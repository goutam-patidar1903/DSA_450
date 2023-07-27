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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t;
        ListNode *start=NULL,*end=NULL;
        int sum=0;
        int carry=0;
        while(l1!=NULL && l2!=NULL)
        {   t=new ListNode();
            sum=l1->val+l2->val+carry;
            carry=sum/10;
            t->val=sum%10;
            l1=l1->next;
            l2=l2->next;
            if(start==NULL && end==NULL)
            {
                start=t;
                end=t;
            }else{
                end->next=t;
                end=t;
            }   
        }
        
         while(l1!=NULL)
        {   t=new ListNode();
            sum=l1->val+carry;
            carry=sum/10;
            t->val=sum%10;
            l1=l1->next;
            if(start==NULL && end==NULL)
            {
                start=t;
                end=t;
            }else{
                end->next=t;
                end=t;
            }   
        }
         while( l2!=NULL)
        {   t=new ListNode();
            sum=l2->val+carry;
            carry=sum/10;
            t->val=sum%10;
            l2=l2->next;
            if(start==NULL && end==NULL)
            {
                start=t;
                end=t;
            }else{
                end->next=t;
                end=t;
            }   
        }
        if(carry!=0)
        {
            t=new ListNode(carry);
            end->next=t;
            end=t;
        }
        return start;
    }
};