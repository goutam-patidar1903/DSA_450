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
// class Solution {
//     void reverseTask(TreeNode* node , int level) {
//         if(node == NULL) return;
//         if(level % 2 != 0) {
//             int data = node->left;
//             node->left = node ->right;
//             node->right = node->left;
//         }
//         reverseTask(node->left , level++);
//         reverseTask(node->right , level++);
//     }
// public:
//     TreeNode* reverseOddLevels(TreeNode* root) {
//         reverseTask(root,0);
//         return root;
//     }
// };

class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        traverseDFS(root->left, root->right, 0);
        return root;
    }

private:
    void traverseDFS(TreeNode* leftChild, TreeNode* rightChild, int level) {
        if (leftChild == nullptr || rightChild == nullptr) {
            return;
        }
        // If the current level is odd, swap the values of the children.
        if (level % 2 == 0) {
            int temp = leftChild->val;
            leftChild->val = rightChild->val;
            rightChild->val = temp;
        }

        traverseDFS(leftChild->left, rightChild->right, level + 1);
        traverseDFS(leftChild->right, rightChild->left, level + 1);
    }
};