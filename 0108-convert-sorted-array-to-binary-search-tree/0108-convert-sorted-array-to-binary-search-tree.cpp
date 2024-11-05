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
    TreeNode* divide_conquer(vector<int>& nums, int start, int end) {
        if(end < start)
            return NULL;

        int mid = start + (end-start)/2;
        TreeNode* head = new TreeNode(nums[mid]);
        head->left = divide_conquer(nums, start, mid-1);
        head->right = divide_conquer(nums, mid+1, end);

        return head;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return divide_conquer(nums, 0, nums.size()-1);
    }
};