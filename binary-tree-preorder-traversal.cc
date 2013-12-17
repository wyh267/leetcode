/*

http://oj.leetcode.com/problems/binary-tree-preorder-traversal/

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
    vector<int> preorderTraversal(TreeNode *root) {
    Traversal(root);
        return res;
    }
    
private:	
	void Traversal(TreeNode *t){

	    if(t){  
	        //cout << t->val << endl;
	        res.push_back(t->val);
	        Traversal(t->left);
	        Traversal(t->right);
            
	    } 
	}
	
	vector<int> res;
};