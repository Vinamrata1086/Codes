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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        
        if(root==NULL)
            return ans;
        
        queue<TreeNode*> q;
       
        
        q.push(root);
        
        
        while(!q.empty()){
            int level=q.size();
            vector<int> v(level);
            
            for(int i=0;i<level;i++)
            {
                TreeNode *frontNode=q.front();
                q.pop();
                
                v[i]=frontNode->val;
                
                
                
                if(frontNode->left)
                    q.push(frontNode->left);
                
                if(frontNode->right)
                    q.push(frontNode->right);
            }
            
            ans.push_back(v);
        }
        
    reverse(ans.begin(),ans.end());
        
        return ans;
        
          
        
    }
};