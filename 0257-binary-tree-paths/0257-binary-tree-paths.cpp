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
    void generateAllPath(TreeNode* root, vector<string>& ans, string tmp){
        if(root==NULL) return;
        
        tmp += to_string(root->val);
        
        if(root->left==NULL && root->right==NULL)   ans.push_back(tmp);
    
        generateAllPath(root->left, ans, tmp+"->");
        generateAllPath(root->right, ans, tmp+"->");
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        
        generateAllPath(root, ans, "");
        
        return ans;
    }
};