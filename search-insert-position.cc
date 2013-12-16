/*

http://oj.leetcode.com/problems/search-insert-position/

*/

class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        //int pos=0;
        for(int i=0;i<n;i++){
            if(A[i]>target){
                if(i>0){
                    return i;
                }else{
                    return 0;
                }
            }else if(A[i]==target)
                    return i;
        }
        
        return n;
        
    }
};