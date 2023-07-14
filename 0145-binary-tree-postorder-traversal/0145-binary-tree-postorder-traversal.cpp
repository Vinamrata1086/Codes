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
    vector<int> v;
    void postorder(TreeNode* &root){
        if(root==NULL){
            return ;
        }
        postorder(root->left);
        postorder(root->right);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return v;
//------------------using stack------------------------------
        //         vector<int> v;
//         stack<TreeNode*> s1;
//         stack<TreeNode*> s2;
//         if(root==NULL)
//             return v;
//         s1.push(root);
//        while(!s1.empty()){
//            TreeNode* temp = s1.top();
//            s1.pop();
//            s2.push(temp);
//            if(temp->left!=NULL){
//                s1.push(temp->left);
//            }
//            if(temp->right!=NULL){
//                s1.push(temp->right);
//            }
//        }
        
//         while(!s2.empty()){
//             TreeNode* temp = s2.top();
//                 s2.pop();
//             v.push_back(temp->val);
//         }
//         return v;
    }
};