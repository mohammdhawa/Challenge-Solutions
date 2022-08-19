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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr && list2 == nullptr)
			return list1;
		else if (list1 == nullptr)
			return list2;
		else if (list2 == nullptr)
			return list1;

		ListNode* list3 = nullptr;
		ListNode*last = nullptr;
        
        if(list1->val<list2->val){
            list3 = last = list1;
            list1 = list1->next;
            last->next = nullptr;
        }
        else {
            list3 = last = list2;
            list2 = list2->next;
            last->next = nullptr;
        }
        
        while(list1&&list2){
            if(list1->val<list2->val){
                last->next = list1;
                last = list1;
                list1 = list1->next;
                last->next = nullptr;
            }
            else {
                last->next = list2;
                last = list2;
                list2 = list2->next;
                last->next = nullptr;
            }
        }
        if(list1==nullptr)
            last->next = list2;
        else
            last->next = list1;
        
		return list3;
    }
};
