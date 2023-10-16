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
    TreeNode* bst(vector<int> a, int left, int right){
        if(left > right){
            return NULL;
        }
        int midpoint = left + (right-left)/2;
        TreeNode* node = new TreeNode(a[midpoint]);
        node->left = bst(a, left, midpoint-1);
        node->right = bst(a, midpoint+1, right);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0){
            return NULL;
        }
        else{
            return bst(nums, 0, nums.size()-1);
        }
    }
};