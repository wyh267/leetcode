/*

http://oj.leetcode.com/problems/single-number/

*/

class Solution {
public:
    int singleNumber(int A[], int n) {
        int i;
		if(n==1)
            return A[0];
        for(i=0;i<n;i+=2)
        {
            int tmp=0;
            for(int j=i+1;j<n;j++)
            {
                if(A[i] == A[j]){
                    tmp=A[i+1];
                    A[i+1]=A[j];
                    A[j]=tmp;
                    break;
                }
            }
            if(A[i]!=A[i+1])
				break;
				     
        }
      return A[i];; 
    }
};