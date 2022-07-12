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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL){
            return NULL;
        }
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *back = NULL;
        while(fast && fast->next){
            fast = fast->next;
            back = slow;
            slow = slow->next;
            if(fast)
            {
                fast = fast->next;
            }
            else
            {
                break;
            }
        }
        back->next = slow->next;
        return head;
    }
};