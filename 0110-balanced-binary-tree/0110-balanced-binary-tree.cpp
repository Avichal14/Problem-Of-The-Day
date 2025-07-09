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
   int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        int ans=max(left,right)+1;
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        //1 case
        int lefth=height(root->left);
        int righth=height(root->right);
        int diff=abs(lefth-righth);
        
        bool ans1=(diff<=1);
        
        //Recursion
        
        bool lefta=isBalanced(root->left);
        bool righta=isBalanced(root->right);
        
        if(ans1 && lefta && righta){
            return true;
        }
        else {
            return false;
        }
    }
};