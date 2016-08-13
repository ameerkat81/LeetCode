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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;
        ListNode* first = head;
        ListNode* second = NULL;
        
        while(first != NULL){
            ListNode* temp = first->next;
            first->next = second;
            second = first;
            first = temp;
        }
        return second;
    }
};
