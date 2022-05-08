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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL) return {};
        vector<vector<int>> result;
        queue<TreeNode*> queue;
        queue.push(root);
        while(!queue.empty()){
            int qSize = queue.size();
            vector<int> level;
            for(int i=0; i<qSize; i++){
                TreeNode *front = queue.front();
                queue.pop();
                if(front->left != NULL) queue.push(front->left);
                if(front->right != NULL) queue.push(front->right);
                level.push_back(front->val);
            }
            result.push_back(level);
        }
        return result;
    }
};
