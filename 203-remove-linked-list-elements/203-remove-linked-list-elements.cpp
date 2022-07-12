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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) 
        {
            return head;
        }
        while(head -> val == val){
            head = head->next;
            if(head == NULL)
            {
                return head;
            }
        }
        ListNode* first = head;
        ListNode* second = head->next;
        while(second){
            if(second->val == val){
                first -> next = second -> next;
                second = second -> next;
                continue;
            }
            second = second -> next;
            first = first -> next;
        }
        return head;
    }
};