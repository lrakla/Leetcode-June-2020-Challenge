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
int sum;
void dfs(TreeNode* root, int currentSum){
    currentSum = 10*currentSum + root->val;
    if(!root->left && !root->right)
        sum+=currentSum;
    if(root->left){
        dfs(root->left,currentSum);
    }
    if(root->right){
        dfs(root->right,currentSum);
    }
  
}
public:
    int sumNumbers(TreeNode* root) {
       if(!root) return 0; 
       sum = 0;
       dfs(root,sum);
       return sum; 
        
    }
};