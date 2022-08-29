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
    
    vector<int> nums;
    
    TreeNode* helper(int left,int right){
        if(left>right)
            return NULL;
        int p=(left+right)/2;
        TreeNode* root=new TreeNode(nums[p]);
        root->left=helper(left,p-1);
        root->right=helper(p+1,right);
        
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       
        this->nums=nums;
        return helper(0,nums.size()-1);
    }
};