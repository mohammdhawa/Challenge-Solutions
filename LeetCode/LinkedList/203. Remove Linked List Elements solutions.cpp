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
	int count(ListNode*head, int key) {
		ListNode* p = head;
		int count = 0;
		while (p) {
			if (p->val == key)
				count++;
			p = p->next;
		}
		return count;
	}
	ListNode* removeElements(ListNode* head, int val) {
		int n = count(head, val);
		while (n) {
			if (head == nullptr)
				return head;

			ListNode* p = head;

			if (p->val == val) {
				head = p->next;
				delete p;
				p = nullptr;
			}
			else {
				ListNode* q = p->next;
				while (q && q->val != val) {
					p = q;
					q = q->next;
				}
				p->next = q->next;
				delete q;
				q = p = nullptr;
			}
			n--;
		}
		return head;
	}
};
