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
    TreeNode* searchBST(TreeNode* root, int val) {
        deque<TreeNode*> q;
        q.push_back(root);
        while(q.size()!=0){    
            TreeNode* next = q.front();
            if(next->val==val){
                return next;
            }
            q.pop_front();
            if (next->left)
                q.push_back(next->left);
            if (next->right)
                q.push_back(next->right);    
        }
        return NULL;
        
    }
};