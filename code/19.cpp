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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        /* Two Pass Way*/
        /*
        int count = 0;
        ListNode* tempNode = head;
        while (tempNode != NULL) {
            count += 1;
            tempNode = tempNode->next;
        }
        
        if (count != 0) {
            int stopFlag = count - n;
            if (stopFlag == 0){
                head = head->next;
                return head;
            }
            tempNode = head;
            count = 0;
            while (tempNode != NULL) {
                count += 1;
                if (count == stopFlag) {
                    tempNode->next = tempNode->next->next;
                    return head;
                }
                tempNode = tempNode->next;
            }
        }
        
        return head;
        */
        
        /* One Pass Way*/
        ListNode* aheadFirst = new ListNode(0);
        aheadFirst->next = head;
        ListNode* first = aheadFirst;
        ListNode* second = aheadFirst;
        
        for(int i = 0;i < n+1;i++){
            first = first->next;
        }
        while (first != NULL){
            first = first->next;
            second = second->next;
        }
        second->next = second->next->next;
        return aheadFirst->next;
    }
};
