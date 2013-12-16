/*

http://oj.leetcode.com/problems/same-tree/

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
    bool isSameTree(TreeNode *p, TreeNode *q) {
        res=true;
        preorder(p,q);
        return res;
    }
    
    
private:	
	
	void preorder(TreeNode *t,TreeNode *m){

	    if(t && m){  
	        if(t->val == m->val){
	            preorder(t->left,m->left);
	            preorder(t->right,m->right);
	        }else{
	            res=false;
	        }
	    }
	    
	    if((t && (!m)) || ((!t) && m))
	        res=false;
	    
	}
	
	bool res;
};