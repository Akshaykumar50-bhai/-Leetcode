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
    ListNode* sortList(ListNode* head) {
        vector<int>arr;
        ListNode* temp = head;
        while(temp!= nullptr){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        sort(arr.begin() ,arr.end());
        ListNode* list = new ListNode(-1);
        ListNode* t = list;
        for(int i=0;i<arr.size();i++){
            ListNode* newNode = new ListNode(arr[i]);
            t->next = newNode;
            t = newNode;
        }
        list = list->next;
        return list;
    }
};