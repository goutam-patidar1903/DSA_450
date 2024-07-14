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
    // void inorder(TreeNode* root , vector<int>& vec)
    // {
    //     if(root==NULL) return;
    //     inorder(root->left , vec);
    //     vec.push_back(root->val);
    //     inorder(root->right , vec);
    // }
    
     void inorder(TreeNode* node, int& counter, int k, int& kSmallest) {
        if (!node || counter >= k) return;

        inorder(node->left, counter, k, kSmallest);

        counter++;

        if (counter == k) {
            kSmallest = node->val;
            return;
        }

        inorder(node->right, counter, k, kSmallest);
    }

    
public:
    int kthSmallest(TreeNode* root, int k) {
        // vector<int> vec;
        // inorder(root , vec);
        // if(vec.size() < k) return -1;
        // return vec[k-1];
        
        int kSmallest = INT_MIN;
        int counter = 0; 

        inorder(root, counter, k, kSmallest);
        
        return kSmallest;
    }
};