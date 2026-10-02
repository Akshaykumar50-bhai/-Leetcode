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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int n1 = 0;
        ListNode* temp = head;
        while(temp != nullptr){
          n1++;
          temp = temp->next;
        }
        
        cout << n1 << " ";
        temp = head;
        if(n1-n == 0){head = head->next; return head;}
        for(int i=1;i<n1-n;i++){
          temp = temp->next;
        }
        
         temp->next = temp->next->next;
        
        
        return head;
    }
};