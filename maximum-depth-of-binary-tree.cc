/*

http://oj.leetcode.com/problems/maximum-depth-of-binary-tree/

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
    int maxDepth(TreeNode *root) {
        int deep=0;
        max_deepth=0;
        if(root)
            preorder(root,deep);
        else
            return 0;
        
        
        return max_deepth;
    }
    
private:	
	
	void preorder(TreeNode *t,int &deepth){
	    deepth++;
	    if(t){  
	        //cout << t->val << endl;
	        preorder(t->left,deepth);
	        deepth--;
	        preorder(t->right,deepth); 
	        deepth--;
	    }else{
	        if (max_deepth<deepth)
	            max_deepth=deepth-1;
	        //deepth--;
	    }  
	}
	
	int max_deepth;
	
};