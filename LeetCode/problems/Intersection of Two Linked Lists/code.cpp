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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* pointer_one = headA;
        ListNode* pointer_two = headB;

        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }

        while (pointer_one != pointer_two) {
            pointer_one = pointer_one->next;
            pointer_two = pointer_two->next;

            if (pointer_one == pointer_two) {
                return pointer_one;
            }

            if (pointer_one == nullptr) {
                pointer_one = headB;
            }

            if (pointer_two == nullptr) {
                pointer_two = headA;
            }
        }

        return pointer_one;
    }
};