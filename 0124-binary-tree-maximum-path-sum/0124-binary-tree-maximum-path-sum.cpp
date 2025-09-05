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
    int maxSum(TreeNode* root,int &maxi){
        if(root == NULL) return 0;
        int leftPath =max(maxSum(root->left,maxi),0);
        int rightPath = max(maxSum(root->right,maxi),0);
        maxi = max({maxi,leftPath+rightPath+root->val,root->val,leftPath+root->val,rightPath+root->val});
        return root->val + max(leftPath,rightPath);
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxSum(root , maxi);
        return maxi;
    }
};