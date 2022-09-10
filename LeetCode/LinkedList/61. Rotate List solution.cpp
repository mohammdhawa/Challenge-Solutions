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
    ListNode* rotateRight(ListNode* head, int k) {
         if (head == nullptr || head->next == nullptr)
             return head;

         int c = 0;
         ListNode* p{ head };
         while (p) {
             c++;
             p = p->next;
         }
         int n = k % c;
         while (n) {
             ListNode* last = head;
             p = nullptr;
             while (last->next) {
                 p = last;
                 last = last->next;
             }

             last->next = head;
             head = last;
             p->next = nullptr;
             n--;
         }
         return head;
     }
};
