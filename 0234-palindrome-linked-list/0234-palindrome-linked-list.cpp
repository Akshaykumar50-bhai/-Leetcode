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
       ListNode* slow= head;
       ListNode* fast= head;

       while(slow != nullptr && fast->next !=nullptr ){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == nullptr) break;
       }
       ListNode* curr= slow;
       ListNode* prev = nullptr;
       ListNode* next = nullptr;
       while(curr != nullptr){
         next = curr->next;
         curr->next = prev;
         prev = curr;
         curr = next;
       }

       while(head != 0 && prev != 0){
        if(head->val != prev->val) return false;
        head = head->next;
        prev = prev->next;
       }

        return true;
    }
};