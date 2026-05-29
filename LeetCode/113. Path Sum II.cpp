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
    vector<vector<int>>ans;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> curr;
        dfs(root,targetSum,0,curr );
        return ans;
    }
    void dfs(TreeNode* root, int targetsum, int sum, vector<int>& curr){
        if(root == nullptr) return;
        curr.push_back(root->val);
        sum += root->val;
        if(root->left == nullptr && root->right == nullptr){
            if(targetsum == sum){
                ans.push_back(curr);
            }
        }
            dfs(root->left, targetsum , sum , curr);
            dfs(root->right, targetsum , sum, curr);
        
        curr.pop_back();
    }
};
