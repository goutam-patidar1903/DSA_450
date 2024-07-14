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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        if(!root) return new TreeNode(val);
        
        TreeNode* currNode = root;
        
        while(currNode)
        {
            if(currNode->val < val){
                if(!currNode->right) {
                    TreeNode* temp = new TreeNode(val);
                    currNode->right = temp;
                    return root;
                }
                currNode = currNode->right;
            }
            else{
                if(!currNode->left) {
                    TreeNode* temp = new TreeNode(val);
                    currNode->left = temp;
                    return root;
                }
                currNode = currNode->left;
            }
        }
        return root;
    }
};