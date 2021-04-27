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
    int ans =0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        stack<TreeNode*> stack;
        stack.push(root);
        while(!stack.empty()){
            TreeNode* node = stack.top();
            stack.pop();
            int value = node->val;
            if(value >=low && value <= high) ans+=value;
            if(node->right != nullptr && value <= high) stack.push(node->right);
            if(node->left != nullptr && value >= low) stack.push(node->left);
        }
        return ans;
    }
};