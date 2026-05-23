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
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        dfs(root, targetSum , sum);
        return ((cnt > 0) ? true : false);      
    }
    void dfs(TreeNode* root, int target , int sum){
        if(root == nullptr) return ;
        if(root->left == nullptr && root->right == nullptr){
            if(sum+ root->val == target){
                cnt++;
            }
        }
        dfs(root->left , target , sum + root->val);
        dfs(root->right, target , sum + root->val);
    }
};
