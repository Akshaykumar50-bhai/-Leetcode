/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int>mp;
        ListNode* temp = headA;
        while(temp != nullptr){
            mp[temp] = 1;
            temp = temp->next;
        }
        ListNode* temp2 = headB;
        while(temp2 != nullptr){
            if(mp[temp2] == 1) return temp2;
            temp2 = temp2->next;
        }
      return nullptr;
    }
};