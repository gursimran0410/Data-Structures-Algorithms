#pragma GCC  optimize("ofast")
#pragma GCC target("avx,avx2,fma")
static auto _ = []()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == nullptr){
            return 0;
        }
        
       int val = 0;
       val = (root->val >= low && root->val <= high)?root->val:0;
       if(root->val < low )
       {
           val = val + rangeSumBST(root->right,low,high);
       }
        else if(root->val > high){
            val = val + rangeSumBST(root->left,low,high);
        }
        else{
       val =  val + rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high);
        }
        
        root->left = root->right = nullptr;
        return val;
        
    }
};
