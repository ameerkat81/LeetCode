/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root != NULL) {
            int leftMax = maxDepth(root->left);
            int rightMax = maxDepth(root->right);
            return 1 + ((leftMax > rightMax)?leftMax : rightMax);
        }
        return 0;
    }
};
