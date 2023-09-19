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
// tc is O(n) as I find where to reverse, then reverse in one pass. 
// sc is constant 
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* leftPrev = dummy;
        ListNode* cur = head;
        for(int i = 0; i < left - 1; i++){
            leftPrev = cur;
            cur = cur->next;
        }
        ListNode* prev = nullptr;
        ListNode* temp = nullptr;
        for(int i = 0; i < right - left + 1; i++){
            temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        leftPrev-> next -> next = cur;
        leftPrev -> next = prev;
        return dummy->next;
    }
};
