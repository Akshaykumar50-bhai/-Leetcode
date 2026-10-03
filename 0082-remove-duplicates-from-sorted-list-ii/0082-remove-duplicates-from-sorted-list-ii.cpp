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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        if(head == nullptr ) return nullptr;
        else if(head->next == nullptr) return head;
        int value = head->val;
        while( temp->next != nullptr && value== temp->next->val){
         
        while( temp->next != nullptr && value == temp->next->val){
         temp = temp->next;
        }
        if(temp ->next == nullptr)  return nullptr;
        else head = temp->next;
        
        value = head->val;
        temp = head;
        }

        while( temp != nullptr&& temp->next != nullptr && temp->next->next != nullptr){
            int value = temp->next->val;
            ListNode* d = temp->next->next;
            if(value == d->val){
            while(d != nullptr && value == d->val){
              d = d->next;
            }
            temp->next = d;
            }else temp = temp->next;
        } 
        return head;
    }
};