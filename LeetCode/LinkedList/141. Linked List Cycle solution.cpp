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
        ListNode* temp = new ListNode;
        while (head != NULL) {
        // This condition is for the case when there is no loop
            if (head->next == NULL)
                return false;
        // Check if next is already pointing to temp
            if (head->next == temp)
                return true;
        // Store the pointer to the next node
        // in order to get to it in the next step
            ListNode* next = head->next;
            // Make next point to temp
            head->next = temp;
            // Get to the next node in the list
            head = next;
    }
    return false;
    }
};
