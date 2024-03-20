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
    private:
    int height(TreeNode* root){
        if(root==NULL)
        return 0;

        int l=height(root->left);
        int h=height(root->right);

        return 1+max(l,h);
    }
public:
    bool isBalanced(TreeNode* root) {
        
        if(root==NULL)
        return true;

        int l=height(root->left);
        int r=height(root->right);

        int diff=abs(l-r);

        if(diff>1)
        return false;


        return(isBalanced(root->left) && isBalanced(root->right));
        
    }
};