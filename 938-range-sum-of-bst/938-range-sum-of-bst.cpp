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
    int sum_of_range = 0;
    void sum(TreeNode* root , int L , int R){
        //Base case
        if(!root) return;
		
        //If in range add 
        if(root->val >= L && root->val <= R) 
            sum_of_range += root->val;
        
        
		if(root->val > L) 
            sum(root->left,L,R);
        
        if(root->val < R) 
            sum(root->right,L,R);    
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        sum_of_range = 0;
        sum(root , low , high);
        return sum_of_range;
    }
};