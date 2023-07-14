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
        vector<vector<int>> v;
        queue<TreeNode*> s;
        if(root==NULL)
            return v;
        s.push(root);
        while(!s.empty()){
            int n=s.size();
            vector<int> ans;
            for(int i=0;i<n;i++){
                TreeNode* temp = s.front();
                s.pop();
                if(temp->left!=NULL)
                    s.push(temp->left);
                if(temp->right!=NULL)
                    s.push(temp->right);
                ans.push_back(temp->val);
            }
            v.push_back(ans);
        }
        return v;
    }
};