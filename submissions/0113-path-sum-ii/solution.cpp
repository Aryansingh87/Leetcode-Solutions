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
 vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<vector<int>> ans;
    vector<int> path;
    dfs(root , targetSum , 0 , path , ans);
    return ans;
    }
    
void dfs(TreeNode* root , int targetSum , int currSum , vector<int>& path , vector<vector<int>>& ans)
{        
    if(root == NULL){
        return;
    }

    currSum = currSum + root->val;
    path.push_back(root->val);
    if(root->left == NULL && root->right==NULL && currSum == targetSum){
        ans.push_back(path);
    }
    dfs(root->left , targetSum , currSum , path , ans);
    dfs(root->right , targetSum , currSum , path , ans);
    path.pop_back();

}
   
};
