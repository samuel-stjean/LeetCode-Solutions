/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    // tc is O(n) as I interate over every node in the linkedlist
    // space complexity is o(n) as i have to make a copy of the ll of size n
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> mp;
        mp[nullptr] = nullptr;
        Node* cur = head;
        while(cur){
            Node* copy = new Node(cur -> val);
            mp[cur] = copy;
            cur = cur -> next;
        }
        cur = head;
        while(cur){
            Node* copy = mp[cur];
            copy -> next = mp[cur -> next];
            copy -> random = mp[cur -> random];
            cur = cur -> next;
        }
        return mp[head];
    }
};
