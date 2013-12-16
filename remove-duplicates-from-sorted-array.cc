/*

http://oj.leetcode.com/problems/remove-duplicates-from-sorted-array/

*/


class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n <= 1)
            return n;
        int j=n-1;
        for(int i=1;i<=j;i++){
            if(A[i] == A[i-1]){
                int tmp=A[i];
                A[i]=A[j];
                A[j]=tmp;
                j--;
                for(int k=i;k<j;k++){
                    if(A[k]>A[k+1]){
                        int tmp=A[k];
                        A[k]=A[k+1];
                        A[k+1]=tmp;
                    }
                }
                
                i--;
                
                
                if(j==-1)
                    return 0;
            }
        }
        
        return j+1;
    }
};