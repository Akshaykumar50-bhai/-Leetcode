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
    ListNode* oddEvenList(ListNode* head) {
        ListNode*temp = head;
        vector<int>arr;
        while(temp != nullptr){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        ListNode*h = new ListNode(-1);
        ListNode*tem = h;
        int i = 0;
        while(i < arr.size()){
            ListNode* newNode = new ListNode(arr[i]);
            tem->next = newNode;
            tem = newNode;
            i += 2;
        }
        i = 1;
        while(i< arr.size()){
            ListNode* newNode = new ListNode(arr[i]);
            tem->next = newNode;
            tem = newNode;
            i +=2;
        }
        h = h->next;
        return h;
    }
};