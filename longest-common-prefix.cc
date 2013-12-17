/*

http://oj.leetcode.com/problems/longest-common-prefix/

*/

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string result;  
        int len=strs.size();  
        int i,j;  
        if(len==0)return "";  
        for(j=0;;++j)  
        {  
            for(i=0;i<len;++i){
                if(j>=strs[i].length()||strs[i][j]!=strs[0][j])
                    break;
            }  
                 
            if(i<len)
                break;  
            result+=strs[0][j];  
        }  
        return result;          
    
    }
};