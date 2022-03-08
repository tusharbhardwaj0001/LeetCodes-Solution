//Link : https://leetcode.com/problems/linked-list-cycle/
// Floyd's loop detection algorithm
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
        ListNode* slow = head;
        ListNode* fast = head;
        if(head == NULL)
            return false;
        if(fast->next == NULL || fast->next->next == NULL)
            return false;
        while(fast->next != NULL && fast != NULL && fast->next->next != NULL )
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                return true;
        }
        return false;
    }
};
