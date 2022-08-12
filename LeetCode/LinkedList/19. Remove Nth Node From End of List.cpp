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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        
        ListNode*t = head;
        while(t){
            count++;
            t = t->next;
        }
        n = count-n+1;
        
        ListNode*p = head;
        if(n==1){
            head = head->next;
            delete p;
            p = nullptr;
        }
        else {
            ListNode*q = p->next;
            for(int i = 1; i<n-1; i++){
                p = q; 
                q = q->next;
            }
            if(q){
                p->next = q->next;
                delete q;
                q = nullptr;
                p = nullptr;
            }
        }
        return head;
    }
};
