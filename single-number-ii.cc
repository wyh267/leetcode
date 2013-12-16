/*

http://oj.leetcode.com/problems/single-number-ii/

*/

class Solution {
public:
    int singleNumber(int A[], int n) {
        int i;
        int flag=0;
		if(n<=3)
            return A[0];
            
        for(i=0;i<n;i+=3)
        {
            int tmp=0;
            int t=1;
            for(int j=i+1;j<n;j++)
            {
                if(A[i] == A[j]){
                    tmp=A[i+t];
                    A[i+t]=A[j];
                    A[j]=tmp;
                    flag++;
                    t++;
                    if(flag==2)
                        break;
                }
            }
            if(flag<2)
				break;
			flag=0;
				     
        }
      return A[i];
    }
};