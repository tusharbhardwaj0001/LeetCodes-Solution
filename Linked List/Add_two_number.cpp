//link : https://leetcode.com/problems/add-two-numbers/
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
        ListNode *sum=NULL,*newnode,*temp;
        ListNode *t1 = l1;
        ListNode *t2 = l2;
        int carry = 0;
        while(t1 != NULL && t2 != NULL)
        {
            int Sum = t1->val + t2->val+carry;
            carry = (Sum)/10;
            int x =(Sum)%10;
            newnode = new ListNode(x);
            t1 = t1->next;
            t2 = t2->next;
            if(sum == NULL)
            {
                sum = newnode ;
                temp = newnode;
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
            }
        }
        while(t1 != NULL)
        {
           int Sum = t1->val + carry ;
            carry = Sum/10;
            int x = (Sum)%10;
            newnode = new ListNode(x);
    
                temp->next = newnode;
                temp = newnode;
            
            t1=t1->next;
        }
        while(t2 != NULL)
        {
           int Sum = t2->val+carry;
            carry = Sum/10;
            int x = (Sum)%10;
            newnode = new ListNode(x);

                temp->next = newnode;
                temp = newnode;
            
            t2 = t2->next;
        }
        if(carry==1)
        {
            newnode = new ListNode(1);
            temp->next=newnode;
            temp = newnode;
        }
        return sum;
  
    }
};
