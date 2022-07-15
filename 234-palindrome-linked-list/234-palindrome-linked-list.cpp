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
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL)return true;
        int n = 0;
        ListNode* p = head;
        stack<int> s;
        while(p){
            n++;
            p = p->next;
        }
        p = head;
        for(int i = 1; i <= n / 2; i++){
            s.push(p->val);
            p = p->next;
        }
        if(n & 1)p = p->next;
        while(p){
            if(p->val == s.top()){
                s.pop();
                p = p->next;
            }
            else
            {
                return false;
            }
        }
        if(s.empty())return true;
        return false;
    }
};