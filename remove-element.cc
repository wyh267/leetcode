/*

http://oj.leetcode.com/problems/remove-element/

*/

class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        if(n == 0)
            return 0;
        int j=n-1;
        for(int i=0;i<=j;i++){
            if(A[i] == elem){
                int tmp=A[i];
                A[i]=A[j];
                A[j]=tmp;
                j--;
                i--;
                if(j==-1)
                    return 0;
            }
        }
        
        return j+1;
    }
};