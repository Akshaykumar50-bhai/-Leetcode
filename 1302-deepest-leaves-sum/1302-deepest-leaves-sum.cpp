/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
      int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return 1 + max(leftHeight,rightHeight);
      }
    //  void leafSum(TreeNode* root,int&sum ,int heig){
    //      if(root->left == NULL && root->right == NULL && ) 
    //      { sum += root->val;
    //      return;
    //      }
    //     if(root->left != NULL)   leafSum(root->left,sum);
    //      if(root->right != NULL)   leafSum(root->right,sum);
    
    // }

    int leafSum(TreeNode* root,int high){
        queue<TreeNode*>q;
        q.push(root);
        int currHeight = 1;
        int sum = 0;
        while(!q.empty()){
            int len = q.size();
            for(int i=0;i<len;i++){
                TreeNode*node = q.front();
                q.pop();
                if(currHeight == high) sum += node->val;
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL ) q.push(node->right);

            }
            currHeight++;
        }
        return sum;
    }
    int deepestLeavesSum(TreeNode* root) {
          int heig = height(root);
        int sum = leafSum(root,heig);

        return  sum;
    }
};