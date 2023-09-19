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
// tc is O(n) as I find the end of the LL in the first while loop. the second loop is logn tc but does not contribute to the tc
// sc is constant
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
            ListNode* iter = head;
            int length = 1;
            while(iter->next != nullptr){
                iter = iter->next;
                length++;
            }
            k = k % length;
            if(k == 0) return head;
            ListNode* cur = head;
            for(int i = 0; i < length - k - 1; i++){
                cur = cur->next;
            }
            ListNode* newHead = cur->next;
            cur->next = nullptr;
            iter-> next = head;
            head = newHead;
        return head;
    }
};
