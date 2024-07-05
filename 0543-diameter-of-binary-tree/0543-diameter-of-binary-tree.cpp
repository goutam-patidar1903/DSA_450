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
    int calculateMaxDia(TreeNode* root ,int& dia)
    {
        if(!root) return 0;        
        int lh=calculateMaxDia(root->left,dia);
        int rh=calculateMaxDia(root->right,dia);
        
        dia=max(dia , lh+rh);
        
        return 1+ max(lh,rh);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int dia=0;
        
        int h=calculateMaxDia(root,dia);
        
        return dia;
        
    }
};