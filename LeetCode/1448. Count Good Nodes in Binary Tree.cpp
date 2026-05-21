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
    int cnt = 0;
    int goodNodes(TreeNode* root) {
        int x = INT_MIN;
        dfs(root , x);
        return cnt;
    }
    void dfs(TreeNode* root , int x){
        if(root ==  nullptr){
            return; 
        }
        x = max(x , root->val);
        if(root->val >= x)cnt++;

        dfs(root->left , x);
        dfs(root->right , x);
       
    }
};
