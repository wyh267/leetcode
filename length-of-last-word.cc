/*

http://oj.leetcode.com/problems/length-of-last-word/

*/

class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int len=0;
        int last=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i] == ' '){
            	if(len>0){
            	    last=len;
            	    len=0;
            	}
            }else{
                len++;
            }
                
        }
        if(len == 0)
            return last;
        return len;
        
    }
};