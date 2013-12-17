/*

http://oj.leetcode.com/problems/search-for-a-range/

*/

class Solution {
public:
    vector<int> searchRange(int A[], int n, int target) {
        vector<int> res;
        int start=-1;
        int end=-1;
        for(int i=0;i<n;i++){
            
            if(A[i]==target){
                start=i;
                
                int j=i+1;
                if(j<n){
                    while(A[j] == target){
                        j++;
                    }
                    
                }
                end=j-1;
                
                break;
                
                
            }
            
        }
        res.push_back(start);
        res.push_back(end);
        return res;
        
    }
};