/*

http://oj.leetcode.com/problems/binary-tree-postorder-traversal/

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
    vector<int> postorderTraversal(TreeNode *root) {
        preorder(root);
        return res;
    }
    
private:	
	void preorder(TreeNode *t){

	    if(t){  
	        //cout << t->val << endl;
	        preorder(t->left);
	        preorder(t->right);
            res.push_back(t->val);
	    } 
	}
	
	vector<int> res;
};