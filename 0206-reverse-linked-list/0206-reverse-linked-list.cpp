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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* h = nullptr;
        
        while(temp != nullptr){
            ListNode* newNode = new ListNode(temp->val);
            if(h == nullptr) h = newNode;
            else{
                newNode->next = h;
                h = newNode;
            }
            temp = temp->next;
        }
        return h;
    }
};