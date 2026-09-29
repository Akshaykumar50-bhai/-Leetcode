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
          int carry = 0;
          vector<int> ans;
          while(l1 != nullptr || l2 != nullptr){
            int add=0;
            if(l1 != nullptr)
              add += l1->val;
            if(l2 != nullptr) add += l2->val;
            add+=carry;
            carry = 0;
            if(add > 9){ ans.push_back(add%10);  carry = add/10;}
            else ans.push_back(add); 
            if(l1 != nullptr)
            l1 = l1->next;
            if(l2 != nullptr)
            l2 = l2->next;
          }
          if(carry > 0)
          ans.push_back(carry);
          ListNode* newList = nullptr;
          ListNode* temp = newList;
          for(int i : ans){
            ListNode* newNode = new ListNode(i);
             if(temp == nullptr){
                newList = newNode;
                temp = newList;
             }else{
                temp->next = newNode;
                temp = newNode;
             }
          }
          return newList;
    }
};