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
    int ans = 0;

    int traversal(TreeNode* root){
        if(root == nullptr){
            return 0;
        }

        int left = traversal(root->left);
        int right = traversal(root->right);

        int maxi = max(root->val, max(left, right));

        if(maxi == root->val) ans++;

        return maxi;
    }

    int countDominantNodes(TreeNode* root) {
        traversal(root);
        return ans;
    }
};