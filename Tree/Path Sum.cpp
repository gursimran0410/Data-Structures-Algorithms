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
    bool hasPathSum(TreeNode* root, int targetSum, int pathSum=0) {        
        if(root == NULL) return false;
        pathSum += root->val;
        if(pathSum == targetSum && !root->left && !root->right) return true;
        return hasPathSum(root->left, targetSum, pathSum) || hasPathSum(root->right, targetSum, pathSum);
    }
};
