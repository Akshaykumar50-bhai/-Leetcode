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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         
        ListNode* newList = new ListNode();
        ListNode* temp = newList;
         int first = 0;
         int second =0;
        while(l1 != NULL || l2 != NULL){
        if(l1){
        first = first*10 + l1->val;
        l1 = l1->next;
        }
        if(l2){
        second = second*10 + l2->val;
        l2 = l2->next;
        }
        }
        int result = first+second;
        int res =0;
        while(result > 0){
            int digit = result%10;
            res = res*10 + digit;
            result = result/10;
        }
        while(res > 0){
            int digit = res%10;
            temp->next = new ListNode(digit,temp->next);
            res = res/10;
        }
        if(newList->next == NULL) return newList;
        newList = newList->next;
        return newList;
    }
};