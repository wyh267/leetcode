/*

http://oj.leetcode.com/problems/binary-tree-maximum-path-sum/


*/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode *root) {  
        int res = INT_MIN;  
        maxPathSumRe(root, res);  
        return res;  
    }  
  
    int maxPathSumRe(TreeNode *node, int &res)  
    {  
        if (!node) return 0;  
        int l = maxPathSumRe(node->left, res);  
        int r = maxPathSumRe(node->right, res);  
        int sum = max(node->val, max(l, r) + node->val);  
        res = max(res, sum);  
        res = max(res, l + r + node->val);  
        return sum;  
    } 
};