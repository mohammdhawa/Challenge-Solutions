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
    ListNode* oddEvenList(ListNode* head) {
		if (head == nullptr || head->next == nullptr)
			return head;

		ListNode* p = head;
		ListNode* odd = nullptr;
		ListNode* even = nullptr;
		ListNode* last_odd = nullptr;
		bool x = true;

		while (p) {
			if (x) {
				x = false;
				if (!odd) {
					odd = p;
					p = p->next;
					odd->next = nullptr;
				}
				else {
					odd->next = p;
					odd = odd->next;
					p = p->next;
					odd->next = nullptr;
				}
			}
			else {
				x = true;
				if (!even) {
					last_odd = even = p;
					p = p->next;
					last_odd->next = even->next = nullptr;
				}
				else {
					even->next = p;
					even = even->next;
					p = p->next;
					even->next = nullptr;
				}
			}
		}
		odd->next = last_odd;
		return head;

	}
};
